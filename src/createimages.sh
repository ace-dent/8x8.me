#!/bin/bash

# Minimum sanity check
if [ -z "$1" ]
then
  echo "Missing filename for png image to process."
  exit
fi

NAME=`basename -s .png "$1"` # Get the filename

# Create a Portable Bit Map (PBM) image file
PBMFILE="${1%/*/*}/pbm/$NAME.pbm"
magick "$1" -depth 1 -compress None "$PBMFILE"
exiftool -overwrite_original -Comment="$NAME - 8x8.me fill pattern." "$PBMFILE"

# Create the preview image
magick -size 32x16 tile:"$1" -sample 200% "${1%/*/*/*}/previews/$NAME.png"