# Grid - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

gridDots = bytearray([
    # BITMAP: width: 8, height: 8, [85,0,1,0,1,0,1,0]
    0x55,  # ▓░▓░▓░▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
])
# gridDotsSprite = thumby.Sprite(8, 8, gridDots)

gridDotsCentre = bytearray([
    # BITMAP: width: 8, height: 8, [85,0,1,0,17,0,1,0]
    0x55,  # ▓░▓░▓░▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x11,  # ▓▓▓░▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
])
# gridDotsCentreSprite = thumby.Sprite(8, 8, gridDotsCentre)

grid = bytearray([
    # BITMAP: width: 8, height: 8, [255,1,1,1,1,1,1,1]
    0xFF,  # ░░░░░░░░
    0x01,  # ▓▓▓▓▓▓▓░
    0x01,  # ▓▓▓▓▓▓▓░
    0x01,  # ▓▓▓▓▓▓▓░
    0x01,  # ▓▓▓▓▓▓▓░
    0x01,  # ▓▓▓▓▓▓▓░
    0x01,  # ▓▓▓▓▓▓▓░
    0x01,  # ▓▓▓▓▓▓▓░
])
# gridSprite = thumby.Sprite(8, 8, grid)

gridMedium = bytearray([
    # BITMAP: width: 8, height: 8, [255,255,3,3,3,3,3,3]
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0x03,  # ▓▓▓▓▓▓░░
    0x03,  # ▓▓▓▓▓▓░░
    0x03,  # ▓▓▓▓▓▓░░
    0x03,  # ▓▓▓▓▓▓░░
    0x03,  # ▓▓▓▓▓▓░░
    0x03,  # ▓▓▓▓▓▓░░
])
# gridMediumSprite = thumby.Sprite(8, 8, gridMedium)

gridBold = bytearray([
    # BITMAP: width: 8, height: 8, [255,255,131,131,131,131,131,255]
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0x83,  # ░▓▓▓▓▓░░
    0x83,  # ░▓▓▓▓▓░░
    0x83,  # ░▓▓▓▓▓░░
    0x83,  # ░▓▓▓▓▓░░
    0x83,  # ░▓▓▓▓▓░░
    0xFF,  # ░░░░░░░░
])
# gridBoldSprite = thumby.Sprite(8, 8, gridBold)

gridMiniDots = bytearray([
    # BITMAP: width: 8, height: 8, [85,0,17,0,85,0,17,0]
    0x55,  # ▓░▓░▓░▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x11,  # ▓▓▓░▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x55,  # ▓░▓░▓░▓░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x11,  # ▓▓▓░▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
])
# gridMiniDotsSprite = thumby.Sprite(8, 8, gridMiniDots)

gridMini = bytearray([
    # BITMAP: width: 8, height: 8, [255,17,17,17,255,17,17,17]
    0xFF,  # ░░░░░░░░
    0x11,  # ▓▓▓░▓▓▓░
    0x11,  # ▓▓▓░▓▓▓░
    0x11,  # ▓▓▓░▓▓▓░
    0xFF,  # ░░░░░░░░
    0x11,  # ▓▓▓░▓▓▓░
    0x11,  # ▓▓▓░▓▓▓░
    0x11,  # ▓▓▓░▓▓▓░
])
# gridMiniSprite = thumby.Sprite(8, 8, gridMini)

gridMiniMedium = bytearray([
    # BITMAP: width: 8, height: 8, [255,255,51,51,255,255,51,51]
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0x33,  # ▓▓░░▓▓░░
    0x33,  # ▓▓░░▓▓░░
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0x33,  # ▓▓░░▓▓░░
    0x33,  # ▓▓░░▓▓░░
])
# gridMiniMediumSprite = thumby.Sprite(8, 8, gridMiniMedium)

gridDense = bytearray([
    # BITMAP: width: 8, height: 8, [255,85,255,85,255,85,255,85]
    0xFF,  # ░░░░░░░░
    0x55,  # ▓░▓░▓░▓░
    0xFF,  # ░░░░░░░░
    0x55,  # ▓░▓░▓░▓░
    0xFF,  # ░░░░░░░░
    0x55,  # ▓░▓░▓░▓░
    0xFF,  # ░░░░░░░░
    0x55,  # ▓░▓░▓░▓░
])
# gridDenseSprite = thumby.Sprite(8, 8, gridDense)

gridDiagonalDots = bytearray([
    # BITMAP: width: 8, height: 8, [34,0,8,0,34,0,128,0]
    0x22,  # ▓▓░▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x80,  # ░▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# gridDiagonalDotsSprite = thumby.Sprite(8, 8, gridDiagonalDots)

gridDiagonal = bytearray([
    # BITMAP: width: 8, height: 8, [34,20,8,20,34,65,128,65]
    0x22,  # ▓▓░▓▓▓░▓
    0x14,  # ▓▓▓░▓░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x41,  # ▓░▓▓▓▓▓░
    0x80,  # ░▓▓▓▓▓▓▓
    0x41,  # ▓░▓▓▓▓▓░
])
# gridDiagonalSprite = thumby.Sprite(8, 8, gridDiagonal)

gridDiagonalMedium = bytearray([
    # BITMAP: width: 8, height: 8, [99,54,28,28,54,99,193,193]
    0x63,  # ▓░░▓▓▓░░
    0x36,  # ▓▓░░▓░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x36,  # ▓▓░░▓░░▓
    0x63,  # ▓░░▓▓▓░░
    0xC1,  # ░░▓▓▓▓▓░
    0xC1,  # ░░▓▓▓▓▓░
])
# gridDiagonalMediumSprite = thumby.Sprite(8, 8, gridDiagonalMedium)

gridDiagonalMini = bytearray([
    # BITMAP: width: 8, height: 8, [85,34,85,136,85,34,85,136]
    0x55,  # ▓░▓░▓░▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x55,  # ▓░▓░▓░▓░
    0x88,  # ░▓▓▓░▓▓▓
    0x55,  # ▓░▓░▓░▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x55,  # ▓░▓░▓░▓░
    0x88,  # ░▓▓▓░▓▓▓
])
# gridDiagonalMiniSprite = thumby.Sprite(8, 8, gridDiagonalMini)

honeycomb = bytearray([
    # BITMAP: width: 8, height: 8, [68,68,170,17,17,17,170,68]
    0x44,  # ▓░▓▓▓░▓▓
    0x44,  # ▓░▓▓▓░▓▓
    0xAA,  # ░▓░▓░▓░▓
    0x11,  # ▓▓▓░▓▓▓░
    0x11,  # ▓▓▓░▓▓▓░
    0x11,  # ▓▓▓░▓▓▓░
    0xAA,  # ░▓░▓░▓░▓
    0x44,  # ▓░▓▓▓░▓▓
])
# honeycombSprite = thumby.Sprite(8, 8, honeycomb)

trapezoid = bytearray([
    # BITMAP: width: 8, height: 8, [64,96,80,72,68,66,65,192]
    0x40,  # ▓░▓▓▓▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0x48,  # ▓░▓▓░▓▓▓
    0x44,  # ▓░▓▓▓░▓▓
    0x42,  # ▓░▓▓▓▓░▓
    0x41,  # ▓░▓▓▓▓▓░
    0xC0,  # ░░▓▓▓▓▓▓
])
# trapezoidSprite = thumby.Sprite(8, 8, trapezoid)