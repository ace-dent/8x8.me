# Symbols - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

# Anchor
# BITMAP: width: 8, height: 8, [32,64,68,250,68,64,32,0]
anchor = bytearray([
	0x20,  # ▓▓░▓▓▓▓▓
	0x40,  # ▓░▓▓▓▓▓▓
	0x44,  # ▓░▓▓▓░▓▓
	0xFA,  # ░░░░░▓░▓
	0x44,  # ▓░▓▓▓░▓▓
	0x40,  # ▓░▓▓▓▓▓▓
	0x20,  # ▓▓░▓▓▓▓▓
	0x00 ])# ▓▓▓▓▓▓▓▓
# anchorSprite = thumby.Sprite(8, 8, anchor)

# Heart
# BITMAP: width: 8, height: 8, [6,9,17,34,17,9,6,0]
heart = bytearray([
	0x06,  # ▓▓▓▓▓░░▓
	0x09,  # ▓▓▓▓░▓▓░
	0x11,  # ▓▓▓░▓▓▓░
	0x22,  # ▓▓░▓▓▓░▓
	0x11,  # ▓▓▓░▓▓▓░
	0x09,  # ▓▓▓▓░▓▓░
	0x06,  # ▓▓▓▓▓░░▓
	0x00 ])# ▓▓▓▓▓▓▓▓
# heartSprite = thumby.Sprite(8, 8, heart)

# HeartMini
# BITMAP: width: 8, height: 8, [51,102,51,0,51,102,51,0]
heartmini = bytearray([
	0x33,  # ▓▓░░▓▓░░
	0x66,  # ▓░░▓▓░░▓
	0x33,  # ▓▓░░▓▓░░
	0x00,  # ▓▓▓▓▓▓▓▓
	0x33,  # ▓▓░░▓▓░░
	0x66,  # ▓░░▓▓░░▓
	0x33,  # ▓▓░░▓▓░░
	0x00 ])# ▓▓▓▓▓▓▓▓
# heartminiSprite = thumby.Sprite(8, 8, heartmini)