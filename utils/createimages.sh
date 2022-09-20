#!/bin/bash

# Minimum sanity check
if [ -z "$1" ]
then
  echo "Missing filename for png image to process."
  exit
fi


COPYRIGHT="This work is dedicated to the Public Domain by ACED, licensed under CC0."
LICENSE="https://creativecommons.org/publicdomain/zero/1.0/"


while (( "$#" )); do
  # Get an image name and group from the filename
  NAME=`basename -s .png "$1"`
  GROUP=`basename "${1%/*/*}" | cut -f 2 -d "-"`
  
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

  shift
done