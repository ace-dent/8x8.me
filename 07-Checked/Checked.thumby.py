# Checked - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

checkMicro = bytearray([
    # BITMAP: width: 8, height: 8, [85,170,85,170,85,170,85,170]
    0x55,  # ▓░▓░▓░▓░
    0xAA,  # ░▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
    0xAA,  # ░▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
    0xAA,  # ░▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
    0xAA,  # ░▓░▓░▓░▓
])
# checkMicroSprite = thumby.Sprite(8, 8, checkMicro)

checkMini = bytearray([
    # BITMAP: width: 8, height: 8, [51,51,204,204,51,51,204,204]
    0x33,  # ▓▓░░▓▓░░
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0xCC,  # ░░▓▓░░▓▓
    0x33,  # ▓▓░░▓▓░░
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0xCC,  # ░░▓▓░░▓▓
])
# checkMiniSprite = thumby.Sprite(8, 8, checkMini)

check = bytearray([
    # BITMAP: width: 8, height: 8, [15,15,15,15,240,240,240,240]
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0xF0,  # ░░░░▓▓▓▓
    0xF0,  # ░░░░▓▓▓▓
    0xF0,  # ░░░░▓▓▓▓
    0xF0,  # ░░░░▓▓▓▓
])
# checkSprite = thumby.Sprite(8, 8, check)

checkShaded = bytearray([
    # BITMAP: width: 8, height: 8, [5,10,5,10,160,80,160,80]
    0x05,  # ▓▓▓▓▓░▓░
    0x0A,  # ▓▓▓▓░▓░▓
    0x05,  # ▓▓▓▓▓░▓░
    0x0A,  # ▓▓▓▓░▓░▓
    0xA0,  # ░▓░▓▓▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0xA0,  # ░▓░▓▓▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
])
# checkShadedSprite = thumby.Sprite(8, 8, checkShaded)

checkBox = bytearray([
    # BITMAP: width: 8, height: 8, [15,15,15,15,240,144,144,240]
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0xF0,  # ░░░░▓▓▓▓
    0x90,  # ░▓▓░▓▓▓▓
    0x90,  # ░▓▓░▓▓▓▓
    0xF0,  # ░░░░▓▓▓▓
])
# checkBoxSprite = thumby.Sprite(8, 8, checkBox)

checkSquare = bytearray([
    # BITMAP: width: 8, height: 8, [15,111,111,15,240,246,246,240]
    0x0F,  # ▓▓▓▓░░░░
    0x6F,  # ▓░░▓░░░░
    0x6F,  # ▓░░▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0xF0,  # ░░░░▓▓▓▓
    0xF6,  # ░░░░▓░░▓
    0xF6,  # ░░░░▓░░▓
    0xF0,  # ░░░░▓▓▓▓
])
# checkSquareSprite = thumby.Sprite(8, 8, checkSquare)

checkHorizontalMini = bytearray([
    # BITMAP: width: 8, height: 8, [85,85,170,170,85,85,170,170]
    0x55,  # ▓░▓░▓░▓░
    0x55,  # ▓░▓░▓░▓░
    0xAA,  # ░▓░▓░▓░▓
    0xAA,  # ░▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
    0x55,  # ▓░▓░▓░▓░
    0xAA,  # ░▓░▓░▓░▓
    0xAA,  # ░▓░▓░▓░▓
])
# checkHorizontalMiniSprite = thumby.Sprite(8, 8, checkHorizontalMini)

checkHorizontal = bytearray([
    # BITMAP: width: 8, height: 8, [51,51,51,51,204,204,204,204]
    0x33,  # ▓▓░░▓▓░░
    0x33,  # ▓▓░░▓▓░░
    0x33,  # ▓▓░░▓▓░░
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0xCC,  # ░░▓▓░░▓▓
    0xCC,  # ░░▓▓░░▓▓
    0xCC,  # ░░▓▓░░▓▓
])
# checkHorizontalSprite = thumby.Sprite(8, 8, checkHorizontal)

checkVerticalMini = bytearray([
    # BITMAP: width: 8, height: 8, [51,204,51,204,51,204,51,204]
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
])
# checkVerticalMiniSprite = thumby.Sprite(8, 8, checkVerticalMini)

checkVertical = bytearray([
    # BITMAP: width: 8, height: 8, [15,15,240,240,15,15,240,240]
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0xF0,  # ░░░░▓▓▓▓
    0xF0,  # ░░░░▓▓▓▓
    0x0F,  # ▓▓▓▓░░░░
    0x0F,  # ▓▓▓▓░░░░
    0xF0,  # ░░░░▓▓▓▓
    0xF0,  # ░░░░▓▓▓▓
])
# checkVerticalSprite = thumby.Sprite(8, 8, checkVertical)

