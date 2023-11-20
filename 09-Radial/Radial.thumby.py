# Radial - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

nebula = bytearray([
    # BITMAP: width: 8, height: 8, [0,16,8,58,92,16,8,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x3A, #  ▓▓░░░▓░▓
    0x5C, #  ▓░▓░░░▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# nebulaSprite = thumby.Sprite(8, 8, nebula)

pinwheel = bytearray([
    # BITMAP: width: 8, height: 8, [0,8,8,120,30,16,16,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x78, #  ▓░░░░▓▓▓
    0x1E, #  ▓▓▓░░░░▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# pinwheelSprite = thumby.Sprite(8, 8, pinwheel)

pivot = bytearray([
    # BITMAP: width: 8, height: 8, [8,8,24,228,39,24,16,16]
    0x08, #  ▓▓▓▓░▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0xE4, #  ░░░▓▓░▓▓
    0x27, #  ▓▓░▓▓░░░
    0x18, #  ▓▓▓░░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# pivotSprite = thumby.Sprite(8, 8, pivot)

fylfot = bytearray([
    # BITMAP: width: 8, height: 8, [48,16,25,39,228,152,8,12]
    0x30, #  ▓▓░░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x19, #  ▓▓▓░░▓▓░
    0x27, #  ▓▓░▓▓░░░
    0xE4, #  ░░░▓▓░▓▓
    0x98, #  ░▓▓░░▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x0C, #  ▓▓▓▓░░▓▓
])
# fylfotSprite = thumby.Sprite(8, 8, fylfot)

rotary = bytearray([
    # BITMAP: width: 8, height: 8, [8,8,52,196,35,44,16,16]
    0x08, #  ▓▓▓▓░▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x34, #  ▓▓░░▓░▓▓
    0xC4, #  ░░▓▓▓░▓▓
    0x23, #  ▓▓░▓▓▓░░
    0x2C, #  ▓▓░▓░░▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# rotarySprite = thumby.Sprite(8, 8, rotary)

starBurst = bytearray([
    # BITMAP: width: 8, height: 8, [4,12,244,68,34,47,48,32]
    0x04, #  ▓▓▓▓▓░▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0xF4, #  ░░░░▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x2F, #  ▓▓░▓░░░░
    0x30, #  ▓▓░░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
])
# starBurstSprite = thumby.Sprite(8, 8, starBurst)

swirl = bytearray([
    # BITMAP: width: 8, height: 8, [8,4,100,128,1,38,32,16]
    0x08, #  ▓▓▓▓░▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x64, #  ▓░░▓▓░▓▓
    0x80, #  ░▓▓▓▓▓▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x26, #  ▓▓░▓▓░░▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# swirlSprite = thumby.Sprite(8, 8, swirl)

swarm = bytearray([
    # BITMAP: width: 8, height: 8, [4,8,164,64,2,37,16,32]
    0x04, #  ▓▓▓▓▓░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0xA4, #  ░▓░▓▓░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x25, #  ▓▓░▓▓░▓░
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
])
# swarmSprite = thumby.Sprite(8, 8, swarm)

encircled = bytearray([
    # BITMAP: width: 8, height: 8, [4,66,128,24,24,1,66,32]
    0x04, #  ▓▓▓▓▓░▓▓
    0x42, #  ▓░▓▓▓▓░▓
    0x80, #  ░▓▓▓▓▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x18, #  ▓▓▓░░▓▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x42, #  ▓░▓▓▓▓░▓
    0x20, #  ▓▓░▓▓▓▓▓
])
# encircledSprite = thumby.Sprite(8, 8, encircled)

spokes = bytearray([
    # BITMAP: width: 8, height: 8, [8,12,100,216,27,38,48,16]
    0x08, #  ▓▓▓▓░▓▓▓
    0x0C, #  ▓▓▓▓░░▓▓
    0x64, #  ▓░░▓▓░▓▓
    0xD8, #  ░░▓░░▓▓▓
    0x1B, #  ▓▓▓░░▓░░
    0x26, #  ▓▓░▓▓░░▓
    0x30, #  ▓▓░░▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# spokesSprite = thumby.Sprite(8, 8, spokes)

cartwheel = bytearray([
    # BITMAP: width: 8, height: 8, [8,44,102,216,27,102,52,16]
    0x08, #  ▓▓▓▓░▓▓▓
    0x2C, #  ▓▓░▓░░▓▓
    0x66, #  ▓░░▓▓░░▓
    0xD8, #  ░░▓░░▓▓▓
    0x1B, #  ▓▓▓░░▓░░
    0x66, #  ▓░░▓▓░░▓
    0x34, #  ▓▓░░▓░▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# cartwheelSprite = thumby.Sprite(8, 8, cartwheel)

cartwheelBold = bytearray([
    # BITMAP: width: 8, height: 8, [44,110,231,216,27,231,118,52]
    0x2C, #  ▓▓░▓░░▓▓
    0x6E, #  ▓░░▓░░░▓
    0xE7, #  ░░░▓▓░░░
    0xD8, #  ░░▓░░▓▓▓
    0x1B, #  ▓▓▓░░▓░░
    0xE7, #  ░░░▓▓░░░
    0x76, #  ▓░░░▓░░▓
    0x34, #  ▓▓░░▓░▓▓
])
# cartwheelBoldSprite = thumby.Sprite(8, 8, cartwheelBold)

cartwheelExtraBold = bytearray([
    # BITMAP: width: 8, height: 8, [110,239,231,216,27,231,247,118]
    0x6E, #  ▓░░▓░░░▓
    0xEF, #  ░░░▓░░░░
    0xE7, #  ░░░▓▓░░░
    0xD8, #  ░░▓░░▓▓▓
    0x1B, #  ▓▓▓░░▓░░
    0xE7, #  ░░░▓▓░░░
    0xF7, #  ░░░░▓░░░
    0x76, #  ▓░░░▓░░▓
])
# cartwheelExtraBoldSprite = thumby.Sprite(8, 8, cartwheelExtraBold)
