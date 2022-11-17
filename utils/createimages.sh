#!/bin/bash

# WARNING: Hacked together; may do terrible things!


# Minimal check for input file(s)
if [ -z "$1" ]; then
  echo "Missing filename for png image to process."
  exit
fi

# TODO: Check for executables (ImageMagick and ExifTool)


# Directory for utilities
UTILDIR="$(dirname "${BASH_SOURCE[0]}")"


COPYRIGHT="This work is dedicated to the Public Domain by ACED, licensed under CC0."
LICENSE="https://creativecommons.org/publicdomain/zero/1.0/"

IMAGECOUNT=0
while (( "$#" )); do
  
  ((IMAGECOUNT=IMAGECOUNT+1))
  
  # Get an image name and group from the filename
  NAME=`basename -s .png "$1"`
  GROUP=`basename "${1%/*/*}" | cut -f 2 -d "-"`
  # Format variations for name (lowercase, camelCase)
  name=`echo "$NAME" | tr '[A-Z]' '[a-z]'`
  nAME=`echo "${NAME:0:1}" | tr '[A-Z]' '[a-z]'`"${NAME:1}"


  # Add metadata to the original png file
  exiftool -q -overwrite_original -fast1 -Title="$NAME - $GROUP - 8x8.me fill pattern." -Copyright="$COPYRIGHT $LICENSE" "$1"

  # Create the Portable Bit Map (PBM) file
  PBMFILE="${1%/*/*}/pbm/$NAME.pbm"
  magick "$1" -depth 1 -compress None "$PBMFILE"
  exiftool -q -overwrite_original -fast5 -Comment="$NAME - $GROUP - 8x8.me fill pattern." "$PBMFILE"
  printf "\n# $COPYRIGHT\n# $LICENSE" >> "$PBMFILE"

  # Create the preview image
  PREVIEW="${1%/*/*/*}/previews/$NAME.png"
  magick -size 32x16 tile:"$1" -sample 200% "$PREVIEW"
  
  
  # Create Horizontal and Vertical temporary files, in plain text binary and hexadecimal
  HBIN="${1%/*/*}/$NAME.h-bin.txt"
  VBIN="${1%/*/*}/$NAME.v-bin.txt"
  HHEX="${1%/*/*}/$NAME.h-hex.txt"
  VHEX="${1%/*/*}/$NAME.v-hex.txt"
  magick "$1" -depth 1 +negate -compress None PBM:- | tail -n +3 | tr -d " " > "$HBIN"
  magick "$1" -depth 1 +negate -rotate 90 -compress None PBM:- | tail -n +3 | tr -d " " > "$VBIN"
  echo -n "" > "$HHEX"
  echo -n "" > "$VHEX"
  LINE=1
  while [ $LINE -le 8 ]; do
    printf '    0x%02X,  # ' "$((2#`sed -n "$LINE"p "$HBIN"`))" >> "$HHEX"
    sed -n "$LINE"p "$HBIN" | tr "0" "▓" | tr "1" "░" >> "$HHEX"
    printf '    0x%02X,  # ' "$((2#`sed -n "$LINE"p "$VBIN"`))" >> "$VHEX"
    sed -n "$LINE"p "$VBIN" | tr "0" "▓" | tr "1" "░" >> "$VHEX"
    ((LINE=LINE+1))
  done
  PATTERNWIDTH=8
  if [ "`head -n 4 "$VBIN"`" = "`tail -n 4 "$VBIN"`" ]; then
    PATTERNWIDTH=4
    if [ "`head -n 2 "$VBIN"`" = "`head -n 4 "$VBIN" | tail -n 2`" ]; then
      PATTERNWIDTH=2
      if [ "`head -n 1 "$VBIN"`" = "`head -n 2 "$VBIN" | tail -n 1`" ]; then
        PATTERNWIDTH=1
      fi
    fi
  fi
  PATTERNHEIGHT=8
  if [ "`head -n 4 "$HBIN"`" = "`tail -n 4 "$HBIN"`" ]; then
    PATTERNHEIGHT=4
  fi
  echo "$NAME - Pattern width $PATTERNWIDTH px x height $PATTERNHEIGHT px."


  # Create Bitsy tile data
  WIPFILE="${1%/*/*}/$GROUP.bitsy.WIP.txt"
  printf "\nTIL $IMAGECOUNT\n" >> "$WIPFILE"
  # TODO: Change decimal count to base36?
  cat "$HBIN" >> "$WIPFILE"
  printf "NAME $name\n" >> "$WIPFILE"


  # Create cpp (Arduboy) code
  WIPFILE="${1%/*/*}/$GROUP.h.WIP.txt"
  HWIPFILE="${1%/*/*}/$GROUP.h.WIP2.txt"
  # Vertical format data (sprite standard)
  printf "\nconstexpr uint8_t PROGMEM $nAME[] {\n    8, 8,  // 8x8 px image\n" >> "$WIPFILE"
  cat "$VHEX" | sed 's/#/\/\//' >> "$WIPFILE"
  # Alternative 'magic' representation
  printf "};\n// Magic: " >> "$WIPFILE"
  if [ $PATTERNWIDTH -eq 1 ]; then
    printf '%i\n' "$((2#`sed -n 1p "$VBIN"`))" >> "$WIPFILE"
  elif [ $PATTERNWIDTH -eq 2 ]; then
    # TODO: Catch edge cases where string encoding is smaller "Az"[i%2]
    # e.g. bayerDither04 `"U"[i%2]` vs `i&1?85:0`
    printf 'i&1?%i' "$((2#`sed -n 1p "$VBIN"`))" >> "$WIPFILE"
    printf ':%i\n' "$((2#`sed -n 2p "$VBIN"`))" >> "$WIPFILE"
  else
    # Encode 'magic' as a string... hold tight...
    # First pass: scan byte values to estimate if inverted form will be more compact
    COLUMN=$PATTERNWIDTH; VALUE=""; INVERT=0
    while [ $COLUMN -gt 0 ]; do
      # Find the decimal value for the current column (byte)
      VALUE=$(printf '%u' "$((2#`sed -n "$COLUMN"p "$VBIN"`))")
      if [ $VALUE -le 13 ]; then
        if [ $VALUE -eq 0 ] && [ $COLUMN = $PATTERNWIDTH ]; then
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
        if [ $VALUE -eq 255 ] && [ $COLUMN = $PATTERNWIDTH ]; then
          ((INVERT=INVERT-4)) # cpp strings are null terminated
        else
          ((INVERT=INVERT-2))
        fi
      fi
      ((COLUMN=COLUMN-1))
    done
    # Second pass: Encode the string
    # Process the columns (bytes) in reverse order
    COLUMN=$PATTERNWIDTH; VALUE=""; DIGIT=0
    # We store the end of the string first
    STRING="\"[i%$PATTERNWIDTH]"
    while [ $COLUMN -gt 0 ]; do
      # Find the octal value for the current column (byte)
      VALUE=$(printf '%o' "$((2#`sed -n "$COLUMN"p "$VBIN"`))")
      if [ $INVERT -lt -1 ]; then
        ((VALUE=377-VALUE))
      fi
      # Process the octal value, to handle special cases for encoding
      case $VALUE in
        [0-6])
          if [ $VALUE -eq 0 ] && [ $COLUMN = $PATTERNWIDTH ]; then
            # cpp strings are always null terminated
            VALUE=""
          elif [ $DIGIT -eq 1 ]; then
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
          if [ $DIGIT -eq 1 ]; then
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
          if [ $DIGIT -eq 1 ]; then
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
      # Check if the character output is a valid octal digit (0–7)
      # This may affect encoding of the next (preceding) octal value
      case $VALUE in
        [0-7])
          DIGIT=1
        ;;
        *)
          DIGIT=0
        ;;
      esac
      STRING="$VALUE""$STRING"
      ((COLUMN=COLUMN-1))
    done
    STRING="\"""$STRING"
    if [ $INVERT -lt -1 ]; then
      STRING="~""$STRING"
    fi
    echo "$STRING" >> "$WIPFILE"
  fi
  # Bonus 4x4px GAMBY data
  if [ $PATTERNWIDTH -le 4 ] && [ $PATTERNHEIGHT -le 4 ]; then
    printf "// GAMBY: 0x" >> "$WIPFILE"
    COLUMN=1
    while [ $COLUMN -le 4 ]; do
      sed -n "$COLUMN"p "$VHEX" | head -c 7 | tail -c 1 >> "$WIPFILE"
      ((COLUMN=COLUMN+1))
    done
    printf "\n" >> "$WIPFILE"
  fi
  # Additional horizontal format (WIP2 file)
  printf "\nconstexpr uint8_t PROGMEM $nAME[] {\n    8, 8,  // 8x8 px image\n" >> "$HWIPFILE"
  cat "$HHEX" | sed 's/#/\/\//' >> "$HWIPFILE"
  printf "};\n" >> "$HWIPFILE"


  # Create PICO-8 code
  WIPFILE="${1%/*/*}/$GROUP.p8.lua.WIP.txt"
  # Produce data as a custom font
  ((OFFSET=96+IMAGECOUNT)) # Start encoding at character 'a'=97
  CHAR=$(printf "\x$(printf %x $OFFSET)")
  printf -- "\n--$OFFSET '$CHAR' $name\n" >> "$WIPFILE"
  printf "poke(0x5600+(8* $OFFSET),\n" >> "$WIPFILE"
  ROW=1
  while [ $ROW -le 8 ]; do
    printf ' %3u' "$((2#`sed -n "$ROW"p "$HBIN" | rev`))" >> "$WIPFILE"
    if [ $ROW -lt 8 ]; then
      printf -- ", -- " >> "$WIPFILE"
    else
      printf -- "  -- " >> "$WIPFILE"
    fi
    sed -n "$ROW"p "$HBIN" | tr "0" "▒" | tr "1" "█" >> "$WIPFILE"
    ((ROW=ROW+1))
  done
  printf ")\n" >> "$WIPFILE"
  # Helper code snippet to copy font character to Sprite 0
  echo '-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ'$CHAR'"for i=0,448,64do memcpy(i,24576+i,4)end cstore()' >> "$WIPFILE"
  # Bonus: 'magic' one-off character, encoded as a string
  COLUMN=8; VALUE=""; DIGIT=0
  # We store the end of the string first
  STRING="\""
  while [ $COLUMN -gt 0 ]; do
    # Find the decimal value for the current column (byte)
    VALUE=$(printf '%i' "$((2#`sed -n "$COLUMN"p "$HBIN" | rev`))")
    if [ $VALUE -eq 0 ] && [ $DIGIT -eq 1 ]; then
      STRING=`echo "\\000"`$STRING
      DIGIT=0
    else
      ((VALUE=VALUE+1)) 
      STRING=`sed -n "$VALUE"p "$UTILDIR/p8-codepage"`$STRING
      if [ $VALUE -ge 49 ] && [ $VALUE -le 58 ] ; then
        DIGIT=1
      else
        DIGIT=0
      fi
    fi
    ((COLUMN=COLUMN-1))
  done
  echo "--magic: ?\"⁶rw¹シ\"..\"⁶."$STRING >> "$WIPFILE"
  # Bonus: For 4x4px patterns produce fillp() alternative
  if [ $PATTERNWIDTH -le 4 ] && [ $PATTERNHEIGHT -le 4 ]; then
    printf -- "--fillp(" >> "$WIPFILE"
    ROW=1; VALUE=""; STRING="0x"
    while [ $ROW -le 4 ]; do
      # Invert binary values 0<>1 to fix fore-/background
      VALUE=`sed -n "$ROW"p "$HBIN" | head -c 4 | tr "0" "i" | tr "1" "0" | tr "i" "1"`
      STRING=$STRING`printf '%X' $((2#$VALUE))`
      ((ROW=ROW+1))
    done
    printf '%u)\n' "$STRING" >> "$WIPFILE"
  fi

  
  # Create Thumby code
  WIPFILE="${1%/*/*}/$GROUP.thumby.WIP.txt"
  printf "\n$nAME = bytearray([\n" >> "$WIPFILE"
  printf "    # BITMAP: width: 8, height: 8, [" >> "$WIPFILE"
  COLUMN=1
  while [ $COLUMN -le 8 ]; do
    printf '%u' "$((2#`sed -n "$COLUMN"p "$VBIN"`))" >> "$WIPFILE"
    if [ $COLUMN -le 7 ]; then
      printf "," >> "$WIPFILE"
    else
      printf "]\n" >> "$WIPFILE"
    fi
    ((COLUMN=COLUMN+1))
  done
  cat "$VHEX" >> "$WIPFILE"
  printf "])\n# "$nAME"Sprite = thumby.Sprite(8, 8, "$nAME")\n" >> "$WIPFILE"


  # Remove temporary files
  rm "$HBIN" ; rm "$VBIN" ; rm "$HHEX" ; rm "$VHEX"

  shift
done