diamond = bytearray([
    # BITMAP: width: 8, height: 8, [8,28,62,127,62,28,8,0]
    0x08,  # ▓▓▓▓░▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x3E,  # ▓▓░░░░░▓
    0x7F,  # ▓░░░░░░░
    0x3E,  # ▓▓░░░░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# diamondSprite = thumby.Sprite(8, 8, diamond)

diamondShaded = bytearray([
    # BITMAP: width: 8, height: 8, [8,20,42,85,42,20,8,0]
    0x08,  # ▓▓▓▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0x2A,  # ▓▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
    0x2A,  # ▓▓░▓░▓░▓
    0x14,  # ▓▓▓░▓░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# diamondShadedSprite = thumby.Sprite(8, 8, diamondShaded)

diamondLined = bytearray([
    # BITMAP: width: 8, height: 8, [8,28,62,127,190,92,40,16]
    0x08,  # ▓▓▓▓░▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x3E,  # ▓▓░░░░░▓
    0x7F,  # ▓░░░░░░░
    0xBE,  # ░▓░░░░░▓
    0x5C,  # ▓░▓░░░▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
])
# diamondLinedSprite = thumby.Sprite(8, 8, diamondLined)

diamondBold = bytearray([
    # BITMAP: width: 8, height: 8, [16,56,124,254,255,254,124,56]
    0x10,  # ▓▓▓░▓▓▓▓
    0x38,  # ▓▓░░░▓▓▓
    0x7C,  # ▓░░░░░▓▓
    0xFE,  # ░░░░░░░▓
    0xFF,  # ░░░░░░░░
    0xFE,  # ░░░░░░░▓
    0x7C,  # ▓░░░░░▓▓
    0x38,  # ▓▓░░░▓▓▓
])
# diamondBoldSprite = thumby.Sprite(8, 8, diamondBold)

checkDiagonalMini = bytearray([
    # BITMAP: width: 8, height: 8, [187,17,136,221,187,17,136,221]
    0xBB,  # ░▓░░░▓░░
    0x11,  # ▓▓▓░▓▓▓░
    0x88,  # ░▓▓▓░▓▓▓
    0xDD,  # ░░▓░░░▓░
    0xBB,  # ░▓░░░▓░░
    0x11,  # ▓▓▓░▓▓▓░
    0x88,  # ░▓▓▓░▓▓▓
    0xDD,  # ░░▓░░░▓░
])
# checkDiagonalMiniSprite = thumby.Sprite(8, 8, checkDiagonalMini)

checkDiagonal = bytearray([
    # BITMAP: width: 8, height: 8, [254,124,56,16,8,28,62,127]
    0xFE,  # ░░░░░░░▓
    0x7C,  # ▓░░░░░▓▓
    0x38,  # ▓▓░░░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x3E,  # ▓▓░░░░░▓
    0x7F,  # ▓░░░░░░░
])
# checkDiagonalSprite = thumby.Sprite(8, 8, checkDiagonal)

checkDiagonalShaded = bytearray([
    # BITMAP: width: 8, height: 8, [170,84,40,16,8,20,42,85]
    0xAA,  # ░▓░▓░▓░▓
    0x54,  # ▓░▓░▓░▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0x2A,  # ▓▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
])
# checkDiagonalShadedSprite = thumby.Sprite(8, 8, checkDiagonalShaded)

ternaryMini = bytearray([
    # BITMAP: width: 8, height: 8, [85,51,85,204,85,51,85,204]
    0x55,  # ▓░▓░▓░▓░
    0x33,  # ▓▓░░▓▓░░
    0x55,  # ▓░▓░▓░▓░
    0xCC,  # ░░▓▓░░▓▓
    0x55,  # ▓░▓░▓░▓░
    0x33,  # ▓▓░░▓▓░░
    0x55,  # ▓░▓░▓░▓░
    0xCC,  # ░░▓▓░░▓▓
])
# ternaryMiniSprite = thumby.Sprite(8, 8, ternaryMini)

ternary = bytearray([
    # BITMAP: width: 8, height: 8, [113,51,23,15,23,51,113,240]
    0x71,  # ▓░░░▓▓▓░
    0x33,  # ▓▓░░▓▓░░
    0x17,  # ▓▓▓░▓░░░
    0x0F,  # ▓▓▓▓░░░░
    0x17,  # ▓▓▓░▓░░░
    0x33,  # ▓▓░░▓▓░░
    0x71,  # ▓░░░▓▓▓░
    0xF0,  # ░░░░▓▓▓▓
])
# ternarySprite = thumby.Sprite(8, 8, ternary)

ternaryVerticalMini = bytearray([
    # BITMAP: width: 8, height: 8, [238,68,187,17,238,68,187,17]
    0xEE,  # ░░░▓░░░▓
    0x44,  # ▓░▓▓▓░▓▓
    0xBB,  # ░▓░░░▓░░
    0x11,  # ▓▓▓░▓▓▓░
    0xEE,  # ░░░▓░░░▓
    0x44,  # ▓░▓▓▓░▓▓
    0xBB,  # ░▓░░░▓░░
    0x11,  # ▓▓▓░▓▓▓░
])
# ternaryVerticalMiniSprite = thumby.Sprite(8, 8, ternaryVerticalMini)

ternaryVertical = bytearray([
    # BITMAP: width: 8, height: 8, [254,124,56,16,239,199,131,1]
    0xFE,  # ░░░░░░░▓
    0x7C,  # ▓░░░░░▓▓
    0x38,  # ▓▓░░░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0xEF,  # ░░░▓░░░░
    0xC7,  # ░░▓▓▓░░░
    0x83,  # ░▓▓▓▓▓░░
    0x01,  # ▓▓▓▓▓▓▓░
])
# ternaryVerticalSprite = thumby.Sprite(8, 8, ternaryVertical)

gyron = bytearray([
    # BITMAP: width: 8, height: 8, [241,115,55,31,248,236,206,143]
    0xF1,  # ░░░░▓▓▓░
    0x73,  # ▓░░░▓▓░░
    0x37,  # ▓▓░░▓░░░
    0x1F,  # ▓▓▓░░░░░
    0xF8,  # ░░░░░▓▓▓
    0xEC,  # ░░░▓░░▓▓
    0xCE,  # ░░▓▓░░░▓
    0x8F,  # ░▓▓▓░░░░
])
# gyronSprite = thumby.Sprite(8, 8, gyron)

triangleMini = bytearray([
    # BITMAP: width: 8, height: 8, [255,119,51,17,255,119,51,17]
    0xFF,  # ░░░░░░░░
    0x77,  # ▓░░░▓░░░
    0x33,  # ▓▓░░▓▓░░
    0x11,  # ▓▓▓░▓▓▓░
    0xFF,  # ░░░░░░░░
    0x77,  # ▓░░░▓░░░
    0x33,  # ▓▓░░▓▓░░
    0x11,  # ▓▓▓░▓▓▓░
])
# triangleMiniSprite = thumby.Sprite(8, 8, triangleMini)

triangle = bytearray([
    # BITMAP: width: 8, height: 8, [255,127,63,31,15,7,3,1]
    0xFF,  # ░░░░░░░░
    0x7F,  # ▓░░░░░░░
    0x3F,  # ▓▓░░░░░░
    0x1F,  # ▓▓▓░░░░░
    0x0F,  # ▓▓▓▓░░░░
    0x07,  # ▓▓▓▓▓░░░
    0x03,  # ▓▓▓▓▓▓░░
    0x01,  # ▓▓▓▓▓▓▓░
])
# triangleSprite = thumby.Sprite(8, 8, triangle)

triangleShaded = bytearray([
    # BITMAP: width: 8, height: 8, [170,85,42,21,10,5,2,1]
    0xAA,  # ░▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
    0x2A,  # ▓▓░▓░▓░▓
    0x15,  # ▓▓▓░▓░▓░
    0x0A,  # ▓▓▓▓░▓░▓
    0x05,  # ▓▓▓▓▓░▓░
    0x02,  # ▓▓▓▓▓▓░▓
    0x01,  # ▓▓▓▓▓▓▓░
])
# triangleShadedSprite = thumby.Sprite(8, 8, triangleShaded)

chevronCheckMini = bytearray([
    # BITMAP: width: 8, height: 8, [102,51,204,153,102,51,204,153]
    0x66,  # ▓░░▓▓░░▓
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0x99,  # ░▓▓░░▓▓░
    0x66,  # ▓░░▓▓░░▓
    0x33,  # ▓▓░░▓▓░░
    0xCC,  # ░░▓▓░░▓▓
    0x99,  # ░▓▓░░▓▓░
])
# chevronCheckMiniSprite = thumby.Sprite(8, 8, chevronCheckMini)

chevronCheckDense = bytearray([
    # BITMAP: width: 8, height: 8, [102,51,153,204,51,102,204,153]
    0x66,  # ▓░░▓▓░░▓
    0x33,  # ▓▓░░▓▓░░
    0x99,  # ░▓▓░░▓▓░
    0xCC,  # ░░▓▓░░▓▓
    0x33,  # ▓▓░░▓▓░░
    0x66,  # ▓░░▓▓░░▓
    0xCC,  # ░░▓▓░░▓▓
    0x99,  # ░▓▓░░▓▓░
])
# chevronCheckDenseSprite = thumby.Sprite(8, 8, chevronCheckDense)

chevronCheck = bytearray([
    # BITMAP: width: 8, height: 8, [135,195,225,240,15,30,60,120]
    0x87,  # ░▓▓▓▓░░░
    0xC3,  # ░░▓▓▓▓░░
    0xE1,  # ░░░▓▓▓▓░
    0xF0,  # ░░░░▓▓▓▓
    0x0F,  # ▓▓▓▓░░░░
    0x1E,  # ▓▓▓░░░░▓
    0x3C,  # ▓▓░░░░▓▓
    0x78,  # ▓░░░░▓▓▓
])
# chevronCheckSprite = thumby.Sprite(8, 8, chevronCheck)