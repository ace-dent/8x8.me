#!/bin/bash

# WARNING: Not safe for public use! Created for the author's benefit.
# Assumes:
# - Filenames and directory structure follows the project standard.
# - Correct png images are fed in, or the parameter 'reset' followed by another png image.
# - Exiftool, ImageMagick and OptiPNG executables are available


# Minimal check for input file(s)
if [ -z "$1" ]; then
  echo "Missing filename. Provide at least one png image to process."
  exit
fi

# TODO: Check for external binaries (Exiftool, ImageMagick and OptiPNG)


# Directory for utilities
util_dir="$(dirname "${BASH_SOURCE[0]}")"
readonly util_dir

# Standard metadata for images
readonly project='8x8.me fill pattern.'
readonly copyright='This work is dedicated to the Public Domain by ACED, licensed under CC0.'
readonly license='https://creativecommons.org/publicdomain/zero/1.0/'

# Markdown gallery parameters
md_cpp_start=12   # Default 12
md_bitsy_start=5  # Default 5
md_p8_start=7     # Default 7
md_thumby_start=5 # Default 5
readonly md_cpp_lines=11 # 4x4 patterns will have +1 lines (GAMBY)
readonly md_bitsy_lines=9
readonly md_p8_lines=12 # 4x4 patterns will have +1 lines (fillp)
readonly md_thumby_lines=11

# Code snippet parameters
bitsy_map="$( echo {1..9} {a..z} \
  | tr -d '[:space:]' )" # Sequence of characters to assign for bitsy patterns
