# Dots - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

pixel = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,0,0,8,0,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# pixelSprite = thumby.Sprite(8, 8, pixel)

pixelMini = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,34,0,0,0,34,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# pixelMiniSprite = thumby.Sprite(8, 8, pixelMini)

glisten = bytearray([
    # BITMAP: width: 8, height: 8, [4,64,0,34,0,1,16,0]
    0x04, #  ▓▓▓▓▓░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# glistenSprite = thumby.Sprite(8, 8, glisten)

fairyRing = bytearray([
    # BITMAP: width: 8, height: 8, [0,16,66,0,0,33,4,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x42, #  ▓░▓▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x21, #  ▓▓░▓▓▓▓░
    0x04, #  ▓▓▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# fairyRingSprite = thumby.Sprite(8, 8, fairyRing)

noise = bytearray([
    # BITMAP: width: 8, height: 8, [8,1,0,72,0,2,16,0]
    0x08, #  ▓▓▓▓░▓▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x48, #  ▓░▓▓░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# noiseSprite = thumby.Sprite(8, 8, noise)

confetti = bytearray([
    # BITMAP: width: 8, height: 8, [4,64,1,8,32,2,128,16]
    0x04, #  ▓▓▓▓▓░▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x08, #  ▓▓▓▓░▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x80, #  ░▓▓▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# confettiSprite = thumby.Sprite(8, 8, confetti)

static = bytearray([
    # BITMAP: width: 8, height: 8, [64,20,1,16,162,8,64,9]
    0x40, #  ▓░▓▓▓▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x01, #  ▓▓▓▓▓▓▓░
    0x10, #  ▓▓▓░▓▓▓▓
    0xA2, #  ░▓░▓▓▓░▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x09, #  ▓▓▓▓░▓▓░
])
# staticSprite = thumby.Sprite(8, 8, static)

diamondSpeckled = bytearray([
    # BITMAP: width: 8, height: 8, [8,32,10,160,5,80,4,16]
    0x08, #  ▓▓▓▓░▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x0A, #  ▓▓▓▓░▓░▓
    0xA0, #  ░▓░▓▓▓▓▓
    0x05, #  ▓▓▓▓▓░▓░
    0x50, #  ▓░▓░▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# diamondSpeckledSprite = thumby.Sprite(8, 8, diamondSpeckled)

confettiLarge = bytearray([
    # BITMAP: width: 8, height: 8, [12,108,99,3,48,54,198,192]
    0x0C, #  ▓▓▓▓░░▓▓
    0x6C, #  ▓░░▓░░▓▓
    0x63, #  ▓░░▓▓▓░░
    0x03, #  ▓▓▓▓▓▓░░
    0x30, #  ▓▓░░▓▓▓▓
    0x36, #  ▓▓░░▓░░▓
    0xC6, #  ░░▓▓▓░░▓
    0xC0, #  ░░▓▓▓▓▓▓
])
# confettiLargeSprite = thumby.Sprite(8, 8, confettiLarge)
