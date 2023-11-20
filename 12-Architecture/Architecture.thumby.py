# Architecture - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

brick = bytearray([
    # BITMAP: width: 8, height: 8, [224,238,238,238,14,238,238,238]
    0xE0, #  ░░░▓▓▓▓▓
    0xEE, #  ░░░▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0x0E, #  ▓▓▓▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0xEE, #  ░░░▓░░░▓
])
# brickSprite = thumby.Sprite(8, 8, brick)

brickDense = bytearray([
    # BITMAP: width: 8, height: 8, [136,170,170,170,34,170,170,170]
    0x88, #  ░▓▓▓░▓▓▓
    0xAA, #  ░▓░▓░▓░▓
    0xAA, #  ░▓░▓░▓░▓
    0xAA, #  ░▓░▓░▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0xAA, #  ░▓░▓░▓░▓
    0xAA, #  ░▓░▓░▓░▓
    0xAA, #  ░▓░▓░▓░▓
])
# brickDenseSprite = thumby.Sprite(8, 8, brickDense)

brickNarrow = bytearray([
    # BITMAP: width: 8, height: 8, [208,214,198,214,22,214,214,214]
    0xD0, #  ░░▓░▓▓▓▓
    0xD6, #  ░░▓░▓░░▓
    0xC6, #  ░░▓▓▓░░▓
    0xD6, #  ░░▓░▓░░▓
    0x16, #  ▓▓▓░▓░░▓
    0xD6, #  ░░▓░▓░░▓
    0xD6, #  ░░▓░▓░░▓
    0xD6, #  ░░▓░▓░░▓
])
# brickNarrowSprite = thumby.Sprite(8, 8, brickNarrow)

brickWide = bytearray([
    # BITMAP: width: 8, height: 8, [240,246,246,246,6,246,246,246]
    0xF0, #  ░░░░▓▓▓▓
    0xF6, #  ░░░░▓░░▓
    0xF6, #  ░░░░▓░░▓
    0xF6, #  ░░░░▓░░▓
    0x06, #  ▓▓▓▓▓░░▓
    0xF6, #  ░░░░▓░░▓
    0xF6, #  ░░░░▓░░▓
    0xF6, #  ░░░░▓░░▓
])
# brickWideSprite = thumby.Sprite(8, 8, brickWide)

brickAged = bytearray([
    # BITMAP: width: 8, height: 8, [240,238,238,110,14,238,238,236]
    0xF0, #  ░░░░▓▓▓▓
    0xEE, #  ░░░▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0x6E, #  ▓░░▓░░░▓
    0x0E, #  ▓▓▓▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0xEC, #  ░░░▓░░▓▓
])
# brickAgedSprite = thumby.Sprite(8, 8, brickAged)

brickPointed = bytearray([
    # BITMAP: width: 8, height: 8, [224,228,238,78,14,78,238,228]
    0xE0, #  ░░░▓▓▓▓▓
    0xE4, #  ░░░▓▓░▓▓
    0xEE, #  ░░░▓░░░▓
    0x4E, #  ▓░▓▓░░░▓
    0x0E, #  ▓▓▓▓░░░▓
    0x4E, #  ▓░▓▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0xE4, #  ░░░▓▓░▓▓
])
# brickPointedSprite = thumby.Sprite(8, 8, brickPointed)

brickSparse = bytearray([
    # BITMAP: width: 8, height: 8, [192,204,204,12,12,204,204,192]
    0xC0, #  ░░▓▓▓▓▓▓
    0xCC, #  ░░▓▓░░▓▓
    0xCC, #  ░░▓▓░░▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0xCC, #  ░░▓▓░░▓▓
    0xCC, #  ░░▓▓░░▓▓
    0xC0, #  ░░▓▓▓▓▓▓
])
# brickSparseSprite = thumby.Sprite(8, 8, brickSparse)

brickHighlights = bytearray([
    # BITMAP: width: 8, height: 8, [32,46,34,34,2,226,34,34]
    0x20, #  ▓▓░▓▓▓▓▓
    0x2E, #  ▓▓░▓░░░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x02, #  ▓▓▓▓▓▓░▓
    0xE2, #  ░░░▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
])
# brickHighlightsSprite = thumby.Sprite(8, 8, brickHighlights)

mortarLight = bytearray([
    # BITMAP: width: 8, height: 8, [10,17,0,17,160,17,0,17]
    0x0A, #  ▓▓▓▓░▓░▓
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0xA0, #  ░▓░▓▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
])
# mortarLightSprite = thumby.Sprite(8, 8, mortar)

mortarAged = bytearray([
    # BITMAP: width: 8, height: 8, [10,16,17,0,128,16,1,17]
    0x0A, #  ▓▓▓▓░▓░▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x80, #  ░▓▓▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x11, #  ▓▓▓░▓▓▓░
])
# mortarAgedSprite = thumby.Sprite(8, 8, mortarAged)

