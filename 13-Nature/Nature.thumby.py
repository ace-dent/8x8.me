# Nature - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

scalesSparse = bytearray([
    # BITMAP: width: 8, height: 8, [60,153,195,227,195,153,60,62]
    0x3C, #  ▓▓░░░░▓▓
    0x99, #  ░▓▓░░▓▓░
    0xC3, #  ░░▓▓▓▓░░
    0xE3, #  ░░░▓▓▓░░
    0xC3, #  ░░▓▓▓▓░░
    0x99, #  ░▓▓░░▓▓░
    0x3C, #  ▓▓░░░░▓▓
    0x3E, #  ▓▓░░░░░▓
])
# scalesSparseSprite = thumby.Sprite(8, 8, scalesSparse)

scales = bytearray([
    # BITMAP: width: 8, height: 8, [189,187,219,227,219,187,189,62]
    0xBD, #  ░▓░░░░▓░
    0xBB, #  ░▓░░░▓░░
    0xDB, #  ░░▓░░▓░░
    0xE3, #  ░░░▓▓▓░░
    0xDB, #  ░░▓░░▓░░
    0xBB, #  ░▓░░░▓░░
    0xBD, #  ░▓░░░░▓░
    0x3E, #  ▓▓░░░░░▓
])
# scalesSprite = thumby.Sprite(8, 8, scales)

scallop = bytearray([
    # BITMAP: width: 8, height: 8, [173,51,218,162,218,51,173,42]
    0xAD, #  ░▓░▓░░▓░
    0x33, #  ▓▓░░▓▓░░
    0xDA, #  ░░▓░░▓░▓
    0xA2, #  ░▓░▓▓▓░▓
    0xDA, #  ░░▓░░▓░▓
    0x33, #  ▓▓░░▓▓░░
    0xAD, #  ░▓░▓░░▓░
    0x2A, #  ▓▓░▓░▓░▓
])
# scallopSprite = thumby.Sprite(8, 8, scallop)

scalesLargeDexter = bytearray([
    # BITMAP: width: 8, height: 8, [120,167,223,191,191,127,127,127]
    0x78, #  ▓░░░░▓▓▓
    0xA7, #  ░▓░▓▓░░░
    0xDF, #  ░░▓░░░░░
    0xBF, #  ░▓░░░░░░
    0xBF, #  ░▓░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
])
# scalesLargeDexterSprite = thumby.Sprite(8, 8, scalesLargeDexter)

scalesLargeSinister = bytearray([
    # BITMAP: width: 8, height: 8, [127,127,127,191,191,223,167,120]
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0xBF, #  ░▓░░░░░░
    0xBF, #  ░▓░░░░░░
    0xDF, #  ░░▓░░░░░
    0xA7, #  ░▓░▓▓░░░
    0x78, #  ▓░░░░▓▓▓
])
# scalesLargeSinisterSprite = thumby.Sprite(8, 8, scalesLargeSinister)

papillon = bytearray([
    # BITMAP: width: 8, height: 8, [112,252,254,190,111,95,55,14]
    0x70, #  ▓░░░▓▓▓▓
    0xFC, #  ░░░░░░▓▓
    0xFE, #  ░░░░░░░▓
    0xBE, #  ░▓░░░░░▓
    0x6F, #  ▓░░▓░░░░
    0x5F, #  ▓░▓░░░░░
    0x37, #  ▓▓░░▓░░░
    0x0E, #  ▓▓▓▓░░░▓
])
# papillonSprite = thumby.Sprite(8, 8, papillon)

loam = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,4,64,0,0,16,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# loamSprite = thumby.Sprite(8, 8, loam)

