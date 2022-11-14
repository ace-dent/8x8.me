# Dots - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

confetti = bytearray([
    # BITMAP: width: 8, height: 8, [4,64,1,8,32,2,128,16]
    0x04,  # ▓▓▓▓▓░▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x01,  # ▓▓▓▓▓▓▓░
    0x08,  # ▓▓▓▓░▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x80,  # ░▓▓▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
])
# confettiSprite = thumby.Sprite(8, 8, confetti)

confettiLarge = bytearray([
    # BITMAP: width: 8, height: 8, [12,108,99,3,48,54,198,192]
    0x0C,  # ▓▓▓▓░░▓▓
    0x6C,  # ▓░░▓░░▓▓
    0x63,  # ▓░░▓▓▓░░
    0x03,  # ▓▓▓▓▓▓░░
    0x30,  # ▓▓░░▓▓▓▓
    0x36,  # ▓▓░░▓░░▓
    0xC6,  # ░░▓▓▓░░▓
    0xC0,  # ░░▓▓▓▓▓▓
])
# confettiLargeSprite = thumby.Sprite(8, 8, confettiLarge)