brickVertical = bytearray([
    # BITMAP: width: 8, height: 8, [0,254,254,254,0,239,239,239]
    0x00, #  ▓▓▓▓▓▓▓▓
    0xFE, #  ░░░░░░░▓
    0xFE, #  ░░░░░░░▓
    0xFE, #  ░░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0xEF, #  ░░░▓░░░░
    0xEF, #  ░░░▓░░░░
    0xEF, #  ░░░▓░░░░
])
# brickVerticalSprite = thumby.Sprite(8, 8, brickVertical)

brickSinister = bytearray([
    # BITMAP: width: 8, height: 8, [239,247,235,221,190,127,191,223]
    0xEF, #  ░░░▓░░░░
    0xF7, #  ░░░░▓░░░
    0xEB, #  ░░░▓░▓░░
    0xDD, #  ░░▓░░░▓░
    0xBE, #  ░▓░░░░░▓
    0x7F, #  ▓░░░░░░░
    0xBF, #  ░▓░░░░░░
    0xDF, #  ░░▓░░░░░
])
# brickSinisterSprite = thumby.Sprite(8, 8, brickSinister)

brickSinisterRounded = bytearray([
    # BITMAP: width: 8, height: 8, [239,231,235,221,190,63,191,223]
    0xEF, #  ░░░▓░░░░
    0xE7, #  ░░░▓▓░░░
    0xEB, #  ░░░▓░▓░░
    0xDD, #  ░░▓░░░▓░
    0xBE, #  ░▓░░░░░▓
    0x3F, #  ▓▓░░░░░░
    0xBF, #  ░▓░░░░░░
    0xDF, #  ░░▓░░░░░
])
# brickSinisterRoundedSprite = thumby.Sprite(8, 8, brickSinisterRounded)

brickSinisterMini = bytearray([
    # BITMAP: width: 8, height: 8, [170,221,238,119,170,221,238,119]
    0xAA, #  ░▓░▓░▓░▓
    0xDD, #  ░░▓░░░▓░
    0xEE, #  ░░░▓░░░▓
    0x77, #  ▓░░░▓░░░
    0xAA, #  ░▓░▓░▓░▓
    0xDD, #  ░░▓░░░▓░
    0xEE, #  ░░░▓░░░▓
    0x77, #  ▓░░░▓░░░
])
# brickSinisterMiniSprite = thumby.Sprite(8, 8, brickSinisterMini)

brickMini = bytearray([
    # BITMAP: width: 8, height: 8, [85,68,85,17,85,68,85,17]
    0x55, #  ▓░▓░▓░▓░
    0x44, #  ▓░▓▓▓░▓▓
    0x55, #  ▓░▓░▓░▓░
    0x11, #  ▓▓▓░▓▓▓░
    0x55, #  ▓░▓░▓░▓░
    0x44, #  ▓░▓▓▓░▓▓
    0x55, #  ▓░▓░▓░▓░
    0x11, #  ▓▓▓░▓▓▓░
])
# brickMiniSprite = thumby.Sprite(8, 8, brickMini)

brickMiniDamage = bytearray([
    # BITMAP: width: 8, height: 8, [85,68,85,17,81,64,84,17]
    0x55, #  ▓░▓░▓░▓░
    0x44, #  ▓░▓▓▓░▓▓
    0x55, #  ▓░▓░▓░▓░
    0x11, #  ▓▓▓░▓▓▓░
    0x51, #  ▓░▓░▓▓▓░
    0x40, #  ▓░▓▓▓▓▓▓
    0x54, #  ▓░▓░▓░▓▓
    0x11, #  ▓▓▓░▓▓▓░
])
# brickMiniDamageSprite = thumby.Sprite(8, 8, brickMiniDamage)

brickMiniRuins = bytearray([
    # BITMAP: width: 8, height: 8, [1,4,1,17,81,64,80,17]
    0x01, #  ▓▓▓▓▓▓▓░
    0x04, #  ▓▓▓▓▓░▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x11, #  ▓▓▓░▓▓▓░
    0x51, #  ▓░▓░▓▓▓░
    0x40, #  ▓░▓▓▓▓▓▓
    0x50, #  ▓░▓░▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
])
# brickMiniRuinsSprite = thumby.Sprite(8, 8, brickMiniRuins)

stoneWall = bytearray([
    # BITMAP: width: 8, height: 8, [48,123,123,113,36,142,238,198]
    0x30, #  ▓▓░░▓▓▓▓
    0x7B, #  ▓░░░░▓░░
    0x7B, #  ▓░░░░▓░░
    0x71, #  ▓░░░▓▓▓░
    0x24, #  ▓▓░▓▓░▓▓
    0x8E, #  ░▓▓▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0xC6, #  ░░▓▓▓░░▓
])
# stoneWallSprite = thumby.Sprite(8, 8, stoneWall)

