#!/bin/bash

# WARNING: Not safe for public use! Created for the author's benefit.
# Assumes filenames and directory structure follows the project standard.


# Minimal check for input file(s)
if [ -z "$1" ]; then
  echo "Missing filename. Provide at least one png image to process."
  exit
fi

# TODO: Check for external executables (ImageMagick and ExifTool)


# Directory for utilities
readonly util_dir="$(dirname "${BASH_SOURCE[0]}")"

# Standard metadata for images
readonly project='8x8.me fill pattern.'
readonly copyright='This work is dedicated to the Public Domain by ACED, licensed under CC0.'
readonly license='https://creativecommons.org/publicdomain/zero/1.0/'

# Markdown gallery parameters
md_cpp_start=12   # Default 12
md_bitsy_start=5  # Default 5
md_p8_start=7     # Default 7
md_thumby_start=5 # Default 5
readonly md_cpp_lines=11 # 4x4 patterns have +1 lines (GAMBY)
readonly md_bitsy_lines=9
readonly md_p8_lines=12 # 4x4 patterns have +1 lines (fillp)
readonly md_thumby_lines=11


img_counter=0
while (( "$#" )); do

  ((img_counter=img_counter+1))

  # Get the image name and group from the filename
  img_name="$( basename -s .png "$1" )"
  img_root="${1%/*/*}" # Base directory for the pattern
  img_numbered_group="$( basename "${img_root}" | tr -d ' ' )"
  img_group="$( echo "${img_numbered_group}" | cut -f 2 -d "-" )"
  # Format variations with different case
  name_lowercase="$( echo "${img_name}" | tr '[:upper:]' '[:lower:]' )"
  name_camelcase="${name_lowercase:0:1}${img_name:1}" # Lower case first letter and append remaining characters
  name_camelcase="$( echo -n "${name_camelcase}" | tr -cs '[:alnum:]' '_')" # Replace non-alphanumeric characters with '_' for code compatibility
  group_lowercase="$( echo "${img_group}" | tr '[:upper:]' '[:lower:]' )"


  # Add metadata to the original png file
  exiftool -q -overwrite_original -fast1 \
    -Title="${img_name} - ${img_group} - ${project}" \
    -Copyright="${copyright} ${license}" "$1"

  # Create the Portable Bit Map (PBM) file
  pbm_file="${img_root}/pbm/${img_name}.pbm"
  magick "$1" -depth 1 -compress None "${pbm_file}"
  exiftool -q -overwrite_original -fast5 \
    -Comment="${img_name} - ${img_group} - ${project}" "${pbm_file}" # Primary metadata (single text line in header)
  printf '\n# %s' "${copyright}" "${license}" >> "${pbm_file}" # Extra metadata appended to the plain text file

  # Create the preview image
  preview_file="${img_root%/*}/previews/${img_name}.png"
  magick -size 32x16 tile:"$1" -sample 200% "${preview_file}" # Tile the image 4x2 then scale up 2x


  # Create Horizontal and Vertical temporary files, with plain text binary and hexadecimal
  bin_h="${img_root}/$img_name.bin-h.txt"
  bin_v="${img_root}/$img_name.bin-v.txt"
  hex_h="${img_root}/$img_name.hex-h.txt"
  hex_v="${img_root}/$img_name.hex-v.txt"
  magick "$1" -depth 1 +negate -compress None PBM:- \
    | tail -n +3 \
    | tr -d ' ' > "${bin_h}"
  magick "$1" -depth 1 +negate -rotate 90 -compress None PBM:- \
    | tail -n +3 \
    | tr -d ' ' > "${bin_v}"
  echo -n "" > "${hex_h}"
  echo -n "" > "${hex_v}"
  # Write files with hexadecimal values and comment lines
  line=1; binary_str=""
  while [ ${line} -le 8 ]; do
    binary_str="$( sed -n ${line}p "$bin_h" )" # Horizontal
    {
      printf '    0x%02X,' "$((2#${binary_str}))"
      printf '  # %s\n' "${binary_str}" | tr '01' '▓░'
    } >> "${hex_h}"
    binary_str="$( sed -n ${line}p "${bin_v}" )" # Vertical
    {
      printf '    0x%02X,' "$((2#${binary_str}))"
      printf '  # %s\n' "${binary_str}" | tr '01' '▓░'
    } >> "${hex_v}"
    ((line=line+1))
  done
  # Check the pattern's minimum repeat width and height
  pattern_width=8
  if [ "$(head -n 4 "${bin_v}")" = "$(tail -n 4 "${bin_v}")" ]; then
    pattern_width=4
    if [ "$(head -n 2 "${bin_v}")" = "$(tail -n 2 "${bin_v}")" ]; then
      pattern_width=2
      if [ "$(head -n 1 "${bin_v}")" = "$(tail -n 1 "${bin_v}")" ]; then
        pattern_width=1
      fi
    fi
  fi
  pattern_height=8
  if [ "$(head -n 4 "${bin_h}")" = "$(tail -n 4 "${bin_h}")" ]; then
    pattern_height=4
  fi
  echo "$img_name - Pattern width $pattern_width px x height $pattern_height px."

  # Start markdown gallery entry
  md_file="${img_root}/${img_group}.markdown.WIP.txt"
  md_extra_lines=0
  if [ $pattern_width -le 4 ] && [ $pattern_height -le 4 ]; then
    md_extra_lines=1 # cpp and p8 code snippets will output an extra line
  fi
  {
    printf '\n| %s ' "${img_name}"
    printf '| ![](/previews/%s.png) ' "${img_name}"
    printf '| [png](/%s/png/%s.png) ' "${img_numbered_group}" "${img_name}"
  } >> "${md_file}"

  # Create cpp (Arduboy) code
  cpp_file="${img_root}/${img_group}.h.WIP.txt" # Vertical data
  cpp_hori_file="${img_root}/${img_group}.h.WIP2.txt" # Horizontal data
  # Vertical format data (sprite standard)
  {
    printf '\nconstexpr uint8_t PROGMEM %s[] {\n' "${name_camelcase}"
    printf '    8, 8,  // 8x8 px image\n'
    sed 's|#|//|g' "${hex_v}" # Change '#' to '//' for comments
  } >> "${cpp_file}"
  # Alternative 'magic' representation
  printf '};\n// Magic: ' >> "${cpp_file}"
  if [ ${pattern_width} -eq 1 ]; then
    value=$((2#$(sed -n 1p "${bin_v}"))) # Convert first byte to decimal
    if [ ${value} -lt 246 ]; then
      printf '%u\n' ${value} >> "${cpp_file}"
    else
      ((value=255-value)) # Invert large values to save 1 char, e.g. '255' to '~0'
      printf '~%u\n' ${value} >> "${cpp_file}"
    fi
  elif [ ${pattern_width} -eq 2 ]; then
    # TODO: Catch edge cases where string encoding is smaller "Az"[i%2]
    # e.g. bayerDither04 `"U"[i%2]` vs `i&1?85:0`
    {
      value=$((2#$(sed -n 1p "${bin_v}"))) # Convert byte 1 (first column) to decimal
      if [ ${value} -lt 246 ]; then
        printf 'i&1?%u' ${value}
      else
        ((value=255-value)) # Invert large values, e.g. '255' to '~0'
        printf 'i&1?~%u' ${value}
      fi
      value=$((2#$(sed -n 2p "${bin_v}"))) # Convert byte 2 (second column) to decimal
      if [ ${value} -lt 246 ]; then
        printf ':%u\n' ${value}
      else
        ((value=255-value)) # Invert large values, e.g. '255' to '~0'
        printf ':~%u\n' ${value}
      fi
    } >> "${cpp_file}"
  else # Pattern width 4 and 8
    # Encode 'magic' as a string... hold tight...
    # First pass: scan byte values to estimate if inverted form will be more compact
    column=$pattern_width; VALUE=""; INVERT=0
    while [ $column -gt 0 ]; do
      # Find the decimal value for the current column (byte)
      VALUE=$(printf '%u' "$((2#$(sed -n ${column}p "${bin_v}")))")
      if [ $VALUE -le 13 ]; then
        if [ $VALUE -eq 0 ] && [ $column = $pattern_width ]; then
          ((INVERT=INVERT+4)) # cpp strings are null terminated
        else
          ((INVERT=INVERT+2))
        fi
      elif [ $VALUE -le 31 ]; then
        ((INVERT=INVERT+1))
      elif [ $VALUE -le 127 ]; then
        ((INVERT=INVERT+3))
      elif [ $VALUE -le 223 ]; then
        ((INVERT=INVERT-3))
      elif [ $VALUE -le 241 ]; then
        ((INVERT=INVERT-1))
      else
        if [ $VALUE -eq 255 ] && [ $column = $pattern_width ]; then
          ((INVERT=INVERT-4)) # cpp strings are null terminated
        else
          ((INVERT=INVERT-2))
        fi
      fi
      ((column=column-1))
    done
    # Second pass: Encode the string
    # Process the columns (bytes) in reverse order
    column=$pattern_width; VALUE=""; digit_present=0
    # We store the end of the string first
    STRING="\"[i%$pattern_width]"
    while [ $column -gt 0 ]; do
      # Find the octal value for the current column (byte)
      VALUE=$(printf '%o' "$((2#$(sed -n ${column}p "${bin_v}")))")
      if [ $INVERT -lt -1 ]; then
        ((VALUE=377-VALUE))
      fi
      # Process the octal value, to handle special cases for encoding
      case $VALUE in
        [0-6])
          if [ ${VALUE} -eq 0 ] && [ ${column} = ${pattern_width} ]; then
            # cpp strings are always null terminated
            VALUE=""
          elif [ ${digit_present} -eq 1 ]; then
            # Add leading zeroes to make octal value unambiguous
            VALUE="\\00$VALUE"
          else
            VALUE="\\$VALUE"
          fi
        ;;
        # Escape codes are more compact
        7)
          VALUE="\\a"
        ;;
        10)
          VALUE="\\b"
        ;;
        11)
          VALUE="\\t"
        ;;
        12)
          VALUE="\\n"
        ;;
        13)
          VALUE="\\v"
        ;;
        14)
          VALUE="\\f"
        ;;
        15)
          VALUE="\\r"
        ;;
        1[6-7]|2[0-7]|3[0-2])
          if [ ${digit_present} -eq 1 ]; then
            # Add leading zero to make octal value unambiguous
            VALUE="\\0$VALUE"
          else
            VALUE="\\$VALUE"
          fi
        ;;
        33)
          VALUE="\\e"
        ;;
        3[4-7])
          if [ ${digit_present} -eq 1 ]; then
            VALUE="\\0$VALUE"
          else
            VALUE="\\$VALUE"
          fi
        ;;
        # 040 Start of printable, 7-bit characters (32 or 0x20)
        4[0-1])
          VALUE=$(printf '%b' "\\$VALUE")
        ;;
        # Escape for ' " '
        42)
          VALUE="\\\""
        ;;
        4[3-7]|5[0-7]|6[0-7]|7[0-7]|10[0-7]|11[0-7]|12[0-7]|13[0-3])
          VALUE=$(printf '%b' "\\$VALUE")
        ;;
        # Escape for ' \ '
        134)
          VALUE="\\\\"
        ;;
        13[5-7]|14[0-7]|15[0-7]|16[0-7]|17[0-6])
          VALUE=$(printf '%b' "\\$VALUE")
        ;;
        # 0176 End of printable, 7-bit characters (127 or 0x7E)
        *)
          # Remaining values are encoded as a 3 digit octal
          VALUE="\\""$VALUE"
        ;;
      esac
      # Check if the character output is a valid octal digit (0-7)
      # This may affect encoding of the next (preceding) octal value
      case "${VALUE}" in
        [0-7])
          digit_present=1
        ;;
        *)
          digit_present=0
        ;;
      esac
      STRING="$VALUE""$STRING"
      ((column=column-1))
    done
    STRING="\"""$STRING"
    if [ $INVERT -lt -1 ]; then
      STRING="~""$STRING"
    fi
    printf '%s\n' "$STRING" >> "${cpp_file}"
  fi
  # Bonus 4x4px GAMBY data
  if [ $pattern_width -le 4 ] && [ $pattern_height -le 4 ]; then
    printf '// GAMBY: 0x' >> "${cpp_file}"
    column=1
    while [ $column -le 4 ]; do
      sed -n ${column}p "${hex_v}" \
        | head -c 7\
        | tail -c 1 >> "${cpp_file}"
      ((column=column+1))
    done
    printf '\n' >> "${cpp_file}"
  fi
  # Additional horizontal format (seperate file)
  {
    printf '\nconstexpr uint8_t PROGMEM %s[] {\n' "${name_camelcase}"
    printf '    8, 8,  // 8x8 px image\n'
    sed 's|#|//|g' "$hex_h" # Change '#' to '//' for comments
    printf '};\n'
  } >> "${cpp_hori_file}"
  # Add link to markdown gallery
  ((md_cpp_end=md_cpp_start+md_cpp_lines+md_extra_lines))
  printf '| [cpp](/%s/%s.h#L%u-L%u) ' "${img_numbered_group}" "${img_group}" $md_cpp_start $md_cpp_end >> "${md_file}"
  ((md_cpp_start=md_cpp_end+2))


  # Create Bitsy tile data
  bitsy_file="${img_root}/${img_group}.bitsy.WIP.txt"
  {
    printf '\nTIL %u\n' "${img_counter}" # Decimal TIL number should be base36 for Bitsy
    cat "$bin_h"
    printf 'NAME %s\n' "${name_lowercase}"
  } >> "${bitsy_file}"
  # Add link to markdown gallery
  ((md_bitsy_end=md_bitsy_start+md_bitsy_lines))
  printf '| [txt](/%s/%s.bitsy.txt#L%u-L%u) ' "${img_numbered_group}" "${img_group}" $md_bitsy_start $md_bitsy_end >> "${md_file}"
  ((md_bitsy_start=md_bitsy_end+2))


  # Create PICO-8 code
  p8_file="${img_root}/${img_group}.p8.lua.WIP.txt"
  # Produce data as a custom font
  ((ascii_code=96+img_counter)) # Start encoding at character 'a'=97
  ascii_char=$(printf "\x$(printf '%x' ${ascii_code})")
  {
    printf -- "\n--%u '%s' %s\n" ${ascii_code} "${ascii_char}" "${name_lowercase}"
    printf 'poke(0x5600+(8* %u),\n' ${ascii_code}
  } >> "${p8_file}"
  row=1
  while [ $row -le 8 ]; do
    # P8 custom fonts are horizontal but LSB first, so bit sequence is reversed before calculating decimal value
    printf ' %3u' "$((2#$(sed -n ${row}p "${bin_h}" | rev)))"
    if [ $row -lt 8 ]; then
      printf -- ', -- '
    else
      printf -- '  -- '
    fi
    sed -n ${row}p "${bin_h}" | tr '01' '▒█' # Shown as drawn to screen - not as the stored (reversed) bitfield
    ((row=row+1))
  done >> "${p8_file}"

  printf ')\n' >> "${p8_file}"
  # Helper code snippet to copy font character to Sprite 0
  printf -- '-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ%s"for i=0,448,64do memcpy(i,24576+i,4)end cstore()\n' "${ascii_char}">> "${p8_file}"
  # Bonus: 'magic' one-off character, encoded as a string
  column=8; VALUE=""; digit_present=0
  # We store the end of the string first
  STRING="\""
  while [ $column -gt 0 ]; do
    # Find the decimal value for the current column (byte)
    VALUE=$(printf '%i' "$((2#$(sed -n ${column}p "$bin_h" | rev)))")
    if [ $VALUE -eq 0 ] && [ ${digit_present} -eq 1 ]; then
      STRING='\000'"${STRING}"
      digit_present=0
    else
      ((VALUE=VALUE+1))
      STRING=$(sed -n ${VALUE}p "${util_dir}/p8-codepage")${STRING}
      if [ $VALUE -ge 49 ] && [ $VALUE -le 58 ] ; then
        digit_present=1
      else
        digit_present=0
      fi
    fi
    ((column=column-1))
  done
  printf -- '--magic: ?"⁶rw¹シ⁶.".."%s\n' "${STRING}" >> "${p8_file}"
  # Bonus: For 4x4px patterns produce fillp() alternative
  if [ $pattern_width -le 4 ] && [ $pattern_height -le 4 ]; then
    printf -- '--fillp(' >> "${p8_file}"
    row=1; VALUE=""; STRING="0x"
    while [ $row -le 4 ]; do
      # Invert binary values 0<>1 to fix fore-/background
      VALUE=$(sed -n ${row}p "${bin_h}"\
        | head -c 4\
        | tr '01' '10')
      STRING=${STRING}$(printf '%X' $((2#${VALUE})))
      ((row=row+1))
    done
    printf '%u)\n' "$STRING" >> "${p8_file}"
  fi
  # Add link to markdown gallery
  ((md_p8_end=md_p8_start+md_p8_lines+md_extra_lines))
  printf '| [lua](/%s/%s.p8.lua#L%u-L%u) ' "${img_numbered_group}" "${group_lowercase}" $md_p8_start $md_p8_end >> "${md_file}"
  ((md_p8_start=md_p8_end+2))


  # Create Thumby code
  thumby_file="${img_root}/${img_group}.thumby.WIP.txt"
  {
    printf '\n%s = bytearray([\n' "${name_camelcase}"
    printf '    # BITMAP: width: 8, height: 8, ['
  } >> "${thumby_file}"
  column=1
  # Produce array with decimal values (uses less characters)
  while [ ${column} -le 8 ]; do
    printf '%u' "$((2#$(sed -n ${column}p "${bin_v}")))"
    if [ ${column} -le 7 ]; then
      printf ','
    else
      printf ']\n'
    fi
    ((column=column+1))
  done >> "${thumby_file}"
  {
    cat "${hex_v}"
    printf '])\n# %sSprite = thumby.Sprite(8, 8, %s)\n' "${name_camelcase}" "${name_camelcase}"
  } >> "${thumby_file}"
  # Add link to markdown gallery
  ((md_thumby_end=md_thumby_start+md_thumby_lines))
  printf '| [py](/%s/%s.thumby.py#L%u-L%u) |' "${img_numbered_group}" "${img_group}" $md_thumby_start $md_thumby_end >> "${md_file}"
  ((md_thumby_start=md_thumby_end+2))

  # Remove temporary files
  rm -f "${bin_h}" ; rm -f "${bin_v}" ; rm -f "${hex_h}" ; rm -f "${hex_v}"

  # Move to next image file provided
  shift
done