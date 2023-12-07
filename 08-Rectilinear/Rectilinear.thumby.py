# Rectilinear - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

squareMicro = bytearray([
    # BITMAP: width: 8, height: 8, [0,102,102,0,0,102,102,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareMicroSprite = thumby.Sprite(8, 8, squareMicro)

billetVerticalMini = bytearray([
    # BITMAP: width: 8, height: 8, [0,119,119,0,0,119,119,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetVerticalMiniSprite = thumby.Sprite(8, 8, billetVerticalMini)

square = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,60,36,36,60,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareSprite = thumby.Sprite(8, 8, square)

squareLargeMedium = bytearray([
    # BITMAP: width: 8, height: 8, [0,126,126,102,102,126,126,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareLargeMediumSprite = thumby.Sprite(8, 8, squareLargeMedium)

waffle = bytearray([
    # BITMAP: width: 8, height: 8, [255,1,1,121,121,121,121,1]
    0xFF, #  ░░░░░░░░
    0x01, #  ▓▓▓▓▓▓▓░
    0x01, #  ▓▓▓▓▓▓▓░
    0x79, #  ▓░░░░▓▓░
    0x79, #  ▓░░░░▓▓░
    0x79, #  ▓░░░░▓▓░
    0x79, #  ▓░░░░▓▓░
    0x01, #  ▓▓▓▓▓▓▓░
])
# waffleSprite = thumby.Sprite(8, 8, waffle)

tile = bytearray([
    # BITMAP: width: 8, height: 8, [127,65,125,125,125,125,127,0]
    0x7F, #  ▓░░░░░░░
    0x41, #  ▓░▓▓▓▓▓░
    0x7D, #  ▓░░░░░▓░
    0x7D, #  ▓░░░░░▓░
    0x7D, #  ▓░░░░░▓░
    0x7D, #  ▓░░░░░▓░
    0x7F, #  ▓░░░░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# tileSprite = thumby.Sprite(8, 8, tile)

tileShaded = bytearray([
    # BITMAP: width: 8, height: 8, [127,85,107,85,107,85,127,0]
    0x7F, #  ▓░░░░░░░
    0x55, #  ▓░▓░▓░▓░
    0x6B, #  ▓░░▓░▓░░
    0x55, #  ▓░▓░▓░▓░
    0x6B, #  ▓░░▓░▓░░
    0x55, #  ▓░▓░▓░▓░
    0x7F, #  ▓░░░░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# tileShadedSprite = thumby.Sprite(8, 8, tileShaded)

illuminated = bytearray([
    # BITMAP: width: 8, height: 8, [31,63,95,63,95,42,84,0]
    0x1F, #  ▓▓▓░░░░░
    0x3F, #  ▓▓░░░░░░
    0x5F, #  ▓░▓░░░░░
    0x3F, #  ▓▓░░░░░░
    0x5F, #  ▓░▓░░░░░
    0x2A, #  ▓▓░▓░▓░▓
    0x54, #  ▓░▓░▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# illuminatedSprite = thumby.Sprite(8, 8, illuminated)

block = bytearray([
    # BITMAP: width: 8, height: 8, [126,61,3,27,27,3,1,0]
    0x7E, #  ▓░░░░░░▓
    0x3D, #  ▓▓░░░░▓░
    0x03, #  ▓▓▓▓▓▓░░
    0x1B, #  ▓▓▓░░▓░░
    0x1B, #  ▓▓▓░░▓░░
    0x03, #  ▓▓▓▓▓▓░░
    0x01, #  ▓▓▓▓▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# blockSprite = thumby.Sprite(8, 8, block)

blockPyramid = bytearray([
    # BITMAP: width: 8, height: 8, [85,43,23,15,23,35,65,128]
    0x55, #  ▓░▓░▓░▓░
    0x2B, #  ▓▓░▓░▓░░
    0x17, #  ▓▓▓░▓░░░
    0x0F, #  ▓▓▓▓░░░░
    0x17, #  ▓▓▓░▓░░░
    0x23, #  ▓▓░▓▓▓░░
    0x41, #  ▓░▓▓▓▓▓░
    0x80, #  ░▓▓▓▓▓▓▓
])
# blockPyramidSprite = thumby.Sprite(8, 8, blockPyramid)