sand = bytearray([
    # BITMAP: width: 8, height: 8, [2,36,64,0,8,16,128,0]
    0x02, #  ▓▓▓▓▓▓░▓
    0x24, #  ▓▓░▓▓░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x80, #  ░▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# sandSprite = thumby.Sprite(8, 8, sand)

patch = bytearray([
    # BITMAP: width: 8, height: 8, [0,32,66,4,0,32,16,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x42, #  ▓░▓▓▓▓░▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# patchSprite = thumby.Sprite(8, 8, patch)

divot = bytearray([
    # BITMAP: width: 8, height: 8, [0,5,2,0,0,32,80,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x05, #  ▓▓▓▓▓░▓░
    0x02, #  ▓▓▓▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x50, #  ▓░▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# divotSprite = thumby.Sprite(8, 8, divot)

grass = bytearray([
    # BITMAP: width: 8, height: 8, [32,64,32,0,2,4,2,0]
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# grassSprite = thumby.Sprite(8, 8, grass)

grassMini = bytearray([
    # BITMAP: width: 8, height: 8, [34,68,34,0,34,68,34,0]
    0x22, #  ▓▓░▓▓▓░▓
    0x44, #  ▓░▓▓▓░▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x44, #  ▓░▓▓▓░▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# grassMiniSprite = thumby.Sprite(8, 8, grassMini)

field = bytearray([
    # BITMAP: width: 8, height: 8, [96,6,112,7,96,6,112,7]
    0x60, #  ▓░░▓▓▓▓▓
    0x06, #  ▓▓▓▓▓░░▓
    0x70, #  ▓░░░▓▓▓▓
    0x07, #  ▓▓▓▓▓░░░
    0x60, #  ▓░░▓▓▓▓▓
    0x06, #  ▓▓▓▓▓░░▓
    0x70, #  ▓░░░▓▓▓▓
    0x07, #  ▓▓▓▓▓░░░
])
# fieldSprite = thumby.Sprite(8, 8, field)

fieldSparse = bytearray([
    # BITMAP: width: 8, height: 8, [96,0,112,0,0,6,0,7]
    0x60, #  ▓░░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x70, #  ▓░░░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x06, #  ▓▓▓▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x07, #  ▓▓▓▓▓░░░
])
# fieldSparseSprite = thumby.Sprite(8, 8, fieldSparse)

pasture = bytearray([
    # BITMAP: width: 8, height: 8, [96,6,96,6,48,0,48,0]
    0x60, #  ▓░░▓▓▓▓▓
    0x06, #  ▓▓▓▓▓░░▓
    0x60, #  ▓░░▓▓▓▓▓
    0x06, #  ▓▓▓▓▓░░▓
    0x30, #  ▓▓░░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# pastureSprite = thumby.Sprite(8, 8, pasture)

daisies = bytearray([
    # BITMAP: width: 8, height: 8, [8,20,8,0,32,80,32,0]
    0x08, #  ▓▓▓▓░▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x50, #  ▓░▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# daisiesSprite = thumby.Sprite(8, 8, daisies)

tuffet = bytearray([
    # BITMAP: width: 8, height: 8, [0,32,64,0,96,16,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# tuffetSprite = thumby.Sprite(8, 8, tuffet)

shrub = bytearray([
    # BITMAP: width: 8, height: 8, [0,16,32,24,32,16,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# shrubSprite = thumby.Sprite(8, 8, shrub)

sprout = bytearray([
    # BITMAP: width: 8, height: 8, [0,24,48,0,24,12,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# sproutSprite = thumby.Sprite(8, 8, sprout)

crop = bytearray([
    # BITMAP: width: 8, height: 8, [32,96,76,24,64,96,32,0]
    0x20, #  ▓▓░▓▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
    0x4C, #  ▓░▓▓░░▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# cropSprite = thumby.Sprite(8, 8, crop)

bush = bytearray([
    # BITMAP: width: 8, height: 8, [16,48,102,12,112,24,0,0]
    0x10, #  ▓▓▓░▓▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x70, #  ▓░░░▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bushSprite = thumby.Sprite(8, 8, bush)

leaves = bytearray([
    # BITMAP: width: 8, height: 8, [32,96,67,6,0,24,12,0]
    0x20, #  ▓▓░▓▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
    0x43, #  ▓░▓▓▓▓░░
    0x06, #  ▓▓▓▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# leavesSprite = thumby.Sprite(8, 8, leaves)

overgrowth = bytearray([
    # BITMAP: width: 8, height: 8, [48,115,103,4,128,236,110,6]
    0x30, #  ▓▓░░▓▓▓▓
    0x73, #  ▓░░░▓▓░░
    0x67, #  ▓░░▓▓░░░
    0x04, #  ▓▓▓▓▓░▓▓
    0x80, #  ░▓▓▓▓▓▓▓
    0xEC, #  ░░░▓░░▓▓
    0x6E, #  ▓░░▓░░░▓
    0x06, #  ▓▓▓▓▓░░▓
])
# overgrowthSprite = thumby.Sprite(8, 8, overgrowth)

thicket = bytearray([
    # BITMAP: width: 8, height: 8, [0,72,80,108,80,72,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x48, #  ▓░▓▓░▓▓▓
    0x50, #  ▓░▓░▓▓▓▓
    0x6C, #  ▓░░▓░░▓▓
    0x50, #  ▓░▓░▓▓▓▓
    0x48, #  ▓░▓▓░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# thicketSprite = thumby.Sprite(8, 8, thicket)

tree = bytearray([
    # BITMAP: width: 8, height: 8, [0,40,20,234,20,40,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0xEA, #  ░░░▓░▓░▓
    0x14, #  ▓▓▓░▓░▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# treeSprite = thumby.Sprite(8, 8, tree)

rocks = bytearray([
    # BITMAP: width: 8, height: 8, [0,32,48,48,0,32,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# rocksSprite = thumby.Sprite(8, 8, rocks)

mounds = bytearray([
    # BITMAP: width: 8, height: 8, [2,65,33,34,72,4,4,8]
    0x02, #  ▓▓▓▓▓▓░▓
    0x41, #  ▓░▓▓▓▓▓░
    0x21, #  ▓▓░▓▓▓▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x48, #  ▓░▓▓░▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
])
# moundsSprite = thumby.Sprite(8, 8, mounds)

skull = bytearray([
    # BITMAP: width: 8, height: 8, [0,48,40,24,40,128,64,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x80, #  ░▓▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# skullSprite = thumby.Sprite(8, 8, skull)

skullLarge = bytearray([
    # BITMAP: width: 8, height: 8, [0,76,150,14,22,12,32,16]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x4C, #  ▓░▓▓░░▓▓
    0x96, #  ░▓▓░▓░░▓
    0x0E, #  ▓▓▓▓░░░▓
    0x16, #  ▓▓▓░▓░░▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# skullLargeSprite = thumby.Sprite(8, 8, skullLarge)

skullXL = bytearray([
    # BITMAP: width: 8, height: 8, [60,238,110,222,110,238,60,0]
    0x3C, #  ▓▓░░░░▓▓
    0xEE, #  ░░░▓░░░▓
    0x6E, #  ▓░░▓░░░▓
    0xDE, #  ░░▓░░░░▓
    0x6E, #  ▓░░▓░░░▓
    0xEE, #  ░░░▓░░░▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# skullXLSprite = thumby.Sprite(8, 8, skullXL)

boulderCracked = bytearray([
    # BITMAP: width: 8, height: 8, [104,44,144,198,222,156,48,0]
    0x68, #  ▓░░▓░▓▓▓
    0x2C, #  ▓▓░▓░░▓▓
    0x90, #  ░▓▓░▓▓▓▓
    0xC6, #  ░░▓▓▓░░▓
    0xDE, #  ░░▓░░░░▓
    0x9C, #  ░▓▓░░░▓▓
    0x30, #  ▓▓░░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# boulderCrackedSprite = thumby.Sprite(8, 8, boulderCracked)

bamboo = bytearray([
    # BITMAP: width: 8, height: 8, [16,32,223,119,253,2,1,0]
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0xDF, #  ░░▓░░░░░
    0x77, #  ▓░░░▓░░░
    0xFD, #  ░░░░░░▓░
    0x02, #  ▓▓▓▓▓▓░▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bambooSprite = thumby.Sprite(8, 8, bamboo)
