# Waves - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

ripple = bytearray([
    # BITMAP: width: 8, height: 8, [64,2,32,2,32,4,64,4]
    0x40,  # ▓░▓▓▓▓▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x04,  # ▓▓▓▓▓░▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x04,  # ▓▓▓▓▓░▓▓
])
# rippleSprite = thumby.Sprite(8, 8, ripple)

wave = bytearray([
    # BITMAP: width: 8, height: 8, [68,34,17,17,34,0,34,68]
    0x44,  # ▓░▓▓▓░▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x11,  # ▓▓▓░▓▓▓░
    0x11,  # ▓▓▓░▓▓▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x44,  # ▓░▓▓▓░▓▓
])
# waveSprite = thumby.Sprite(8, 8, wave)

tidalLight = bytearray([
    # BITMAP: width: 8, height: 8, [64,32,0,16,0,32,64,64]
    0x40,  # ▓░▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
])
# tidalLightSprite = thumby.Sprite(8, 8, tidalLight)

tidal = bytearray([
    # BITMAP: width: 8, height: 8, [64,32,16,16,16,32,64,64]
    0x40,  # ▓░▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
])
# tidalSprite = thumby.Sprite(8, 8, tidal)

tidalMedium = bytearray([
    # BITMAP: width: 8, height: 8, [96,48,24,24,24,48,96,96]
    0x60,  # ▓░░▓▓▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
])
# tidalMediumSprite = thumby.Sprite(8, 8, tidalMedium)

oceanicLight = bytearray([
    # BITMAP: width: 8, height: 8, [0,64,40,16,0,32,0,64]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
])
# oceanicLightSprite = thumby.Sprite(8, 8, oceanicLight)

oceanic = bytearray([
    # BITMAP: width: 8, height: 8, [64,104,56,16,32,32,64,64]
    0x40,  # ▓░▓▓▓▓▓▓
    0x68,  # ▓░░▓░▓▓▓
    0x38,  # ▓▓░░░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
])
# oceanicSprite = thumby.Sprite(8, 8, oceanic)

urdy = bytearray([
    # BITMAP: width: 8, height: 8, [60,2,1,2,60,64,128,64]
    0x3C,  # ▓▓░░░░▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x02,  # ▓▓▓▓▓▓░▓
    0x3C,  # ▓▓░░░░▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x80,  # ░▓▓▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
])
# urdySprite = thumby.Sprite(8, 8, urdy)

doubleHelix = bytearray([
    # BITMAP: width: 8, height: 8, [66,66,36,8,16,36,66,66]
    0x42,  # ▓░▓▓▓▓░▓
    0x42,  # ▓░▓▓▓▓░▓
    0x24,  # ▓▓░▓▓░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x42,  # ▓░▓▓▓▓░▓
    0x42,  # ▓░▓▓▓▓░▓
])
# doubleHelixSprite = thumby.Sprite(8, 8, doubleHelix)