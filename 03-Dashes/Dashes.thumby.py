# SPDX-License-Identifier: CC0-1.0

# Dashes - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

horizontalDenseTrellis = bytearray([
    # BITMAP: width: 8, height: 8, [68,68,17,17,68,68,17,17]
    0x44, #  ▓░▓▓▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x11, #  ▓▓▓░▓▓▓░
    0x44, #  ▓░▓▓▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x11, #  ▓▓▓░▓▓▓░
])
# horizontalDenseTrellisSprite = thumby.Sprite(8, 8, horizontalDenseTrellis)

horizontalDash = bytearray([
    # BITMAP: width: 8, height: 8, [64,64,64,64,4,4,4,4]
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x04, #  ▓▓▓▓▓░▓▓
])
# horizontalDashSprite = thumby.Sprite(8, 8, horizontalDash)

horizontalDashMini = bytearray([
    # BITMAP: width: 8, height: 8, [68,68,0,0,68,68,0,0]
    0x44, #  ▓░▓▓▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# horizontalDashMiniSprite = thumby.Sprite(8, 8, horizontalDashMini)

verticalDash = bytearray([
    # BITMAP: width: 8, height: 8, [15,0,0,0,240,0,0,0]
    0x0F, #  ▓▓▓▓░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0xF0, #  ░░░░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# verticalDashSprite = thumby.Sprite(8, 8, verticalDash)

dexterDash = bytearray([
    # BITMAP: width: 8, height: 8, [16,32,4,8,16,32,4,8]
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x08, #  ▓▓▓▓░▓▓▓
])
# dexterDashSprite = thumby.Sprite(8, 8, dexterDash)

dexterSparseDash = bytearray([
    # BITMAP: width: 8, height: 8, [1,2,4,0,0,32,64,128]
    0x01, #  ▓▓▓▓▓▓▓░
    0x02, #  ▓▓▓▓▓▓░▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x80, #  ░▓▓▓▓▓▓▓
])
# dexterSparseDashSprite = thumby.Sprite(8, 8, dexterSparseDash)

sinisterDash = bytearray([
    # BITMAP: width: 8, height: 8, [8,4,32,16,8,4,32,16]
    0x08, #  ▓▓▓▓░▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x08, #  ▓▓▓▓░▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
])
# sinisterDashSprite = thumby.Sprite(8, 8, sinisterDash)

sinisterSparseDash = bytearray([
    # BITMAP: width: 8, height: 8, [128,64,32,0,0,4,2,1]
    0x80, #  ░▓▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x02, #  ▓▓▓▓▓▓░▓
    0x01, #  ▓▓▓▓▓▓▓░
])
# sinisterSparseDashSprite = thumby.Sprite(8, 8, sinisterSparseDash)

alternatingDash = bytearray([
    # BITMAP: width: 8, height: 8, [1,2,4,0,64,32,16,0]
    0x01, #  ▓▓▓▓▓▓▓░
    0x02, #  ▓▓▓▓▓▓░▓
    0x04, #  ▓▓▓▓▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x40, #  ▓░▓▓▓▓▓▓
    0x20, #  ▓▓░▓▓▓▓▓
    0x10, #  ▓▓▓░▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# alternatingDashSprite = thumby.Sprite(8, 8, alternatingDash)

alternatingDashDouble = bytearray([
    # BITMAP: width: 8, height: 8, [25,19,70,100,49,145,196,76]
    0x19, #  ▓▓▓░░▓▓░
    0x13, #  ▓▓▓░▓▓░░
    0x46, #  ▓░▓▓▓░░▓
    0x64, #  ▓░░▓▓░▓▓
    0x31, #  ▓▓░░▓▓▓░
    0x91, #  ░▓▓░▓▓▓░
    0xC4, #  ░░▓▓▓░▓▓
    0x4C, #  ▓░▓▓░░▓▓
])
# alternatingDashDoubleSprite = thumby.Sprite(8, 8, alternatingDashDouble)

alternatingDashMini = bytearray([
    # BITMAP: width: 8, height: 8, [17,34,136,68,17,34,136,68]
    0x11, #  ▓▓▓░▓▓▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x88, #  ░▓▓▓░▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
    0x11, #  ▓▓▓░▓▓▓░
    0x22, #  ▓▓░▓▓▓░▓
    0x88, #  ░▓▓▓░▓▓▓
    0x44, #  ▓░▓▓▓░▓▓
])
# alternatingDashMiniSprite = thumby.Sprite(8, 8, alternatingDashMini)
