# Waves - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

rippleLight = bytearray([
    # BITMAP: width: 8, height: 8, [64,2,32,2,32,4,64,4]
    0x40, #  ▓░▓▓▓▓▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
])
# rippleLightSprite = thumby.Sprite(8, 8, rippleLight)

ripple = bytearray([
    # BITMAP: width: 8, height: 8, [68,66,34,34,34,36,68,68]
    0x44, #  ▓░▓▓▓░▓▓
    0x42, #  ▓░▓▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x24, #  ▓▓░▓▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
])
# rippleSprite = thumby.Sprite(8, 8, ripple)

wave = bytearray([
    # BITMAP: width: 8, height: 8, [68,34,17,17,34,0,34,68]
    0x44, #  ▓░▓▓▓░▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x11, #  ▓▓▓░▓▓▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x44, #  ▓░▓▓▓░▓▓
])
# waveSprite = thumby.Sprite(8, 8, wave)

tidalLight = bytearray([
    # BITMAP: width: 8, height: 8, [64,32,0,16,0,32,64,64]
    0x40, #  ▓░▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# tidalLightSprite = thumby.Sprite(8, 8, tidalLight)

tidal = bytearray([
    # BITMAP: width: 8, height: 8, [64,32,16,16,16,32,64,64]
    0x40, #  ▓░▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# tidalSprite = thumby.Sprite(8, 8, tidal)

tidalMedium = bytearray([
    # BITMAP: width: 8, height: 8, [96,48,24,24,24,48,96,96]
    0x60, #  ▓░░▓▓▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
])
# tidalMediumSprite = thumby.Sprite(8, 8, tidalMedium)

oceanicLight = bytearray([
    # BITMAP: width: 8, height: 8, [0,64,40,16,0,32,0,64]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# oceanicLightSprite = thumby.Sprite(8, 8, oceanicLight)

oceanic = bytearray([
    # BITMAP: width: 8, height: 8, [64,104,56,16,32,32,64,64]
    0x40, #  ▓░▓▓▓▓▓▓
    0x68, #  ▓░░▓░▓▓▓
    0x38, #  ▓▓░░░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# oceanicSprite = thumby.Sprite(8, 8, oceanic)

zigzagMini = bytearray([
    # BITMAP: width: 8, height: 8, [68,34,17,34,68,34,17,34]
    0x44, #  ▓░▓▓▓░▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x44, #  ▓░▓▓▓░▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x22, #  ▓▓░▓▓▓░▓
])
# zigzagMiniSprite = thumby.Sprite(8, 8, zigzagMini)

zigzagMiniMedium = bytearray([
    # BITMAP: width: 8, height: 8, [204,102,51,102,204,102,51,102]
    0xCC, #  ░░▓▓░░▓▓
    0x66, #  ▓░░▓▓░░▓
    0x33, #  ▓▓░░▓▓░░
    0x66, #  ▓░░▓▓░░▓
    0xCC, #  ░░▓▓░░▓▓
    0x66, #  ▓░░▓▓░░▓
    0x33, #  ▓▓░░▓▓░░
    0x66, #  ▓░░▓▓░░▓
])
# zigzagMiniMediumSprite = thumby.Sprite(8, 8, zigzagMiniMedium)

zigzag = bytearray([
    # BITMAP: width: 8, height: 8, [16,8,4,8,16,32,64,32]
    0x10, #  ▓▓▓░▓▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
])
# zigzagSprite = thumby.Sprite(8, 8, zigzag)

zigzagMedium = bytearray([
    # BITMAP: width: 8, height: 8, [48,24,12,24,48,96,192,96]
    0x30, #  ▓▓░░▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
    0xC0, #  ░░▓▓▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
])
# zigzagMediumSprite = thumby.Sprite(8, 8, zigzagMedium)

zigzagBold = bytearray([
    # BITMAP: width: 8, height: 8, [56,28,14,28,56,112,224,112]
    0x38, #  ▓▓░░░▓▓▓
    0x1C, #  ▓▓▓░░░▓▓
    0x0E, #  ▓▓▓▓░░░▓
    0x1C, #  ▓▓▓░░░▓▓
    0x38, #  ▓▓░░░▓▓▓
    0x70, #  ▓░░░▓▓▓▓
    0xE0, #  ░░░▓▓▓▓▓
    0x70, #  ▓░░░▓▓▓▓
])
# zigzagBoldSprite = thumby.Sprite(8, 8, zigzagBold)

zigzagBoldShaded = bytearray([
    # BITMAP: width: 8, height: 8, [40,20,10,20,40,80,160,80]
    0x28, #  ▓▓░▓░▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x0A, #  ▓▓▓▓░▓░▓
    0x14, #  ▓▓▓░▓░▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x50, #  ▓░▓░▓▓▓▓
    0xA0, #  ░▓░▓▓▓▓▓
    0x50, #  ▓░▓░▓▓▓▓
])
# zigzagBoldShadedSprite = thumby.Sprite(8, 8, zigzagBoldShaded)

zigzagExtraBold = bytearray([
    # BITMAP: width: 8, height: 8, [60,30,15,30,60,120,240,120]
    0x3C, #  ▓▓░░░░▓▓
    0x1E, #  ▓▓▓░░░░▓
    0x0F, #  ▓▓▓▓░░░░
    0x1E, #  ▓▓▓░░░░▓
    0x3C, #  ▓▓░░░░▓▓
    0x78, #  ▓░░░░▓▓▓
    0xF0, #  ░░░░▓▓▓▓
    0x78, #  ▓░░░░▓▓▓
])
# zigzagExtraBoldSprite = thumby.Sprite(8, 8, zigzagExtraBold)

zigzagPinstripe = bytearray([
    # BITMAP: width: 8, height: 8, [36,18,9,18,36,72,144,72]
    0x24, #  ▓▓░▓▓░▓▓
    0x12, #  ▓▓▓░▓▓░▓
    0x09, #  ▓▓▓▓░▓▓░
    0x12, #  ▓▓▓░▓▓░▓
    0x24, #  ▓▓░▓▓░▓▓
    0x48, #  ▓░▓▓░▓▓▓
    0x90, #  ░▓▓░▓▓▓▓
    0x48, #  ▓░▓▓░▓▓▓
])
# zigzagPinstripeSprite = thumby.Sprite(8, 8, zigzagPinstripe)

zigzagSteep = bytearray([
    # BITMAP: width: 8, height: 8, [48,12,3,12,48,192,3,192]
    0x30, #  ▓▓░░▓▓▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x03, #  ▓▓▓▓▓▓░░
    0x0C, #  ▓▓▓▓░░▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0xC0, #  ░░▓▓▓▓▓▓
    0x03, #  ▓▓▓▓▓▓░░
    0xC0, #  ░░▓▓▓▓▓▓
])
# zigzagSteepSprite = thumby.Sprite(8, 8, zigzagSteep)

dentilly = bytearray([
    # BITMAP: width: 8, height: 8, [64,64,124,8,16,32,64,64]
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x7C, #  ▓░░░░░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# dentillySprite = thumby.Sprite(8, 8, dentilly)

dentillyMini = bytearray([
    # BITMAP: width: 8, height: 8, [68,119,34,68,68,119,34,68]
    0x44, #  ▓░▓▓▓░▓▓
    0x77, #  ▓░░░▓░░░
    0x22, #  ▓▓░▓▓▓░▓
    0x44, #  ▓░▓▓▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x77, #  ▓░░░▓░░░
    0x22, #  ▓▓░▓▓▓░▓
    0x44, #  ▓░▓▓▓░▓▓
])
# dentillyMiniSprite = thumby.Sprite(8, 8, dentillyMini)

urdy = bytearray([
    # BITMAP: width: 8, height: 8, [64,60,2,1,2,60,64,128]
    0x40, #  ▓░▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x02, #  ▓▓▓▓▓▓░▓
    0x3C, #  ▓▓░░░░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x80, #  ░▓▓▓▓▓▓▓
])
# urdySprite = thumby.Sprite(8, 8, urdy)

urdyMini = bytearray([
    # BITMAP: width: 8, height: 8, [102,17,102,136,102,17,102,136]
    0x66, #  ▓░░▓▓░░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x66, #  ▓░░▓▓░░▓
    0x88, #  ░▓▓▓░▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x66, #  ▓░░▓▓░░▓
    0x88, #  ░▓▓▓░▓▓▓
])
# urdyMiniSprite = thumby.Sprite(8, 8, urdyMini)

embattledGrady = bytearray([
    # BITMAP: width: 8, height: 8, [112,16,28,4,28,16,112,64]
    0x70, #  ▓░░░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x1C, #  ▓▓▓░░░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x1C, #  ▓▓▓░░░▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x70, #  ▓░░░▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# embattledGradySprite = thumby.Sprite(8, 8, embattledGrady)

embattled = bytearray([
    # BITMAP: width: 8, height: 8, [64,124,4,4,4,124,64,64]
    0x40, #  ▓░▓▓▓▓▓▓
    0x7C, #  ▓░░░░░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x7C, #  ▓░░░░░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# embattledSprite = thumby.Sprite(8, 8, embattled)

embattledMini = bytearray([
    # BITMAP: width: 8, height: 8, [119,17,119,68,119,17,119,68]
    0x77, #  ▓░░░▓░░░
    0x11, #  ▓▓▓░▓▓▓░
    0x77, #  ▓░░░▓░░░
    0x44, #  ▓░▓▓▓░▓▓
    0x77, #  ▓░░░▓░░░
    0x11, #  ▓▓▓░▓▓▓░
    0x77, #  ▓░░░▓░░░
    0x44, #  ▓░▓▓▓░▓▓
])
# embattledMiniSprite = thumby.Sprite(8, 8, embattledMini)

potenty = bytearray([
    # BITMAP: width: 8, height: 8, [79,73,121,1,121,73,79,64]
    0x4F, #  ▓░▓▓░░░░
    0x49, #  ▓░▓▓░▓▓░
    0x79, #  ▓░░░░▓▓░
    0x01, #  ▓▓▓▓▓▓▓░
    0x79, #  ▓░░░░▓▓░
    0x49, #  ▓░▓▓░▓▓░
    0x4F, #  ▓░▓▓░░░░
    0x40, #  ▓░▓▓▓▓▓▓
])
# potentySprite = thumby.Sprite(8, 8, potenty)

potentyMini = bytearray([
    # BITMAP: width: 8, height: 8, [85,119,85,68,85,119,85,68]
    0x55, #  ▓░▓░▓░▓░
    0x77, #  ▓░░░▓░░░
    0x55, #  ▓░▓░▓░▓░
    0x44, #  ▓░▓▓▓░▓▓
    0x55, #  ▓░▓░▓░▓░
    0x77, #  ▓░░░▓░░░
    0x55, #  ▓░▓░▓░▓░
    0x44, #  ▓░▓▓▓░▓▓
])
# potentyMiniSprite = thumby.Sprite(8, 8, potentyMini)

serpentine = bytearray([
    # BITMAP: width: 8, height: 8, [126,3,126,192,126,3,126,192]
    0x7E, #  ▓░░░░░░▓
    0x03, #  ▓▓▓▓▓▓░░
    0x7E, #  ▓░░░░░░▓
    0xC0, #  ░░▓▓▓▓▓▓
    0x7E, #  ▓░░░░░░▓
    0x03, #  ▓▓▓▓▓▓░░
    0x7E, #  ▓░░░░░░▓
    0xC0, #  ░░▓▓▓▓▓▓
])
# serpentineSprite = thumby.Sprite(8, 8, serpentine)

rising = bytearray([
    # BITMAP: width: 8, height: 8, [34,17,34,17,136,68,136,68]
    0x22, #  ▓▓░▓▓▓░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x88, #  ░▓▓▓░▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x88, #  ░▓▓▓░▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
])
# risingSprite = thumby.Sprite(8, 8, rising)

riseAndFall = bytearray([
    # BITMAP: width: 8, height: 8, [32,18,33,2,4,72,132,64]
    0x20, #  ▓▓░▓▓▓▓▓
    0x12, #  ▓▓▓░▓▓░▓
    0x21, #  ▓▓░▓▓▓▓░
    0x02, #  ▓▓▓▓▓▓░▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x48, #  ▓░▓▓░▓▓▓
    0x84, #  ░▓▓▓▓░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
])
# riseAndFallSprite = thumby.Sprite(8, 8, riseAndFall)

doubleHelix = bytearray([
    # BITMAP: width: 8, height: 8, [66,66,36,8,16,36,66,66]
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x24, #  ▓▓░▓▓░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
])
# doubleHelixSprite = thumby.Sprite(8, 8, doubleHelix)
