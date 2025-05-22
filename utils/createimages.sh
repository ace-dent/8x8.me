#!/bin/bash
# SPDX-License-Identifier: CC0-1.0
# SPDX-FileCopyrightText: 2022 Andrew C.E. Dent <hi@aced.cafe>
#
# -----------------------------------------------------------------------------
# Usage:
#   - Provide one or more 8x8 PNG images, to be processed.
#   - Optional parameters 'reset' for numbering, or '^a,b' to mark collections.
#   - Generates project images, code files and markdown gallery tables.
#
# Requirements:
#   - ImageMagick https://imagemagick.org/
#   - exiftool https://exiftool.org
#   - Oxipng v9.1.3 or greater https://github.com/shssoichiro/oxipng
#   - Optional: PNGOUT (for extra png compression)
#
# Assumptions:
#   - Filenames and directory structures follow the project standard.
#   - Correct images are fed in.
#
# WARNING:
#   May not be safe for public use; created for the author’s benefit.
#   Provided “as is”, without warranty of any kind; see the
#   accompanying LICENSE file for full terms. Use at your own risk!
# -----------------------------------------------------------------------------

# - Optional: Enabling this function uses PICO-8 to produce a sprite sheet
# pico8() {
#   '/Applications/PICO-8.app/Contents/MacOS/pico8' "$@"
# }

# TODO
# - Update P8 fillp to use built-ins.


#  Pretty messages, colored if NO_COLOR is unset and stdout is a valid terminal
ERR='✖ Error:' WARN='▲ Warning:'
[[ -z "${NO_COLOR-}" && -t 1 && "${TERM-}" != dumb ]] \
  && ERR=$'\e[31m'$ERR$'\e[0m' WARN=$'\e[33m'$WARN$'\e[0m'

# Check the required binaries are available
for bin in 'magick' 'exiftool' 'oxipng'; do
  if ! command -v "${bin}" &> /dev/null; then
    echo "${ERR} '${bin}' is not installed or not in your PATH."
    exit
  fi
done
# Check Oxipng is v9.1.3 or greater (for Zopfli iterations `--zi`)
min_ver='9.1.3'
this_ver="$(oxipng --version | head -n1 | sed 's/^oxipng //')"
if [[ $(printf '%s\n' "${min_ver}" "${this_ver}" | sort -V | head -n1) \
  != "${min_ver}" ]]; then
  echo "${ERR} Oxipng v${this_ver}; upgrade to at least v${min_ver}."
  exit
fi
# Check for at least one input file
if [[ -z "$1" ]]; then
  echo "${ERR} Missing filename. Provide at least one PNG image to process."
  exit
fi


# Directory for utilities
util_dir="$(dirname "${BASH_SOURCE[0]}")"
readonly util_dir

# Standard metadata for images
readonly project='8x8.me fill pattern.'
readonly copyright='Public Domain by ACED, licensed under CC0.'
readonly copyright_long='This work is dedicated to the '"${copyright}"
readonly license='https://creativecommons.org/publicdomain/zero/1.0/'

# Markdown gallery parameters for linking to line numbers (offset and stride)
# Arduboy (cpp)
md_cpp_start=12           # Default 12 line header offset
readonly md_cpp_lines=11  # 4x4 patterns will have 1 extra line (GAMBY)
# Bitsy (text)
md_bitsy_start=5          # Default 5 line header offset
readonly md_bitsy_lines=9
# PICO-8 (p8.lua)
md_p8_start=7             # Default 7 line header offset
readonly md_p8_lines=12   # 4x4 patterns will have 1 extra line (fillp)
# Picotron (p64.lua)
# --
# Playdate (lua)
md_playdate_start=5       # Default 5 line header offset
readonly md_playdate_lines=12
# Thumby (thumby.py)
md_thumby_start=5         # Default 5 line header offset
readonly md_thumby_lines=11
# User Defined Graphic (BASIC)
# --

# Code snippet parameters
bitsy_map="$( echo {1..9} {a..z} \
  | tr -d '[:space:]' )" # Sequence of characters to assign for bitsy patterns
