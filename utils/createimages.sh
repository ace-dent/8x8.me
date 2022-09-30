#!/bin/bash

# WARNING: Hacked together; may do terrible things!
# ... no highly esteemed deed is commemorated here...


# Minimal check for input parameters
if [ -z "$1" ]; then
  echo "Missing filename for png image to process."
  exit
fi


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
  cat "$HBIN" >> "$WIPFILE"
  printf "NAME $name\n" >> "$WIPFILE"


  # Create Arduboy cpp code
  WIPFILE="${1%/*/*}/$GROUP.h.WIP.txt"
  HWIPFILE="${1%/*/*}/$GROUP.h.WIP2.txt"
  # Vertical (standard) format data
  printf "\nconstexpr uint8_t PROGMEM $nAME[] {\n    8, 8,  // 8x8 px image\n" >> "$WIPFILE"
  cat "$VHEX" | sed 's/#/\/\//' >> "$WIPFILE"
  # Basic 'magic' string (octal values only)
  printf ");\n// Magic: " >> "$WIPFILE"
  if [ $PATTERNWIDTH -eq 1 ]; then
    printf '%i\n' "$((2#`sed -n 1p "$VBIN"`))" >> "$WIPFILE"
  elif [ $PATTERNWIDTH -eq 2 ]; then
    printf '"\\%o' "$((2#`sed -n 1p "$VBIN"`))" >> "$WIPFILE"
    printf '\\%o"[i%%2]\n' "$((2#`sed -n 2p "$VBIN"`))" >> "$WIPFILE"
  elif [ $PATTERNWIDTH -eq 4 ]; then
    printf '"\\%o' "$((2#`sed -n 1p "$VBIN"`))" >> "$WIPFILE"
    printf '\\%o' "$((2#`sed -n 2p "$VBIN"`))" >> "$WIPFILE"
    printf '\\%o' "$((2#`sed -n 3p "$VBIN"`))" >> "$WIPFILE"
    printf '\\%o"[i%%4]\n' "$((2#`sed -n 4p "$VBIN"`))" >> "$WIPFILE"
  else
    printf "\"" >> "$WIPFILE"
    LINE=1
    while [ $LINE -le 8 ]; do
      printf '\\%o' "$((2#`sed -n "$LINE"p "$VBIN"`))" >> "$WIPFILE"
      ((LINE=LINE+1))
    done
    printf "\"[i%%8]\n" >> "$WIPFILE"
  fi
  # Bonus 4x4px GAMBY data
  if [ $PATTERNWIDTH -le 4 ] && [ $PATTERNHEIGHT -le 4 ]; then
    printf "// GAMBY: 0x" >> "$WIPFILE"
    LINE=1
    while [ $LINE -le 4 ]; do
      sed -n "$LINE"p "$VHEX" | head -c 7 | tail -c 1 >> "$WIPFILE"
      ((LINE=LINE+1))
    done
    printf "\n" >> "$WIPFILE"
  fi
  # Additional horizontal format (WIP2 file)
  printf "\nconstexpr uint8_t PROGMEM $nAME[] {\n    8, 8,  // 8x8 px image\n" >> "$HWIPFILE"
  cat "$HHEX" | sed 's/#/\/\//' >> "$HWIPFILE"
  printf ");\n" >> "$HWIPFILE"


# TODO: ...
  # Create PICO-8 code
  WIPFILE="${1%/*/*}/$GROUP.p8.lua.WIP.txt"
  printf -- "\n-- $name\n" >> "$WIPFILE"
  # For 4x4px produce fillp() data
  if [ $PATTERNWIDTH -le 4 ] && [ $PATTERNHEIGHT -le 4 ]; then
    printf -- "-- fillp(" >> "$WIPFILE"
    LINE=1; VALUE="0x"
    while [ $LINE -le 4 ]; do
      VALUE="$VALUE`sed -n "$LINE"p "$HHEX" | head -c 7 | tail -c 1`"
      ((LINE=LINE+1))
    done
    printf '%u)\n' "$VALUE" >> "$WIPFILE"
  fi

  
  # Create Thumby code
  WIPFILE="${1%/*/*}/$GROUP.thumby.WIP.txt"
  printf "\n# $NAME\n# BITMAP: width: 8, height: 8, [" >> "$WIPFILE"
  LINE=1
  while [ $LINE -le 8 ]; do
    printf '%u' "$((2#`sed -n "$LINE"p "$VBIN"`))" >> "$WIPFILE"
    if [ $LINE -le 7 ]; then
      printf "," >> "$WIPFILE"
    else
      printf "]\n" >> "$WIPFILE"
    fi
    ((LINE=LINE+1))
  done
  printf "$nAME = bytearray([\n" >> "$WIPFILE"
  cat "$VHEX" >> "$WIPFILE"
  printf "])\n# "$nAME"Sprite = thumby.Sprite(8, 8, "$nAME")\n" >> "$WIPFILE"


  # Remove temporary files
  rm "$HBIN" ; rm "$VBIN" ; rm "$HHEX" ; rm "$VHEX"  

  shift
done