# Woven - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

interlinked = bytearray([
    # BITMAP: width: 8, height: 8, [186,119,187,221,234,119,174,221]
    0xBA,  # ░▓░░░▓░▓
    0x77,  # ▓░░░▓░░░
    0xBB,  # ░▓░░░▓░░
    0xDD,  # ░░▓░░░▓░
    0xEA,  # ░░░▓░▓░▓
    0x77,  # ▓░░░▓░░░
    0xAE,  # ░▓░▓░░░▓
    0xDD,  # ░░▓░░░▓░
])
# interlinkedSprite = thumby.Sprite(8, 8, interlinked)

weaveDense = bytearray([
    # BITMAP: width: 8, height: 8, [186,119,171,221,234,119,174,221]
    0xBA,  # ░▓░░░▓░▓
    0x77,  # ▓░░░▓░░░
    0xAB,  # ░▓░▓░▓░░
    0xDD,  # ░░▓░░░▓░
    0xEA,  # ░░░▓░▓░▓
    0x77,  # ▓░░░▓░░░
    0xAE,  # ░▓░▓░░░▓
    0xDD,  # ░░▓░░░▓░
])
# weaveDenseSprite = thumby.Sprite(8, 8, weaveDense)

weave = bytearray([
    # BITMAP: width: 8, height: 8, [58,119,163,193,226,119,46,28]
    0x3A,  # ▓▓░░░▓░▓
    0x77,  # ▓░░░▓░░░
    0xA3,  # ░▓░▓▓▓░░
    0xC1,  # ░░▓▓▓▓▓░
    0xE2,  # ░░░▓▓▓░▓
    0x77,  # ▓░░░▓░░░
    0x2E,  # ▓▓░▓░░░▓
    0x1C,  # ▓▓▓░░░▓▓
])
# weaveSprite = thumby.Sprite(8, 8, weave)

weaveMedium = bytearray([
    # BITMAP: width: 8, height: 8, [122,119,167,195,229,238,94,60]
    0x7A,  # ▓░░░░▓░▓
    0x77,  # ▓░░░▓░░░
    0xA7,  # ░▓░▓▓░░░
    0xC3,  # ░░▓▓▓▓░░
    0xE5,  # ░░░▓▓░▓░
    0xEE,  # ░░░▓░░░▓
    0x5E,  # ▓░▓░░░░▓
    0x3C,  # ▓▓░░░░▓▓
])
# weaveMediumSprite = thumby.Sprite(8, 8, weaveMedium)

weaveBold = bytearray([
    # BITMAP: width: 8, height: 8, [125,187,215,227,245,238,95,62]
    0x7D,  # ▓░░░░░▓░
    0xBB,  # ░▓░░░▓░░
    0xD7,  # ░░▓░▓░░░
    0xE3,  # ░░░▓▓▓░░
    0xF5,  # ░░░░▓░▓░
    0xEE,  # ░░░▓░░░▓
    0x5F,  # ▓░▓░░░░░
    0x3E,  # ▓▓░░░░░▓
])
# weaveBoldSprite = thumby.Sprite(8, 8, weaveBold)

net = bytearray([
    # BITMAP: width: 8, height: 8, [131,198,108,56,28,54,99,193]
    0x83,  # ░▓▓▓▓▓░░
    0xC6,  # ░░▓▓▓░░▓
    0x6C,  # ▓░░▓░░▓▓
    0x38,  # ▓▓░░░▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x36,  # ▓▓░░▓░░▓
    0x63,  # ▓░░▓▓▓░░
    0xC1,  # ░░▓▓▓▓▓░
])
# netSprite = thumby.Sprite(8, 8, net)

wicker = bytearray([
    # BITMAP: width: 8, height: 8, [36,32,175,32,4,245,4,36]
    0x24,  # ▓▓░▓▓░▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0xAF,  # ░▓░▓░░░░
    0x20,  # ▓▓░▓▓▓▓▓
    0x04,  # ▓▓▓▓▓░▓▓
    0xF5,  # ░░░░▓░▓░
    0x04,  # ▓▓▓▓▓░▓▓
    0x24,  # ▓▓░▓▓░▓▓
])
# wickerSprite = thumby.Sprite(8, 8, wicker)