readonly bitsy_map
readonly bitsy_map_length=${#bitsy_map}
p8_map="$( echo {a..z} {0..9} {A..Z} \
  | tr -d '[:space:]' )" # Sequence of characters to assign for P8 patterns
readonly p8_map
readonly p8_map_length=${#p8_map}


img_counter=0
bitsy_counter=0
echo ''
echo 'Crunching images into patterns...'
while (( "$#" )); do

  # Check for 'reset' parameter to restart bitsy tile assignment
  if [ "$1" == 'reset' ]; then
    bitsy_counter=0
    echo '--- Bitsy TIL numbering reset ---'
    shift # Get the next parameter
    continue
  fi

  # TODO: Check ~
  #   File exists
  #   Input PNG file validity (file size, file format)

  ((img_counter=img_counter+1))
  ((bitsy_counter=bitsy_counter+1))

  # Get the image name and group from the filename
  img_name="$( basename -s .png "$1" )"
  img_root="${1%/*/*}" # Base directory for the pattern
  img_numbered_group="$( basename "${img_root}" | tr -d ' ' )"
  img_group="$( echo "${img_numbered_group}" | cut -f 2 -d '-' )"
  # Format variations with different case
  name_lowercase="$( echo "${img_name}" | tr '[:upper:]' '[:lower:]' )"
  name_camelcase="${name_lowercase:0:1}${img_name:1}" # Lower case first letter and append remaining characters
  name_camelcase="$( echo -n "${name_camelcase}" | tr -cs '[:alnum:]' '_')" # Replace non-alphanumeric characters with '_' for code compatibility
  group_lowercase="$( echo "${img_group}" | tr '[:upper:]' '[:lower:]' )"


  # Produce images
  # --------------

  # Create the Portable Bit Map (PBM) file
  pbm_file="${img_root}/pbm/${img_name}.pbm"
  magick "$1" -depth 1 -compress None "${pbm_file}"

  # Create tweaked png image for Playdate Pulp
  pulp_file="${img_root}/${img_name}-table-8-8.png" # Required name format
  magick "$1" \
    -define png:color-type='2' -define png:bit-depth='8' \
    -define png:include-chunk=none \
    +level-colors '#BFBCB6','#001830' "${pulp_file}" # Swap colors to match LCD screen
  # TODO: When Pulp code is fixed, update black to '#091624' (less blue)
  optipng -q -nx -o6 "${pulp_file}" # Try to optimize at fixed 8bpp, RGB png first.
  optipng -q -o6 "${pulp_file}" # Also try reducing to 1bpp indexed png.

  # Add metadata to png and pbm files
  exiftool -q -overwrite_original -fast1 \
    -Title="${img_name} - ${img_group} - ${project}" \
    -Copyright="${copyright} ${license}" "$1" "${pulp_file}" \
    -execute -q -overwrite_original -fast5 \
    -Comment="${img_name} - ${img_group} - ${project}" "${pbm_file}" # Primary pbm metadata (single text line in header)
  printf '\n# %s' "${copyright}" "${license}" >> "${pbm_file}" # Extra pbm metadata appended to the plain text file

  # Create the preview image
  preview_file="${img_root%/*}/previews/${img_name}.png"
  magick -size 32x16 tile:"$1" \
    -define png:include-chunk=none \
    -sample 200% "${preview_file}" # Tile the image 4x2 then scale up 2x

  # Bundle the Pulp image into the group's zip archive
  pulp_zip="${img_root%}/${img_group}.playdate-pulp.zip"
  if ! [ -f "${pulp_zip}" ]; then
    # Add 'readme' when first creating the archive.
    printf '%s - %s\n%s\n%s' \
      "${img_group}" "${project//pattern/patterns (Pulp)}" "${copyright}" "${license}" \
      > "${img_root}/readme.txt"
      zip -q -9 --no-dir-entries --junk-paths --no-wild --move "${pulp_zip}" "${img_root}/readme.txt"
  fi
  zip -q -9 --no-dir-entries --junk-paths --no-wild --move "${pulp_zip}" "${pulp_file}"


  # Produce code snippets
  # ---------------------

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
  # Write files with hexadecimal values and ascii art comments
  for line in {1..8}; do
    binary_str="$( sed -n ${line}p "${bin_h}" )" # Horizontal
    value_dec=$((2#${binary_str}))
    printf '    0x%02X,' "${value_dec}"
    printf '  # %s\n' "${binary_str}" | tr '01' '▓░'
  done > "${hex_h}"
  for line in {1..8}; do
    binary_str="$( sed -n ${line}p "${bin_v}" )" # Vertical
    value_dec=$((2#${binary_str}))
    printf '    0x%02X,' "${value_dec}"
    printf '  # %s\n' "${binary_str}" | tr '01' '▓░'
  done > "${hex_v}"
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
    pattern_height=4 # Pattern heights below 4 are treated the same
  fi
  echo "$img_name - Pattern width ${pattern_width} px x height ${pattern_height} px."



  # Create markdown gallery entry for the pattern
  md_file="${img_root}/${img_group}.markdown.WIP.txt"
  md_extra_lines=0
  if [ ${pattern_width} -le 4 ] && [ ${pattern_height} -le 4 ]; then
    md_extra_lines=1 # cpp and p8 code snippets will output an extra line
  fi
  {
    printf '| %s ' "${img_name}"
    printf '| <img src="../previews/%s.png"' "${img_name}"
    printf ' width="64" height="32" alt=""> '
    printf '| [png](png/%s.png) ' "${img_name}"
     # Add cpp link
    ((md_cpp_end=md_cpp_start+md_cpp_lines+md_extra_lines))
    printf '| [cpp](%s.h#L%u-L%u) ' \
      "${img_group}" "${md_cpp_start}" "${md_cpp_end}"
    ((md_cpp_start=md_cpp_end+2))
    # Add bitsy link
    ((md_bitsy_end=md_bitsy_start+md_bitsy_lines))
    printf '| [txt](%s.bitsy.txt#L%u-L%u) ' \
       "${img_group}" "${md_bitsy_start}" "${md_bitsy_end}"
    ((md_bitsy_start=md_bitsy_end+2))
    # Add P8 link
    ((md_p8_end=md_p8_start+md_p8_lines+md_extra_lines))
    printf '| [p𝟪](%s.p8.lua#L%u-L%u) ' \
       "${group_lowercase}" "${md_p8_start}" "${md_p8_end}"
    ((md_p8_start=md_p8_end+2))
     # Add Thumby link
    ((md_thumby_end=md_thumby_start+md_thumby_lines))
    printf '| [py](%s.thumby.py#L%u-L%u) |\n' \
       "${img_group}" "${md_thumby_start}" "${md_thumby_end}"
    ((md_thumby_start=md_thumby_end+2))
  } >> "${md_file}"
  # In future, may add Picotron `p𝟨𝟦` and UDG `bas` links



  # Create cpp (Arduboy) code
  cpp_file="${img_root}/${img_group}.h.WIP.txt" # Vertical data
  cpp_horiz_file="${img_root}/${img_group}.h.WIP2.txt" # Horizontal data
  # Vertical format data (standard sprite)
  {
    printf '\nconstexpr uint8_t %s[] PROGMEM {\n' "${name_camelcase}"
    printf '    8, 8,  // 8x8 px image\n'
    sed 's|#|//|g' "${hex_v}" # Change '#' to '//' for comments
    printf '};\n// Magic: '
  } >> "${cpp_file}"
  # Alternative 'magic' representation
  if [ ${pattern_width} -eq 1 ]; then
    # Pattern width 1 - byte value encoded as a single decimal
    {
      # Convert only the first byte (column 1) to decimal
      binary_str="$( sed -n 1p "${bin_v}" )"
      value_dec=$((2#${binary_str}))
      if [ ${value_dec} -lt 246 ]; then
        printf '%u\n' ${value_dec}
      else # Invert bits for large values to save 1 char, e.g. '255' to '~0'
        ((value_dec= 255 - value_dec))
        printf '~%u\n' ${value_dec}
      fi
    } >> "${cpp_file}"
  elif [ ${pattern_width} -eq 2 ]; then
    # Pattern width 2 - two byte values encoded with a ternary operator
    # TODO: Catch edge cases where string encoding is smaller "Az"[i%2]
    # e.g. `"xy"[i%2]` vs `i&1?121:120`
    {
      # First value (odd columns, i&1=true) is byte 2 as a decimal
      binary_str="$( sed -n 2p "${bin_v}" )"
      value_dec=$((2#${binary_str}))
      if [ ${value_dec} -lt 246 ]; then
        printf 'i&1?%u' ${value_dec}
      else # Invert bits for large values, e.g. '255' to '~0'
        ((value_dec= 255 - value_dec))
        printf 'i&1?~%u' ${value_dec}
      fi
      # Second value (even columns, i&1=false, inc. zero) is byte 1 as a decimal
      binary_str="$( sed -n 1p "${bin_v}" )"
      value_dec=$((2#${binary_str}))
      if [ ${value_dec} -lt 246 ]; then
        printf ':%u\n' ${value_dec}
      else # Invert bits for large values, e.g. '255' to '~0'
        ((value_dec= 255 - value_dec))
        printf ':~%u\n' ${value_dec}
      fi
    } >> "${cpp_file}"
  else # Pattern width 4 and 8
    # Encode 'magic' as a string... hold tight...
    # First pass: scan byte values to estimate if inverted form will be more compact
    column=${pattern_width}
    invert_bits_merit=0 # Figure of merit (number of characters) when inverting all bits
    while [ ${column} -gt 0 ]; do
      # Find the decimal value for the current column (byte)
      binary_str="$( sed -n ${column}p "${bin_v}" )"
      value_dec=$((2#${binary_str}))
      if [ ${value_dec} -le 13 ]; then
        if [ ${value_dec} -eq 0 ] && [ ${column} -eq ${pattern_width} ]; then
          ((invert_bits_merit=invert_bits_merit+4)) # cpp strings are null terminated
        else
          ((invert_bits_merit=invert_bits_merit+2))
        fi
      elif [ ${value_dec} -le 31 ]; then
        ((invert_bits_merit=invert_bits_merit+1))
      elif [ ${value_dec} -le 127 ]; then
        ((invert_bits_merit=invert_bits_merit+3))
      elif [ ${value_dec} -le 223 ]; then
        ((invert_bits_merit=invert_bits_merit-3))
      elif [ ${value_dec} -le 241 ]; then
        ((invert_bits_merit=invert_bits_merit-1))
      else
        if [ ${value_dec} -eq 255 ] && [ $column = $pattern_width ]; then
          ((invert_bits_merit=invert_bits_merit-4)) # cpp strings are null terminated
        else
          ((invert_bits_merit=invert_bits_merit-2))
        fi
      fi
      ((column=column-1))
    done
    # Second pass: Encode the string
    # Process the columns (bytes) in reverse order
    column=$pattern_width
    # We store the end of the string first
    encoded_string='"[i%'"${pattern_width}"']'
    digit_present=0
    while [ $column -gt 0 ]; do
      # Find the octal value for the current column (byte)
      binary_str=$( sed -n ${column}p "${bin_v}" )
      value_oct=$(printf '%o' "$((2#${binary_str}))")
      # Invert all bits in the pattern if we save 1 or more characters
      if [ ${invert_bits_merit} -lt -1 ]; then
        ((value_oct= 377 - value_oct))
      fi
      # Process the octal value, to handle special cases for encoding
      case ${value_oct} in
        [0-6])
          if [ ${value_oct} -eq 0 ] && [ ${column} = ${pattern_width} ]; then
            # cpp strings are always null terminated, so encoded for free
            encoded_byte=''
          elif [ ${digit_present} -eq 1 ]; then
            # Add leading zeroes to make octal value unambiguous
            encoded_byte='\00'"${value_oct}"
          else
            encoded_byte='\'"${value_oct}"
          fi
        ;;
        # Escape codes for non-printing characters are more compact, when available
        7|1[0-5])
          index=$((8#${value_oct} - 6)) # Convert to decimal and offset
          encoded_byte='\'"$(echo 'abtnvfr' | cut -c ${index})"
        ;;
        33)
          encoded_byte='\e'
        ;;
        1[6-7]|2[0-7]|3[0-2]|3[4-7])
          if [ ${digit_present} -eq 1 ]; then
            # Add leading zero to make octal value unambiguous
            encoded_byte='\0'"${value_oct}"
          else
            encoded_byte='\'"${value_oct}"
          fi
        ;;
        # 040 Start of printable, 7-bit characters (32 or 0x20)
        4[0-1]|4[3-7]|5[0-7]|6[0-7]|7[0-7]|10[0-7]|11[0-7]|12[0-7]|13[0-3])
          encoded_byte=$(printf '%b' '\'"${value_oct}")
        ;;
        42)
          encoded_byte='\"' # Double quote character must be escaped with `\`
        ;;
        134)
          encoded_byte='\\' # Back slash character must be escaped with `\`
        ;;
        13[5-7]|14[0-7]|15[0-7]|16[0-7]|17[0-6])
          encoded_byte=$(printf '%b' '\'"${value_oct}")
        ;;
        # 0176 End of printable, 7-bit characters (127 or 0x7E)
        *)
          # Remaining values are encoded as a 3 digit octal
          encoded_byte='\'"${value_oct}"
        ;;
      esac
      # Check if the character output is a valid octal digit (0-7)
      # This may affect encoding of the next (preceding) octal value
      case "${encoded_byte}" in
        [0-7])
          digit_present=1
        ;;
        *)
          digit_present=0
        ;;
      esac
      encoded_string="${encoded_byte}${encoded_string}" # Prepend byte to magic string
      ((column=column-1))
    done
    encoded_string='"'"${encoded_string}"
    if [ ${invert_bits_merit} -lt -1 ]; then
      encoded_string='~'"${encoded_string}"
    fi
    printf '%s\n' "${encoded_string}" >> "${cpp_file}"
  fi
  # Bonus 4x4px GAMBY data
  if [ $pattern_width -le 4 ] && [ $pattern_height -le 4 ]; then
    {
      printf '// GAMBY: 0x'
      for column in {1..4}; do
        sed -n ${column}p "${hex_v}" \
          | head -c 7 \
          | tail -c 1
      done
      printf '\n'
    } >> "${cpp_file}"
  fi
  # Additional horizontal format (separate file)
  {
    printf '\nconstexpr uint8_t PROGMEM %s[] {\n' "${name_camelcase}"
    printf '    8, 8,  // 8x8 px image\n'
    sed 's|#|//|g' "$hex_h" # Change '#' to '//' for comments
    printf '};\n'
  } >> "${cpp_horiz_file}"



  # Create bitsy tile data
  bitsy_file="${img_root}/${img_group}.bitsy.WIP.txt"
  index=$(( (bitsy_counter-1) % bitsy_map_length ))
  bitsy_mapped_char="${bitsy_map:index:1}"
  {
    printf '\nTIL %c\n' "${bitsy_mapped_char}"
    cat "$bin_h"
    printf 'NAME %s\n' "${name_lowercase}"
  } >> "${bitsy_file}"



  # Create PICO-8 code
  p8_file="${img_root}/${img_group}.p8.lua.WIP.txt"
  # Store bitmap data as a custom font
  index=$(( (img_counter-1) % p8_map_length ))
  p8_mapped_char="${p8_map:index:1}"
  ascii_code=$( printf '%d' "'${p8_mapped_char}" )
  {
    printf -- "\n--%u '%c' %s\n" "${ascii_code}" "${p8_mapped_char}" "${name_lowercase}"
    printf 'poke(0x5600+(8* %u),\n' "${ascii_code}"
    for row in {1..8}; do
    # P8 custom font characters are encoded row wise (horizontally).
    # The LSB of each byte corresponds to the first pixel of a row, (not the MSB),
    # so the bit sequence is reversed before calculating decimal value
      binary_str="$( sed -n ${row}p "${bin_h}" | rev )"
      value_dec=$((2#${binary_str}))
      printf ' %3u' "${value_dec}"
      if [ $row -lt 8 ]; then
        printf -- ', -- '
      else
        printf -- '  -- '
      fi
      sed -n ${row}p "${bin_h}" | tr '01' '▒█' # Shown as drawn to screen, not as the stored bitfield (reversed)
    done
    printf ')\n'
    # Helper code snippet to copy font character to Sprite 0
    printf -- '-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ%c"for i=0,448,64do memcpy(i,24576+i,4)end cstore()\n' \
      "${p8_mapped_char}"
  } >> "${p8_file}"
  # Bonus: 'magic' one-off character, encoded as a string
  # We store the end of the string first
  encoded_string='"'
  digit_present=0
  for row in {8..1}; do
    # Find the decimal value for the current row (byte)
    binary_str="$( sed -n ${row}p "${bin_h}" | rev )"
    value_dec=$((2#${binary_str}))
    if [ ${value_dec} -eq 0 ] && [ ${digit_present} -eq 1 ]; then
      # Handle special case to make octal value unambiguous
      encoded_byte='\000'
      digit_present=0
    else
      # Use 'P8SCII' codepage to lookup string literal to encode the byte
      index=$((value_dec+1))
      encoded_byte="$(sed -n ${index}p "${util_dir}/p8-codepage")"
      if [ ${value_dec} -ge 48 ] && [ ${value_dec} -le 57 ]; then # Characters '0' - '9'
        digit_present=1
      else
        digit_present=0
      fi
    fi
    encoded_string="${encoded_byte}${encoded_string}" # Prepend byte to magic string
  done
  printf -- '--magic: ?"⁶rw¹シ⁶.".."%s\n' "${encoded_string}" >> "${p8_file}"
  # Bonus: For 4x4px patterns produce fillp() alternative
  if [ ${pattern_width} -le 4 ] && [ ${pattern_height} -le 4 ]; then
    # The hex value for PICO-8 can be reused for Picotron
    pico_fillp_string='0x'
    for row in {1..4}; do
      # Invert bits 0<>1 to fix fore-/background
      binary_str=$(sed -n ${row}p "${bin_h}"\
        | head -c 4\
        | tr '01' '10')
      value_hex=$( printf '%X' $((2#${binary_str})) )
      pico_fillp_string="${pico_fillp_string}${value_hex}"
    done
    printf -- '--fillp(%u)\n' "${pico_fillp_string}" >> "${p8_file}"
  fi



  # Create Thumby code
  thumby_file="${img_root}/${img_group}.thumby.WIP.txt"
  {
    printf '\n%s = bytearray([\n' "${name_camelcase}"
    printf '    # BITMAP: width: 8, height: 8, ['
    # Produce array with decimal values (uses less characters)
    for column in {1..8}; do
      binary_str=$( sed -n ${column}p "${bin_v}" )
      value_dec=$((2#${binary_str}))
      printf '%u' "${value_dec}"
      if [ ${column} -le 7 ]; then
        printf ','
      else
        printf ']\n'
      fi
    done
    cat "${hex_v}"
    printf '])\n# %sSprite = thumby.Sprite(8, 8, %s)\n' "${name_camelcase}" "${name_camelcase}"
  } >> "${thumby_file}"



  # Remove temporary files
  rm -f "${bin_h}" ; rm -f "${bin_v}" ; rm -f "${hex_h}" ; rm -f "${hex_v}"

  # Move to next image file provided
  shift
done

echo '...Finished :)'
echo ''
exit
