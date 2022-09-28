# Nature - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

# Scales
# BITMAP: width: 8, height: 8, [189,187,219,227,219,187,189,62]
scales = bytearray([
    0xBD,  # ░▓░░░░▓░
    0xBB,  # ░▓░░░▓░░
    0xDB,  # ░░▓░░▓░░
    0xE3,  # ░░░▓▓▓░░
    0xDB,  # ░░▓░░▓░░
    0xBB,  # ░▓░░░▓░░
    0xBD,  # ░▓░░░░▓░
    0x3E ])# ▓▓░░░░░▓
# scalesSprite = thumby.Sprite(8, 8, scales)

# Loam
# BITMAP: width: 8, height: 8, [0,0,4,64,0,0,16,0]
loam = bytearray([
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x04,  # ▓▓▓▓▓░▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# loamSprite = thumby.Sprite(8, 8, loam)

# Grass
# BITMAP: width: 8, height: 8, [32,64,32,0,2,4,2,0]
grass = bytearray([
    0x20,  # ▓▓░▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x04,  # ▓▓▓▓▓░▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# grassSprite = thumby.Sprite(8, 8, grass)

# Tuffet
# BITMAP: width: 8, height: 8, [0,32,64,0,96,16,0,0]
tuffet = bytearray([
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x40,  # ▓░▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x60,  # ▓░░▓▓▓▓▓
    0x10,  # ▓▓▓░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# tuffetSprite = thumby.Sprite(8, 8, tuffet)

# Leaves
# BITMAP: width: 8, height: 8, [0,0,24,48,0,24,12,0]
leaves = bytearray([
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x0C,  # ▓▓▓▓░░▓▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# leavesSprite = thumby.Sprite(8, 8, leaves)

# Daisies
# BITMAP: width: 8, height: 8, [8,20,8,0,32,80,32,0]
daisies = bytearray([
    0x08,  # ▓▓▓▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# daisiesSprite = thumby.Sprite(8, 8, daisies)

# Tree
# BITMAP: width: 8, height: 8, [0,40,20,234,20,40,0,0]
tree = bytearray([
    0x00,  # ▓▓▓▓▓▓▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0xEA,  # ░░░▓░▓░▓
    0x14,  # ▓▓▓░▓░▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# treeSprite = thumby.Sprite(8, 8, tree)

# Shrub
# BITMAP: width: 8, height: 8, [0,36,40,54,40,36,0,0]
shrub = bytearray([
    0x00,  # ▓▓▓▓▓▓▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x28,  # ▓▓░▓░▓▓▓
    0x36,  # ▓▓░░▓░░▓
    0x28,  # ▓▓░▓░▓▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# shrubSprite = thumby.Sprite(8, 8, shrub)

# CrackedBoulder
# BITMAP: width: 8, height: 8, [104,44,144,198,222,156,48,0]
crackedboulder = bytearray([
    0x68,  # ▓░░▓░▓▓▓
    0x2C,  # ▓▓░▓░░▓▓
    0x90,  # ░▓▓░▓▓▓▓
    0xC6,  # ░░▓▓▓░░▓
    0xDE,  # ░░▓░░░░▓
    0x9C,  # ░▓▓░░░▓▓
    0x30,  # ▓▓░░▓▓▓▓
    0x00 ])# ▓▓▓▓▓▓▓▓
# crackedboulderSprite = thumby.Sprite(8, 8, crackedboulder)