laced = bytearray([
    # BITMAP: width: 8, height: 8, [85,64,95,64,85,4,245,4]
    0x55,  # ▓░▓░▓░▓░
    0x40,  # ▓░▓▓▓▓▓▓
    0x5F,  # ▓░▓░░░░░
    0x40,  # ▓░▓▓▓▓▓▓
    0x55,  # ▓░▓░▓░▓░
    0x04,  # ▓▓▓▓▓░▓▓
    0xF5,  # ░░░░▓░▓░
    0x04,  # ▓▓▓▓▓░▓▓
])
# lacedSprite = thumby.Sprite(8, 8, laced)

squareBasket = bytearray([
    # BITMAP: width: 8, height: 8, [87,80,87,0,117,5,117,0]
    0x57,  # ▓░▓░▓░░░
    0x50,  # ▓░▓░▓▓▓▓
    0x57,  # ▓░▓░▓░░░
    0x00,  # ▓▓▓▓▓▓▓▓
    0x75,  # ▓░░░▓░▓░
    0x05,  # ▓▓▓▓▓░▓░
    0x75,  # ▓░░░▓░▓░
    0x00,  # ▓▓▓▓▓▓▓▓
])
# squareBasketSprite = thumby.Sprite(8, 8, squareBasket)

puppytooth = bytearray([
    # BITMAP: width: 8, height: 8, [68,119,238,34,68,119,238,34]
    0x44,  # ▓░▓▓▓░▓▓
    0x77,  # ▓░░░▓░░░
    0xEE,  # ░░░▓░░░▓
    0x22,  # ▓▓░▓▓▓░▓
    0x44,  # ▓░▓▓▓░▓▓
    0x77,  # ▓░░░▓░░░
    0xEE,  # ░░░▓░░░▓
    0x22,  # ▓▓░▓▓▓░▓
])
# puppytoothSprite = thumby.Sprite(8, 8, puppytooth)

houndstooth = bytearray([
    # BITMAP: width: 8, height: 8, [24,72,96,252,126,123,249,48]
    0x18,  # ▓▓▓░░▓▓▓
    0x48,  # ▓░▓▓░▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
    0xFC,  # ░░░░░░▓▓
    0x7E,  # ▓░░░░░░▓
    0x7B,  # ▓░░░░▓░░
    0xF9,  # ░░░░░▓▓░
    0x30,  # ▓▓░░▓▓▓▓
])
# houndstoothSprite = thumby.Sprite(8, 8, houndstooth)

gingham = bytearray([
    # BITMAP: width: 8, height: 8, [40,80,40,80,250,125,250,125]
    0x28,  # ▓▓░▓░▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0xFA,  # ░░░░░▓░▓
    0x7D,  # ▓░░░░░▓░
    0xFA,  # ░░░░░▓░▓
    0x7D,  # ▓░░░░░▓░
])
# ginghamSprite = thumby.Sprite(8, 8, gingham)

plaid = bytearray([
    # BITMAP: width: 8, height: 8, [120,120,120,120,170,85,170,85]
    0x78,  # ▓░░░░▓▓▓
    0x78,  # ▓░░░░▓▓▓
    0x78,  # ▓░░░░▓▓▓
    0x78,  # ▓░░░░▓▓▓
    0xAA,  # ░▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
    0xAA,  # ░▓░▓░▓░▓
    0x55,  # ▓░▓░▓░▓░
])
# plaidSprite = thumby.Sprite(8, 8, plaid)

tartan = bytearray([
    # BITMAP: width: 8, height: 8, [88,88,88,88,255,255,88,255]
    0x58,  # ▓░▓░░▓▓▓
    0x58,  # ▓░▓░░▓▓▓
    0x58,  # ▓░▓░░▓▓▓
    0x58,  # ▓░▓░░▓▓▓
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0x58,  # ▓░▓░░▓▓▓
    0xFF,  # ░░░░░░░░
])
# tartanSprite = thumby.Sprite(8, 8, tartan)