quarryWall = bytearray([
    # BITMAP: width: 8, height: 8, [225,237,220,158,94,222,222,205]
    0xE1, #  ░░░▓▓▓▓░
    0xED, #  ░░░▓░░▓░
    0xDC, #  ░░▓░░░▓▓
    0x9E, #  ░▓▓░░░░▓
    0x5E, #  ▓░▓░░░░▓
    0xDE, #  ░░▓░░░░▓
    0xDE, #  ░░▓░░░░▓
    0xCD, #  ░░▓▓░░▓░
])
# quarryWallSprite = thumby.Sprite(8, 8, quarryWall)

stoneBlock = bytearray([
    # BITMAP: width: 8, height: 8, [2,124,250,124,254,126,190,93]
    0x02, #  ▓▓▓▓▓▓░▓
    0x7C, #  ▓░░░░░▓▓
    0xFA, #  ░░░░░▓░▓
    0x7C, #  ▓░░░░░▓▓
    0xFE, #  ░░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0xBE, #  ░▓░░░░░▓
    0x5D, #  ▓░▓░░░▓░
])
# stoneBlockSprite = thumby.Sprite(8, 8, stoneBlock)

flagstone = bytearray([
    # BITMAP: width: 8, height: 8, [119,119,112,59,131,187,187,0]
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x70, #  ▓░░░▓▓▓▓
    0x3B, #  ▓▓░░░▓░░
    0x83, #  ░▓▓▓▓▓░░
    0xBB, #  ░▓░░░▓░░
    0xBB, #  ░▓░░░▓░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# flagstoneSprite = thumby.Sprite(8, 8, flagstone)

pavingStones = bytearray([
    # BITMAP: width: 8, height: 8, [110,157,217,230,103,155,185,118]
    0x6E, #  ▓░░▓░░░▓
    0x9D, #  ░▓▓░░░▓░
    0xD9, #  ░░▓░░▓▓░
    0xE6, #  ░░░▓▓░░▓
    0x67, #  ▓░░▓▓░░░
    0x9B, #  ░▓▓░░▓░░
    0xB9, #  ░▓░░░▓▓░
    0x76, #  ▓░░░▓░░▓
])
# pavingStonesSprite = thumby.Sprite(8, 8, pavingStones)

shingle = bytearray([
    # BITMAP: width: 8, height: 8, [253,251,247,247,235,237,222,62]
    0xFD, #  ░░░░░░▓░
    0xFB, #  ░░░░░▓░░
    0xF7, #  ░░░░▓░░░
    0xF7, #  ░░░░▓░░░
    0xEB, #  ░░░▓░▓░░
    0xED, #  ░░░▓░░▓░
    0xDE, #  ░░▓░░░░▓
    0x3E, #  ▓▓░░░░░▓
])
# shingleSprite = thumby.Sprite(8, 8, shingle)

roofTiles = bytearray([
    # BITMAP: width: 8, height: 8, [115,119,55,7,55,119,115,112]
    0x73, #  ▓░░░▓▓░░
    0x77, #  ▓░░░▓░░░
    0x37, #  ▓▓░░▓░░░
    0x07, #  ▓▓▓▓▓░░░
    0x37, #  ▓▓░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x73, #  ▓░░░▓▓░░
    0x70, #  ▓░░░▓▓▓▓
])
# roofTilesSprite = thumby.Sprite(8, 8, roofTiles)

archway = bytearray([
    # BITMAP: width: 8, height: 8, [254,6,3,1,1,3,6,254]
    0xFE, #  ░░░░░░░▓
    0x06, #  ▓▓▓▓▓░░▓
    0x03, #  ▓▓▓▓▓▓░░
    0x01, #  ▓▓▓▓▓▓▓░
    0x01, #  ▓▓▓▓▓▓▓░
    0x03, #  ▓▓▓▓▓▓░░
    0x06, #  ▓▓▓▓▓░░▓
    0xFE, #  ░░░░░░░▓
])
# archwaySprite = thumby.Sprite(8, 8, archway)

window = bytearray([
    # BITMAP: width: 8, height: 8, [1,124,66,66,66,66,124,1]
    0x01, #  ▓▓▓▓▓▓▓░
    0x7C, #  ▓░░░░░▓▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x7C, #  ▓░░░░░▓▓
    0x01, #  ▓▓▓▓▓▓▓░
])
# windowSprite = thumby.Sprite(8, 8, window)

picket = bytearray([
    # BITMAP: width: 8, height: 8, [72,254,252,72,72,254,252,72]
    0x48, #  ▓░▓▓░▓▓▓
    0xFE, #  ░░░░░░░▓
    0xFC, #  ░░░░░░▓▓
    0x48, #  ▓░▓▓░▓▓▓
    0x48, #  ▓░▓▓░▓▓▓
    0xFE, #  ░░░░░░░▓
    0xFC, #  ░░░░░░▓▓
    0x48, #  ▓░▓▓░▓▓▓
])
# picketSprite = thumby.Sprite(8, 8, picket)
