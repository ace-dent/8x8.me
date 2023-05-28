# Nature - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

scales = bytearray([
    # BITMAP: width: 8, height: 8, [189,187,219,227,219,187,189,62]
    0xBD,  # ░▓░░░░▓░
    0xBB,  # ░▓░░░▓░░
    0xDB,  # ░░▓░░▓░░
    0xE3,  # ░░░▓▓▓░░
    0xDB,  # ░░▓░░▓░░
    0xBB,  # ░▓░░░▓░░
    0xBD,  # ░▓░░░░▓░
    0x3E,  # ▓▓░░░░░▓
])
# scalesSprite = thumby.Sprite(8, 8, scales)

loam = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,4,64,0,0,16,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x04,  # ▓▓▓▓▓░▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# loamSprite = thumby.Sprite(8, 8, loam)

sand = bytearray([
    # BITMAP: width: 8, height: 8, [2,36,64,0,8,16,128,0]
    0x02,  # ▓▓▓▓▓▓░▓
    0x24,  # ▓▓░▓▓░▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x80,  # ░▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# sandSprite = thumby.Sprite(8, 8, sand)

grass = bytearray([
    # BITMAP: width: 8, height: 8, [32,64,32,0,2,4,2,0]
    0x20,  # ▓▓░▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x04,  # ▓▓▓▓▓░▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# grassSprite = thumby.Sprite(8, 8, grass)

divot = bytearray([
    # BITMAP: width: 8, height: 8, [0,5,2,0,0,32,80,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x05,  # ▓▓▓▓▓░▓░
    0x02,  # ▓▓▓▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# divotSprite = thumby.Sprite(8, 8, divot)

pasture = bytearray([
    # BITMAP: width: 8, height: 8, [96,6,96,6,48,0,48,0]
    0x60,  # ▓░░▓▓▓▓▓
    0x06,  # ▓▓▓▓▓░░▓
    0x60,  # ▓░░▓▓▓▓▓
    0x06,  # ▓▓▓▓▓░░▓
    0x30,  # ▓▓░░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# pastureSprite = thumby.Sprite(8, 8, pasture)

daisies = bytearray([
    # BITMAP: width: 8, height: 8, [8,20,8,0,32,80,32,0]
    0x08,  # ▓▓▓▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# daisiesSprite = thumby.Sprite(8, 8, daisies)

tuffet = bytearray([
    # BITMAP: width: 8, height: 8, [0,32,64,0,96,16,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# tuffetSprite = thumby.Sprite(8, 8, tuffet)

shrub = bytearray([
    # BITMAP: width: 8, height: 8, [0,16,32,24,32,16,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# shrubSprite = thumby.Sprite(8, 8, shrub)

leaves = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,24,48,0,24,12,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x0C,  # ▓▓▓▓░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# leavesSprite = thumby.Sprite(8, 8, leaves)

crop = bytearray([
    # BITMAP: width: 8, height: 8, [32,96,76,24,64,96,32,0]
    0x20,  # ▓▓░▓▓▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
    0x4C,  # ▓░▓▓░░▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# cropSprite = thumby.Sprite(8, 8, crop)

bush = bytearray([
    # BITMAP: width: 8, height: 8, [16,48,102,12,112,24,0,0]
    0x10,  # ▓▓▓░▓▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x66,  # ▓░░▓▓░░▓
    0x0C,  # ▓▓▓▓░░▓▓
    0x70,  # ▓░░░▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# bushSprite = thumby.Sprite(8, 8, bush)

thicket = bytearray([
    # BITMAP: width: 8, height: 8, [0,36,40,54,40,36,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x36,  # ▓▓░░▓░░▓
    0x28,  # ▓▓░▓░▓▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# thicketSprite = thumby.Sprite(8, 8, thicket)

tree = bytearray([
    # BITMAP: width: 8, height: 8, [0,40,20,234,20,40,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0xEA,  # ░░░▓░▓░▓
    0x14,  # ▓▓▓░▓░▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# treeSprite = thumby.Sprite(8, 8, tree)

rocks = bytearray([
    # BITMAP: width: 8, height: 8, [0,32,48,48,0,32,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# rocksSprite = thumby.Sprite(8, 8, rocks)

mounds = bytearray([
    # BITMAP: width: 8, height: 8, [2,65,33,34,72,4,4,8]
    0x02,  # ▓▓▓▓▓▓░▓
    0x41,  # ▓░▓▓▓▓▓░
    0x21,  # ▓▓░▓▓▓▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x48,  # ▓░▓▓░▓▓▓
    0x04,  # ▓▓▓▓▓░▓▓
    0x04,  # ▓▓▓▓▓░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
])
# moundsSprite = thumby.Sprite(8, 8, mounds)

skull = bytearray([
    # BITMAP: width: 8, height: 8, [0,48,40,24,40,128,64,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x80,  # ░▓▓▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# skullSprite = thumby.Sprite(8, 8, skull)

crackedBoulder = bytearray([
    # BITMAP: width: 8, height: 8, [104,44,144,198,222,156,48,0]
    0x68,  # ▓░░▓░▓▓▓
    0x2C,  # ▓▓░▓░░▓▓
    0x90,  # ░▓▓░▓▓▓▓
    0xC6,  # ░░▓▓▓░░▓
    0xDE,  # ░░▓░░░░▓
    0x9C,  # ░▓▓░░░▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# crackedBoulderSprite = thumby.Sprite(8, 8, crackedBoulder)

beanStalk = bytearray([
    # BITMAP: width: 8, height: 8, [16,32,223,119,253,2,1,0]
    0x10,  # ▓▓▓░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0xDF,  # ░░▓░░░░░
    0x77,  # ▓░░░▓░░░
    0xFD,  # ░░░░░░▓░
    0x02,  # ▓▓▓▓▓▓░▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x00,  # ▓▓▓▓▓▓▓▓
])
# beanStalkSprite = thumby.Sprite(8, 8, beanStalk)