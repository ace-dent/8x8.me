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


img_counter=0
while (( "$#" )); do
  
  ((img_counter=img_counter+1))
  
  # Get the image name and group from the filename
  img_name="$( basename -s .png "$1" )"
  img_root="${1%/*/*}" # Base directory for the pattern
  img_group="$( basename "${img_root}" | cut -f 2 -d "-" )"
  # Format variations for image name
  name_lowercase="$( echo "${img_name}" | tr '[:upper:]' '[:lower:]' )"
  name_camelcase="${name_lowercase:0:1}${img_name:1}" # Lower case first letter and append remaining characters
  name_camelcase="$( echo -n "${name_camelcase}" | tr -cs '[:alnum:]' '_')" # Replace non-alphanumeric characters with `_` for code compatibility


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
  
  
  # Create Horizontal and Vertical temporary files, in plain text binary and hexadecimal
  HBIN="${img_root}/$img_name.h-bin.txt"
  VBIN="${img_root}/$img_name.v-bin.txt"
  HHEX="${img_root}/$img_name.h-hex.txt"
  VHEX="${img_root}/$img_name.v-hex.txt"
  magick "$1" -depth 1 +negate -compress None PBM:- \
    | tail -n +3 \
    | tr -d " " > "$HBIN"
  magick "$1" -depth 1 +negate -rotate 90 -compress None PBM:- \
    | tail -n +3 \
    | tr -d " " > "$VBIN"
  echo -n "" > "$HHEX"
  echo -n "" > "$VHEX"
  line=1; binary=""
  # Write files with hexadecimal values and comment lines
  while [ ${line} -le 8 ]; do
    binary="$( sed -n ${line}p "$HBIN" )" # Horizontal
    printf '    0x%02X' "$((2#${binary}))" >> "$HHEX"
    printf '  # %s\n' "${binary}" | tr '01' '▓░' >> "$HHEX"
    binary="$( sed -n ${line}p "$VBIN" )" # Vertical
    printf '    0x%02X' "$((2#${binary}))" >> "$VHEX"
    printf '  # %s\n' "${binary}" | tr '01' '▓░' >> "$VHEX"
    ((line=line+1))
  done
  pattern_width=8
  if [ "`head -n 4 "$VBIN"`" = "`tail -n 4 "$VBIN"`" ]; then
    pattern_width=4
    if [ "`head -n 2 "$VBIN"`" = "`head -n 4 "$VBIN" | tail -n 2`" ]; then
      pattern_width=2
      if [ "`head -n 1 "$VBIN"`" = "`head -n 2 "$VBIN" | tail -n 1`" ]; then
        pattern_width=1
      fi
    fi
  fi
  pattern_height=8
  if [ "`head -n 4 "$HBIN"`" = "`tail -n 4 "$HBIN"`" ]; then
    pattern_height=4
  fi
  echo "$img_name - Pattern width $pattern_width px x height $pattern_height px."


  # Create Bitsy tile data
  bitsy_file="${img_root}/${img_group}.bitsy.WIP.txt"
  printf '\nTIL %d\n' "${img_counter}" >> "${bitsy_file}" # Decimal TIL number would ideally be base36 for Bitsy
  cat "$HBIN" >> "${bitsy_file}"
  printf 'NAME %s\n' "${name_lowercase}" >> "${bitsy_file}"


  # Create cpp (Arduboy) code
  cpp_file="${img_root}/${img_group}.h.WIP.txt" # Vertical data
  cpp_hori_file="${img_root}/${img_group}.h.WIP2.txt" # Horizontal data
  # Vertical format data (sprite standard)
  printf '\nconstexpr uint8_t PROGMEM %s[] {\n' "${name_camelcase}" >> "$cpp_file"
  printf '    8, 8,  // 8x8 px image\n' >> "${cpp_file}"
  sed 's|#|//|g' "$VHEX" >> "${cpp_file}" # Change `#` to `//` for comments
  # Alternative 'magic' representation
  printf '};\n// Magic: ' >> "${cpp_file}"
  if [ ${pattern_width} -eq 1 ]; then
    printf '%i\n' "$((2#`sed -n 1p "$VBIN"`))" >> "${cpp_file}"
  elif [ ${pattern_width} -eq 2 ]; then
    # TODO: Catch edge cases where string encoding is smaller "Az"[i%2]
    # e.g. bayerDither04 `"U"[i%2]` vs `i&1?85:0`
    printf 'i&1?%i' "$((2#`sed -n 1p "$VBIN"`))" >> "${cpp_file}"
    printf ':%i\n' "$((2#`sed -n 2p "$VBIN"`))" >> "${cpp_file}"
  else
    # Encode 'magic' as a string... hold tight...
    # First pass: scan byte values to estimate if inverted form will be more compact
    column=$pattern_width; VALUE=""; INVERT=0
    while [ $column -gt 0 ]; do
      # Find the decimal value for the current column (byte)
      VALUE=$(printf '%u' "$((2#`sed -n ${column}p "$VBIN"`))")
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
      VALUE=$(printf '%o' "$((2#`sed -n ${column}p "$VBIN"`))")
      if [ $INVERT -lt -1 ]; then
        ((VALUE=377-VALUE))
      fi
      # Process the octal value, to handle special cases for encoding
      case $VALUE in
        [0-6])
          if [ $VALUE -eq 0 ] && [ $column = $pattern_width ]; then
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
      case $VALUE in
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
      sed -n ${column}p "$VHEX" | head -c 7 | tail -c 1 >> "${cpp_file}"
      ((column=column+1))
    done
    printf '\n' >> "${cpp_file}"
  fi
  # Additional horizontal format (seperate file)
  printf '\nconstexpr uint8_t PROGMEM %s[] {\n' "${name_camelcase}" >> "${cpp_hori_file}"
  printf '    8, 8,  // 8x8 px image\n' >> "${cpp_hori_file}"
  sed 's|#|//|g' "$HHEX" >> "${cpp_hori_file}" # Change `#` to `//` for comments
  printf '};\n' >> "${cpp_hori_file}"


  # Create PICO-8 code
  p8_file="${img_root}/${img_group}.p8.lua.WIP.txt"
  # Produce data as a custom font
  ((ascii_code=96+img_counter)) # Start encoding at character 'a'=97
  ascii_char=$(printf "\x$(printf %x ${ascii_code})")
  echo -e "\n--${ascii_code} '${ascii_char}' ${name_lowercase}" >> "${p8_file}"
  echo "poke(0x5600+(8* ${ascii_code})" >> "${p8_file}"
  row=1
  while [ $row -le 8 ]; do
    printf ' %3u' "$((2#`sed -n ${row}p "$HBIN" | rev`))" >> "${p8_file}"
    if [ $row -lt 8 ]; then
      echo -n ', -- ' >> "${p8_file}"
    else
      echo -n '  -- ' >> "${p8_file}"
    fi
    sed -n ${row}p "$HBIN" | tr '01' '▒█' >> "${p8_file}"
    ((row=row+1))
  done
  printf ')\n' >> "${p8_file}"
  # Helper code snippet to copy font character to Sprite 0
  printf -- '-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ%s"for i=0,448,64do memcpy(i,24576+i,4)end cstore()\n' "${ascii_char}">> "${p8_file}"
  # Bonus: 'magic' one-off character, encoded as a string
  column=8; VALUE=""; digit_present=0
  # We store the end of the string first
  STRING="\""
  while [ $column -gt 0 ]; do
    # Find the decimal value for the current column (byte)
    VALUE=$(printf '%i' "$((2#`sed -n ${column}p "$HBIN" | rev`))")
    if [ $VALUE -eq 0 ] && [ ${digit_present} -eq 1 ]; then
      STRING=`echo "\\000"`$STRING
      digit_present=0
    else
      ((VALUE=VALUE+1)) 
      STRING=`sed -n ${VALUE}p "${util_dir}/p8-codepage"`$STRING
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
    printf -- '--fillp"' >> "${p8_file}"
    row=1; VALUE=""; STRING="0x"
    while [ $row -le 4 ]; do
      # Invert binary values 0<>1 to fix fore-/background
      VALUE=$(sed -n ${row}p "${HBIN}" | head -c 4 | tr '01' '10')
      STRING=${STRING}$(printf '%X' $((2#${VALUE})))
      ((row=row+1))
    done
    printf '%u\"\n' "$STRING" >> "${p8_file}"
  fi

  
  # Create Thumby code
  thumby_file="${img_root}/${img_group}.thumby.WIP.txt"
  printf '\n$%s = bytearray([\n' "${name_camelcase}" >> "${thumby_file}"
  printf '    # BITMAP: width: 8, height: 8, [' >> "${thumby_file}"
  column=1
  while [ ${column} -le 8 ]; do
    printf '%u' "$((2#`sed -n ${column}p "$VBIN"`))" >> "${thumby_file}"
    if [ ${column} -le 7 ]; then
      printf ',' >> "${thumby_file}"
    else
      printf ']\n' >> "${thumby_file}"
    fi
    ((column=column+1))
  done
  cat "$VHEX" >> "${thumby_file}"
  printf '])\n# %sSprite = thumby.Sprite(8, 8, %s)\n' "${name_camelcase}" "${name_camelcase}" >> "${thumby_file}"

  # Remove temporary files
  rm "$HBIN" ; rm "$VBIN" ; rm "$HHEX" ; rm "$VHEX"

  shift
done