readonly bitsy_map
readonly bitsy_map_length=${#bitsy_map}
p8_map="$( echo {a..z} {0..9} {A..Z} \
  | tr -d '[:space:]' )" # Sequence of characters to assign for P8 patterns
readonly p8_map
readonly p8_map_length=${#p8_map}



# Common helper functions
# -----------------------------------------------------------------------------

# Search a CSV file for a key and output the paired value
function csv_read {
  local csv_file="$1"
  local csv_key="$2"
  if [[ ! -f "${csv_file}" ]]; then
    return 2 # Exit if file cannot be found
  fi
  # Loop through each line of the csv file
  while IFS= read -r line; do
    # Extract the comma seperated key and value fields from each line
    key=$(echo "${line}" | cut -d ',' -f 1)
    value=$(echo "${line}" | cut -d ',' -f 2-)
    # Remove surrounding double quotes from the key field
    key="${key#\"}"
    key="${key%\"}"
    # Check if the current line's key matches the search key
    if [[ "${key}" == "${csv_key}" ]]; then
      # Remove surrounding double quotes from the value field
      value="${value#\"}"
      value="${value%\"}"
      # De-duplicate any doubled double quotes
      value="${value//\"\"/\"}"
      echo "${value}"
      return 0  # Exit on first success
    fi
  done < "${csv_file}"
  # Loop completed without finding the key
  return 1
}

# Read 8 binary digits in plain text and return the numerical value
function get_byte {
  local src="$1" # Input source
  local src_line="$2" # Line to read
  local value_format="$3" # Return value base 'dec' / 'hex' / 'oct' / 'bin'
  if [[ ! -f "${src}" ]]; then
    return 2 # Exit if file cannot be found
  fi
  # Get input line
  binary_str=$( sed -n "${src_line}p" "${src}" )
  # Output formatted value
  if [[ "${value_format}" == 'dec' ]]; then
    echo "$((2#${binary_str}))"
  elif [[ "${value_format}" == 'hex ' ]]; then
    echo '0x' # TODO
  elif [[ "${value_format}" == 'oct ' ]]; then
    echo 'oct' # TODO
  else
    echo "${binary_str}"
  fi
}

# Lossless png optimization
optimize_png() {
  if [[ -f "$1" ]]; then
    oxipng -q --nx --strip all "$1"
    # First try to optimize with no reductions (8bpp depth preferred)
    #   then allow reductions (lower bit depths and other color modes)
    for reductions in '--nx -q' '-q'; do
      for level in {0..12}; do
        oxipng ${reductions} --zc ${level} --filters 0-9 "$1"
      done
      oxipng ${reductions} --zopfli --zi 255 --filters 0-9 "$1"
      # Optionally compress with PNGOUT if available
      if command -v 'pngout' &> /dev/null; then
        for level in {0..3}; do
          pngout -q -ks -kp -f6 -s${level} "$1"
        done
      fi
    done
  fi
}



# Process patterns
# -----------------------------------------------------------------------------

img_counter=0
bitsy_counter=0
echo ''
echo 'Crunching images into patterns...'

while (( "$#" )); do

  # Check for 'reset' parameter to restart bitsy tile assignment
  if [[ "$1" == 'reset' ]]; then
    bitsy_counter=0
    echo '--- Bitsy TIL numbering reset ---'
    shift # Get the next parameter
    continue
  fi
  # Remove any Collection marker '^abc' for the previous pattern
  if [[ "${1:0:1}" == '^' ]]; then
    shift # Get the next parameter
    continue
  fi

  # Minimal checks for the input file
  if [[ ! -f "${1%.*}.png" || ! -r "$1" ]]; then
    echo "${ERR} File is not accessible. PNG file required."
    exit
  fi
  file_size=$(stat -f%z "$1")
  if (( file_size < 67 || file_size > 1024 )); then
    echo "${ERR} File size is outside the allowed range (67 B - 1 KiB)."
    exit
  fi
  if ! oxipng -q --pretend --nx --nz "$1"; then
    echo "${ERR} Not a valid PNG file. Check for image format issues."
    exit
  fi

  # Ensure the artwork has the correct file permissions set
  chmod 644 "$1"
  # Lossless PNG optimization
  optimize_png "$1"

  ((img_counter=img_counter+1))
  ((bitsy_counter=bitsy_counter+1))

  # Get the image name and group from the filename
  img_name="$( basename -s .png "$1" )" # e.g. "BayerDither00"
  img_root="${1%/*/*}" # Base directory for the pattern
  img_numbered_group="$( basename "${img_root}" | tr -d ' ' )" # e.g. "01-Dither"
  img_group="$( echo "${img_numbered_group}" | cut -f 2 -d '-' )" # e.g. "Dither"
  # Format variations with different case
  name_lowercase="$( echo "${img_name}" | tr '[:upper:]' '[:lower:]' )" # e.g. "bayerdither00"
  name_camelcase="${name_lowercase:0:1}${img_name:1}" # Lower case first letter and append remaining characters, e.g. "bayerDither00"
  name_camelcase="$( echo -n "${name_camelcase}" | tr -cs '[:alnum:]' '_')" # Replace non-alphanumeric characters with '_' for code compatibility
  group_lowercase="$( echo "${img_group}" | tr '[:upper:]' '[:lower:]' )" # e.g. "dither"

  # Generate unique id for the pattern (8 VLSB bytes, 16 hexadecimal characters)
  pattern_uid="$(magick "$1" -depth 1 +negate -rotate 90 PBM:- \
    | tail -c 8 | xxd -p)"



  # Produce images
  # ---------------------------------------------------------------------------

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
  optimize_png "${pulp_file}"

  # Add metadata to png files first and then pbm file
  exiftool "$1" "${pulp_file}" \
    -q -overwrite_original -fast1 \
    -Title="${img_name} - ${img_group} - ${project}" \
    -Copyright="${copyright} ${license}" \
    -execute \
    "${pbm_file}" -q -overwrite_original -fast5 \
    -Comment="${img_name} - ${img_group} - ${project}"  # Primary metadata (single line in header)
  # Extra pbm metadata appended to the end as plain text
  printf '\n# %s' "${copyright_long}" "${license}" >> "${pbm_file}"

  # Create the preview 'art' image
  preview_file="${img_root%/*}/docs/art/${img_name}.png"
  # Check for an exisiting preview image and only replace if necessary,
  # as it may have been optimized with external tools
  preview_uid='#'
  if [[ -f "${preview_file}" ]]; then
    # Extract 8x8px pattern and generate unique id (8 VLSB bytes)
    preview_uid="$(magick "${preview_file}" -sample 50% -crop 8x8+0+0 \
      +repage -depth 1 +negate -rotate 90 PBM:- \
      | tail -c 8 | xxd -p)"
  fi
  if [[ "${pattern_uid}" != "${preview_uid}" ]]; then
    # Create the image by tiling the pattern 4x2 and then scale up 2x
    magick -size 32x16 tile:"$1" \
      -define png:include-chunk=none \
      -sample 200% "${preview_file}"
    optimize_png "${preview_file}"
  fi

  # Bundle the Pulp image into the group's zip archive
  pulp_zip="${img_root%}/${img_group}.playdate-pulp.zip"
  if [[ ! -f "${pulp_zip}" ]]; then
    # Add 'readme' when first creating the archive.
    printf '%s - %s\n%s\n%s' \
      "${img_group}" "${project//pattern/patterns (Pulp)}" "${copyright_long}" "${license}" \
      > "${img_root}/readme.txt"
      zip -q -9 --no-dir-entries --junk-paths --no-wild --move "${pulp_zip}" "${img_root}/readme.txt"
  fi
  zip -q -9 --no-dir-entries --junk-paths --no-wild --move "${pulp_zip}" "${pulp_file}"


  # Produce code snippets
  # ---------------------------------------------------------------------------

  # Create Horizontal and Vertical temporary files, with plain text binary and hexadecimal
  bin_h="${img_root}/$img_name.bin-h.txt" # Horizontal (HMSB)
  hex_h="${img_root}/$img_name.hex-h.txt"
  bin_v="${img_root}/$img_name.bin-v.txt" # Vertical (VLSB)
  hex_v="${img_root}/$img_name.hex-v.txt"
  magick "$1" -depth 1 +negate -compress None PBM:- \
    | tail -n +3 \
    | tr -d ' ' > "${bin_h}"
  magick "$1" -depth 1 +negate -rotate 90 -compress None PBM:- \
    | tail -n +3 \
    | tr -d ' ' > "${bin_v}"
  # Write files with hexadecimal values and ascii art comments
  for line in {1..8}; do
    binary_str="$( sed -n ${line}p "${bin_h}" )" # Horizontal (HMSB)
    value_dec=$((2#${binary_str}))
    printf '    0x%02X,' "${value_dec}"
    printf ' #  %s\n' "${binary_str}" | tr '01' '▓░'
  done > "${hex_h}"
  for line in {1..8}; do
    binary_str="$( sed -n ${line}p "${bin_v}" )" # Vertical (VLSB)
    value_dec=$((2#${binary_str}))
    printf '    0x%02X,' "${value_dec}"
    printf ' #  %s\n' "${binary_str}" | tr '01' '▓░'
  done > "${hex_v}"

  # Check the pattern's minimum repeat width and height
  pattern_width=8
  if [[ "$(head -n 4 "${bin_v}")" == "$(tail -n 4 "${bin_v}")" ]]; then
    pattern_width=4
    if [[ "$(head -n 2 "${bin_v}")" == "$(tail -n 2 "${bin_v}")" ]]; then
      pattern_width=2
      if [[ "$(head -n 1 "${bin_v}")" == "$(tail -n 1 "${bin_v}")" ]]; then
        pattern_width=1
      fi
    fi
  fi
  pattern_height=8
  if [[ "$(head -n 4 "${bin_h}")" == "$(tail -n 4 "${bin_h}")" ]]; then
    pattern_height=4 # Pattern heights below 4 are treated the same
  fi
  echo "${img_name} - Pattern ${pattern_width} x ${pattern_height} px #${pattern_uid}."



  # Create markdown gallery entry for the pattern
  md_file="${img_root}/${img_group}.markdown.WIP.txt"
  md_extra_lines=0
  if [[ ${pattern_width} -le 4 && ${pattern_height} -le 4 ]]; then
    md_extra_lines=1 # cpp and p8 code snippets will output an extra line
  fi
  {
    # Produce a table header for each new section (after 'reset')
    if [[ ${bitsy_counter} == 1 ]]; then
      printf '\n<br>\n\n\n'
      printf '| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Playdate | Thumby |\n'
      printf '| :------ | :-----: | :----: | :-----: | :---: | :----: | :------: | :----: |\n'
    fi
    printf '| %s ' "${img_name}"
    # Check if a Collection '^abc' is set in the next parameter
    if [[ "${2:0:1}" == '^' ]]; then
      # Add superscript reference to Collection(s)
      printf '<sup>%s</sup>' "${2:1}"
    fi
    printf '| <img width="64" height="32"'
    printf ' src="../docs/art/%s.png" alt=""> ' "${img_name}"
    printf '| [png](png/%s.png) ' "${img_name}"
     # Add Arduboy (cpp) link
    ((md_cpp_end=md_cpp_start+md_cpp_lines+md_extra_lines))
    printf '| [cpp](%s.h#L%u-L%u) ' \
      "${img_group}" "${md_cpp_start}" "${md_cpp_end}"
    ((md_cpp_start=md_cpp_end+2))
    # Add bitsy (txt) link
    ((md_bitsy_end=md_bitsy_start+md_bitsy_lines))
    printf '| [txt](%s.bitsy.txt#L%u-L%u) ' \
       "${img_group}" "${md_bitsy_start}" "${md_bitsy_end}"
    ((md_bitsy_start=md_bitsy_end+2))
    # Add PICO-8 (p8.lua) link
    ((md_p8_end=md_p8_start+md_p8_lines+md_extra_lines))
    printf '| [p𝟪](%s.p8.lua#L%u-L%u) ' \
       "${group_lowercase}" "${md_p8_start}" "${md_p8_end}"
    ((md_p8_start=md_p8_end+2))
    # Add Picotron (p64.lua) link
    # printf '| ' # [p𝟨𝟦]()
    # -TODO
    # Add Playdate (lua) link
    ((md_playdate_end=md_playdate_start+md_playdate_lines))
    printf '| [lua](%s.playdate.lua#L%u-L%u) ' \
       "${img_group}" "${md_playdate_start}" "${md_playdate_end}"
    ((md_playdate_start=md_playdate_end+2))
     # Add Thumby (py) link
    ((md_thumby_end=md_thumby_start+md_thumby_lines))
    printf '| [py](%s.thumby.py#L%u-L%u) ' \
       "${img_group}" "${md_thumby_start}" "${md_thumby_end}"
    ((md_thumby_start=md_thumby_end+2))
    # Add User Defined Graphic (bas) link
    printf '|\n' # [bas]()
    # -TODO
  } >> "${md_file}"



  # TODO: Unified html gallery
  # html_file="${img_root}/${img_group}.html.WIP.txt"
  # img_inline='data:image/png;base64,'$(base64 -i "$1") # TODO: Convert to JXL
  # {
  #   printf '<picture>\n'
  #   printf '  <source srcset="%s" type="image/jxl">\n' "${img_inline}"
  #   printf '  <img width="64" height="32" loading="lazy"'
  #   printf ' src="../docs/art/%s.png" alt="" role="none">\n' "${img_name}"
  #   printf '</picture>\n'
  # } >> "${html_file}"



  # Create cpp (Arduboy) code
  cpp_file="${img_root}/${img_group}.h.WIP.txt" # Vertical file
  cpp_horiz_file="${img_root}/${img_group}.h.WIP2.txt" # Horizontal file
  # Vertical VLSB format data (standard Arduboy sprite)
  {
    printf '\nconstexpr uint8_t %s[] PROGMEM {\n' "${name_camelcase}"
    printf '    8, 8, //  8x8 px image\n'
    sed 's|#|//|g' "${hex_v}" # Change '#' to '//' for comments
    printf '};\n// Magic: '
  } >> "${cpp_file}"
  # Alternative 'magic' representation (VLSB data)
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
  # Bonus 4x4px GAMBY data (Vertical VLSB in 4 nybbles)
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
  # Additional horizontal HMSB format (separate file)
  {
    printf '\nconstexpr uint8_t %s[] PROGMEM {\n' "${name_camelcase}"
    printf '    8, 8, //  8x8 px image\n'
    sed 's|#|//|g' "$hex_h" # Change '#' to '//' for comments
    printf '};\n'
  } >> "${cpp_horiz_file}"



  # Create bitsy tile data
  bitsy_file="${img_root}/${img_group}.bitsy.WIP.txt"
  index=$(( (bitsy_counter-1) % bitsy_map_length ))
  bitsy_mapped_char="${bitsy_map:index:1}"
  # Horizontal HMSB format data
  {
    printf '\nTIL %c\n' "${bitsy_mapped_char}"
    cat "$bin_h"
    printf 'NAME %s\n' "${name_lowercase}"
  } >> "${bitsy_file}"



  # Create PICO-8 code
  p8_file="${img_root}/${img_group}.p8.lua.WIP.txt"
  # Store bitmap data as a custom font (HLSB data)
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
    if [[ ${value_dec} == 0 && ${digit_present} == 1 ]]; then
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



  # Create Playdate SDK code
  playdate_file="${img_root}/${img_group}.playdate.WIP.txt"
  # Horizontal (HMSB) format
  {
    printf '\nlocal %s <const> = {\n' "${name_camelcase}"
    sed 's|#|--|g' "$hex_h" # Change '#' to '--' for comments
    # Generate optional arrays for pixel transparency
    pd_backgnd_string='    -- '
    pd_foregnd_string='    -- '
    # Produce decimal value arrays (less characters for one-liner)
    for row in {1..8}; do
      binary_str=$( sed -n ${row}p "${bin_h}" )
      value_dec=$((2#${binary_str}))
      pd_backgnd_string="${pd_backgnd_string}${value_dec},"
      # Invert bits to mask foreground
      ((value_dec=255-value_dec))
      pd_foregnd_string="${pd_foregnd_string}${value_dec},"
    done
    printf '%s -- transparent background\n' "${pd_backgnd_string%?}"
    printf '%s -- transparent foreground\n' "${pd_foregnd_string%?}"
    printf '}\n-- playdate.graphics.setPattern(%s)\n' "${name_camelcase}"
  } >> "${playdate_file}"



  # Create Thumby code
  thumby_file="${img_root}/${img_group}.thumby.WIP.txt"
  # Vertical (VLSB) format
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



# If defined, use P8 to create a sprite sheet for the final image's group
if type pico8 &> /dev/null; then
    echo '---'
    p8_script="${util_dir}/p8-spritesheets/${img_numbered_group}-sprsht.p8"
    p8_sprsht="${group_lowercase}.png" # sprite sheet file path (relative)
    echo "Generating sprite sheet - ${p8_sprsht}"
    # First execution updates the embedded sprites (`__gfx__`) for later export
    # Using P8 `printh()` the script returns the number of 8px rows occupied
    p8_rows=$(pico8 -x "${p8_script}" | tail -n 1)
    # P8 can only export into the current directory
    pushd "${img_root}" > /dev/null || exit
    pico8 "${p8_script}" -export "${p8_sprsht}" > /dev/null
    # Crop any unused 8px rows from the bottom of the 128px high image
    ((p8_chop=128-p8_rows*8))
    magick "${p8_sprsht}" -gravity South -chop x"${p8_chop}" \
      -define png:color-type='2' -define png:bit-depth='8' \
      -define png:include-chunk=none "${p8_sprsht}"
    optimize_png "${p8_sprsht}"
    # Add metadata to the png sprite sheet
    exiftool "${p8_sprsht}" \
      -q -overwrite_original -fast1 \
      -Title="${img_group} - ${project//pattern/patterns}" \
      -Copyright="${copyright_long} ${license}"
    # Restore the working directory
    popd > /dev/null || exit
fi



echo '...Finished :)'
echo ''
exit
