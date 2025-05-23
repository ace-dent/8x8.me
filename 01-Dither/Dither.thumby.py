# SPDX-License-Identifier: CC0-1.0

# Dither - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

bayerDither00 = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,0,0,0,0,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bayerDither00Sprite = thumby.Sprite(8, 8, bayerDither00)

bayerDither01 = bytearray([
    # BITMAP: width: 8, height: 8, [17,0,0,0,17,0,0,0]
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bayerDither01Sprite = thumby.Sprite(8, 8, bayerDither01)

bayerDither02 = bytearray([
    # BITMAP: width: 8, height: 8, [17,0,68,0,17,0,68,0]
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bayerDither02Sprite = thumby.Sprite(8, 8, bayerDither02)

bayerDither03 = bytearray([
    # BITMAP: width: 8, height: 8, [85,0,68,0,85,0,68,0]
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bayerDither03Sprite = thumby.Sprite(8, 8, bayerDither03)

bayerDither04 = bytearray([
    # BITMAP: width: 8, height: 8, [85,0,85,0,85,0,85,0]
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bayerDither04Sprite = thumby.Sprite(8, 8, bayerDither04)

bayerDither05 = bytearray([
    # BITMAP: width: 8, height: 8, [85,34,85,0,85,34,85,0]
    0x55, #  ▓░▓░▓░▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# bayerDither05Sprite = thumby.Sprite(8, 8, bayerDither05)

bayerDither06 = bytearray([
    # BITMAP: width: 8, height: 8, [85,34,85,136,85,34,85,136]
    0x55, #  ▓░▓░▓░▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x88, #  ░▓▓▓░▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x88, #  ░▓▓▓░▓▓▓
])
# bayerDither06Sprite = thumby.Sprite(8, 8, bayerDither06)

bayerDither07 = bytearray([
    # BITMAP: width: 8, height: 8, [85,170,85,136,85,170,85,136]
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x88, #  ░▓▓▓░▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x88, #  ░▓▓▓░▓▓▓
])
# bayerDither07Sprite = thumby.Sprite(8, 8, bayerDither07)

bayerDither08 = bytearray([
    # BITMAP: width: 8, height: 8, [85,170,85,170,85,170,85,170]
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
])
# bayerDither08Sprite = thumby.Sprite(8, 8, bayerDither08)

bayerDither09 = bytearray([
    # BITMAP: width: 8, height: 8, [119,170,85,170,119,170,85,170]
    0x77, #  ▓░░░▓░░░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x77, #  ▓░░░▓░░░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
])
# bayerDither09Sprite = thumby.Sprite(8, 8, bayerDither09)

bayerDither10 = bytearray([
    # BITMAP: width: 8, height: 8, [119,170,221,170,119,170,221,170]
    0x77, #  ▓░░░▓░░░
    0xAA, #  ░▓░▓░▓░▓
    0xDD, #  ░░▓░░░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x77, #  ▓░░░▓░░░
    0xAA, #  ░▓░▓░▓░▓
    0xDD, #  ░░▓░░░▓░
    0xAA, #  ░▓░▓░▓░▓
])
# bayerDither10Sprite = thumby.Sprite(8, 8, bayerDither10)

bayerDither11 = bytearray([
    # BITMAP: width: 8, height: 8, [255,170,221,170,255,170,221,170]
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xDD, #  ░░▓░░░▓░
    0xAA, #  ░▓░▓░▓░▓
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xDD, #  ░░▓░░░▓░
    0xAA, #  ░▓░▓░▓░▓
])
# bayerDither11Sprite = thumby.Sprite(8, 8, bayerDither11)

bayerDither12 = bytearray([
    # BITMAP: width: 8, height: 8, [255,170,255,170,255,170,255,170]
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
])
# bayerDither12Sprite = thumby.Sprite(8, 8, bayerDither12)

bayerDither13 = bytearray([
    # BITMAP: width: 8, height: 8, [255,187,255,170,255,187,255,170]
    0xFF, #  ░░░░░░░░
    0xBB, #  ░▓░░░▓░░
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xFF, #  ░░░░░░░░
    0xBB, #  ░▓░░░▓░░
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
])
# bayerDither13Sprite = thumby.Sprite(8, 8, bayerDither13)

bayerDither14 = bytearray([
    # BITMAP: width: 8, height: 8, [255,187,255,238,255,187,255,238]
    0xFF, #  ░░░░░░░░
    0xBB, #  ░▓░░░▓░░
    0xFF, #  ░░░░░░░░
    0xEE, #  ░░░▓░░░▓
    0xFF, #  ░░░░░░░░
    0xBB, #  ░▓░░░▓░░
    0xFF, #  ░░░░░░░░
    0xEE, #  ░░░▓░░░▓
])
# bayerDither14Sprite = thumby.Sprite(8, 8, bayerDither14)

bayerDither15 = bytearray([
    # BITMAP: width: 8, height: 8, [255,255,255,238,255,255,255,238]
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xEE, #  ░░░▓░░░▓
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xEE, #  ░░░▓░░░▓
])
# bayerDither15Sprite = thumby.Sprite(8, 8, bayerDither15)

bayerDither16 = bytearray([
    # BITMAP: width: 8, height: 8, [255,255,255,255,255,255,255,255]
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
])
# bayerDither16Sprite = thumby.Sprite(8, 8, bayerDither16)

officeDither05 = bytearray([
    # BITMAP: width: 8, height: 8, [0,4,0,0,0,64,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# officeDither05Sprite = thumby.Sprite(8, 8, officeDither05)

officeDither10 = bytearray([
    # BITMAP: width: 8, height: 8, [0,17,0,0,0,68,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# officeDither10Sprite = thumby.Sprite(8, 8, officeDither10)

officeDither20 = bytearray([
    # BITMAP: width: 8, height: 8, [17,0,68,0,17,0,68,0]
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# officeDither20Sprite = thumby.Sprite(8, 8, officeDither20)

officeDither25 = bytearray([
    # BITMAP: width: 8, height: 8, [85,0,170,0,85,0,170,0]
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0xAA, #  ░▓░▓░▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0xAA, #  ░▓░▓░▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# officeDither25Sprite = thumby.Sprite(8, 8, officeDither25)

officeDither30 = bytearray([
    # BITMAP: width: 8, height: 8, [85,34,85,136,85,34,85,136]
    0x55, #  ▓░▓░▓░▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x88, #  ░▓▓▓░▓▓▓
    0x55, #  ▓░▓░▓░▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x88, #  ░▓▓▓░▓▓▓
])
# officeDither30Sprite = thumby.Sprite(8, 8, officeDither30)

officeDither40 = bytearray([
    # BITMAP: width: 8, height: 8, [85,170,85,138,85,170,85,168]
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x8A, #  ░▓▓▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xA8, #  ░▓░▓░▓▓▓
])
# officeDither40Sprite = thumby.Sprite(8, 8, officeDither40)

officeDither50 = bytearray([
    # BITMAP: width: 8, height: 8, [85,170,85,170,85,170,85,170]
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0xAA, #  ░▓░▓░▓░▓
])
# officeDither50Sprite = thumby.Sprite(8, 8, officeDither50)

officeDither60 = bytearray([
    # BITMAP: width: 8, height: 8, [85,187,85,238,85,187,85,238]
    0x55, #  ▓░▓░▓░▓░
    0xBB, #  ░▓░░░▓░░
    0x55, #  ▓░▓░▓░▓░
    0xEE, #  ░░░▓░░░▓
    0x55, #  ▓░▓░▓░▓░
    0xBB, #  ░▓░░░▓░░
    0x55, #  ▓░▓░▓░▓░
    0xEE, #  ░░░▓░░░▓
])
# officeDither60Sprite = thumby.Sprite(8, 8, officeDither60)

officeDither70 = bytearray([
    # BITMAP: width: 8, height: 8, [85,255,170,255,85,255,170,255]
    0x55, #  ▓░▓░▓░▓░
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xFF, #  ░░░░░░░░
    0x55, #  ▓░▓░▓░▓░
    0xFF, #  ░░░░░░░░
    0xAA, #  ░▓░▓░▓░▓
    0xFF, #  ░░░░░░░░
])
# officeDither70Sprite = thumby.Sprite(8, 8, officeDither70)

officeDither75 = bytearray([
    # BITMAP: width: 8, height: 8, [187,255,238,255,187,255,238,255]
    0xBB, #  ░▓░░░▓░░
    0xFF, #  ░░░░░░░░
    0xEE, #  ░░░▓░░░▓
    0xFF, #  ░░░░░░░░
    0xBB, #  ░▓░░░▓░░
    0xFF, #  ░░░░░░░░
    0xEE, #  ░░░▓░░░▓
    0xFF, #  ░░░░░░░░
])
# officeDither75Sprite = thumby.Sprite(8, 8, officeDither75)

officeDither80 = bytearray([
    # BITMAP: width: 8, height: 8, [255,187,255,255,255,238,255,255]
    0xFF, #  ░░░░░░░░
    0xBB, #  ░▓░░░▓░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xEE, #  ░░░▓░░░▓
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
])
# officeDither80Sprite = thumby.Sprite(8, 8, officeDither80)

officeDither90 = bytearray([
    # BITMAP: width: 8, height: 8, [255,223,255,255,255,253,255,255]
    0xFF, #  ░░░░░░░░
    0xDF, #  ░░▓░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
    0xFD, #  ░░░░░░▓░
    0xFF, #  ░░░░░░░░
    0xFF, #  ░░░░░░░░
])
# officeDither90Sprite = thumby.Sprite(8, 8, officeDither90)
