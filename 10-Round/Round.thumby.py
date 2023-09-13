# Round - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

annuletSmall = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,8,20,8,0,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x14,  # ▓▓▓░▓░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletSmallSprite = thumby.Sprite(8, 8, annuletSmall)

annuletSmallDuo = bytearray([
    # BITMAP: width: 8, height: 8, [32,80,32,0,2,5,2,0]
    0x20,  # ▓▓░▓▓▓▓▓
    0x50,  # ▓░▓░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x05,  # ▓▓▓▓▓░▓░
    0x02,  # ▓▓▓▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletSmallDuoSprite = thumby.Sprite(8, 8, annuletSmallDuo)

annuletSmallQuad = bytearray([
    # BITMAP: width: 8, height: 8, [34,85,34,0,34,85,34,0]
    0x22,  # ▓▓░▓▓▓░▓
    0x55,  # ▓░▓░▓░▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x55,  # ▓░▓░▓░▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletSmallQuadSprite = thumby.Sprite(8, 8, annuletSmallQuad)

roundelSmallDuo = bytearray([
    # BITMAP: width: 8, height: 8, [32,112,32,0,2,7,2,0]
    0x20,  # ▓▓░▓▓▓▓▓
    0x70,  # ▓░░░▓▓▓▓
    0x20,  # ▓▓░▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x02,  # ▓▓▓▓▓▓░▓
    0x07,  # ▓▓▓▓▓░░░
    0x02,  # ▓▓▓▓▓▓░▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# roundelSmallDuoSprite = thumby.Sprite(8, 8, roundelSmallDuo)

roundelSmall = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,8,28,8,0,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x08,  # ▓▓▓▓░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# roundelSmallSprite = thumby.Sprite(8, 8, roundelSmall)

annulet = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,24,36,36,24,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletSprite = thumby.Sprite(8, 8, annulet)

annuletCoAnnulet = bytearray([
    # BITMAP: width: 8, height: 8, [66,129,24,36,36,24,129,66]
    0x42,  # ▓░▓▓▓▓░▓
    0x81,  # ░▓▓▓▓▓▓░
    0x18,  # ▓▓▓░░▓▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x81,  # ░▓▓▓▓▓▓░
    0x42,  # ▓░▓▓▓▓░▓
])
# annuletCoAnnuletSprite = thumby.Sprite(8, 8, annuletCoAnnulet)

annuletCoAnnuletSquare = bytearray([
    # BITMAP: width: 8, height: 8, [90,129,24,165,165,24,129,90]
    0x5A,  # ▓░▓░░▓░▓
    0x81,  # ░▓▓▓▓▓▓░
    0x18,  # ▓▓▓░░▓▓▓
    0xA5,  # ░▓░▓▓░▓░
    0xA5,  # ░▓░▓▓░▓░
    0x18,  # ▓▓▓░░▓▓▓
    0x81,  # ░▓▓▓▓▓▓░
    0x5A,  # ▓░▓░░▓░▓
])
# annuletCoAnnuletSquareSprite = thumby.Sprite(8, 8, annuletCoAnnuletSquare)

annuletCoAnnuletXL = bytearray([
    # BITMAP: width: 8, height: 8, [36,66,153,36,36,153,66,36]
    0x24,  # ▓▓░▓▓░▓▓
    0x42,  # ▓░▓▓▓▓░▓
    0x99,  # ░▓▓░░▓▓░
    0x24,  # ▓▓░▓▓░▓▓
    0x24,  # ▓▓░▓▓░▓▓
    0x99,  # ░▓▓░░▓▓░
    0x42,  # ▓░▓▓▓▓░▓
    0x24,  # ▓▓░▓▓░▓▓
])
# annuletCoAnnuletXLSprite = thumby.Sprite(8, 8, annuletCoAnnuletXL)

roundelCoAnnuletXL = bytearray([
    # BITMAP: width: 8, height: 8, [36,66,153,60,60,153,66,36]
    0x24,  # ▓▓░▓▓░▓▓
    0x42,  # ▓░▓▓▓▓░▓
    0x99,  # ░▓▓░░▓▓░
    0x3C,  # ▓▓░░░░▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x99,  # ░▓▓░░▓▓░
    0x42,  # ▓░▓▓▓▓░▓
    0x24,  # ▓▓░▓▓░▓▓
])
# roundelCoAnnuletXLSprite = thumby.Sprite(8, 8, roundelCoAnnuletXL)

roundelCoAnnulet = bytearray([
    # BITMAP: width: 8, height: 8, [66,129,24,60,60,24,129,66]
    0x42,  # ▓░▓▓▓▓░▓
    0x81,  # ░▓▓▓▓▓▓░
    0x18,  # ▓▓▓░░▓▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x81,  # ░▓▓▓▓▓▓░
    0x42,  # ▓░▓▓▓▓░▓
])
# roundelCoAnnuletSprite = thumby.Sprite(8, 8, roundelCoAnnulet)

roundelCoRoundel = bytearray([
    # BITMAP: width: 8, height: 8, [195,129,24,60,60,24,129,195]
    0xC3,  # ░░▓▓▓▓░░
    0x81,  # ░▓▓▓▓▓▓░
    0x18,  # ▓▓▓░░▓▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x81,  # ░▓▓▓▓▓▓░
    0xC3,  # ░░▓▓▓▓░░
])
# roundelCoRoundelSprite = thumby.Sprite(8, 8, roundelCoRoundel)

roundel = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,24,60,60,24,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# roundelSprite = thumby.Sprite(8, 8, roundel)

ball = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,24,52,60,24,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x34,  # ▓▓░░▓░▓▓
    0x3C,  # ▓▓░░░░▓▓
    0x18,  # ▓▓▓░░▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# ballSprite = thumby.Sprite(8, 8, ball)

annuletLarge = bytearray([
    # BITMAP: width: 8, height: 8, [0,28,34,34,34,28,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x22,  # ▓▓░▓▓▓░▓
    0x22,  # ▓▓░▓▓▓░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletLargeSprite = thumby.Sprite(8, 8, annuletLarge)

annuletLargeMedium = bytearray([
    # BITMAP: width: 8, height: 8, [0,28,54,34,54,28,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x36,  # ▓▓░░▓░░▓
    0x22,  # ▓▓░▓▓▓░▓
    0x36,  # ▓▓░░▓░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletLargeMediumSprite = thumby.Sprite(8, 8, annuletLargeMedium)

annuletLargeBold = bytearray([
    # BITMAP: width: 8, height: 8, [0,28,62,54,62,28,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x3E,  # ▓▓░░░░░▓
    0x36,  # ▓▓░░▓░░▓
    0x3E,  # ▓▓░░░░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletLargeBoldSprite = thumby.Sprite(8, 8, annuletLargeBold)

roundelLarge = bytearray([
    # BITMAP: width: 8, height: 8, [0,28,62,62,62,28,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x3E,  # ▓▓░░░░░▓
    0x3E,  # ▓▓░░░░░▓
    0x3E,  # ▓▓░░░░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# roundelLargeSprite = thumby.Sprite(8, 8, roundelLarge)

ballLarge = bytearray([
    # BITMAP: width: 8, height: 8, [0,28,54,58,62,28,0,0]
    0x00,  # ▓▓▓▓▓▓▓▓
    0x1C,  # ▓▓▓░░░▓▓
    0x36,  # ▓▓░░▓░░▓
    0x3A,  # ▓▓░░░▓░▓
    0x3E,  # ▓▓░░░░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# ballLargeSprite = thumby.Sprite(8, 8, ballLarge)

spheres = bytearray([
    # BITMAP: width: 8, height: 8, [227,221,58,58,62,221,163,163]
    0xE3,  # ░░░▓▓▓░░
    0xDD,  # ░░▓░░░▓░
    0x3A,  # ▓▓░░░▓░▓
    0x3A,  # ▓▓░░░▓░▓
    0x3E,  # ▓▓░░░░░▓
    0xDD,  # ░░▓░░░▓░
    0xA3,  # ░▓░▓▓▓░░
    0xA3,  # ░▓░▓▓▓░░
])
# spheresSprite = thumby.Sprite(8, 8, spheres)

annuletXXL = bytearray([
    # BITMAP: width: 8, height: 8, [28,34,65,65,65,34,28,0]
    0x1C,  # ▓▓▓░░░▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x41,  # ▓░▓▓▓▓▓░
    0x41,  # ▓░▓▓▓▓▓░
    0x41,  # ▓░▓▓▓▓▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# annuletXXLSprite = thumby.Sprite(8, 8, annuletXXL)

bubble = bytearray([
    # BITMAP: width: 8, height: 8, [28,34,73,69,65,34,28,0]
    0x1C,  # ▓▓▓░░░▓▓
    0x22,  # ▓▓░▓▓▓░▓
    0x49,  # ▓░▓▓░▓▓░
    0x45,  # ▓░▓▓▓░▓░
    0x41,  # ▓░▓▓▓▓▓░
    0x22,  # ▓▓░▓▓▓░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# bubbleSprite = thumby.Sprite(8, 8, bubble)

roundelXXL = bytearray([
    # BITMAP: width: 8, height: 8, [28,62,127,127,127,62,28,0]
    0x1C,  # ▓▓▓░░░▓▓
    0x3E,  # ▓▓░░░░░▓
    0x7F,  # ▓░░░░░░░
    0x7F,  # ▓░░░░░░░
    0x7F,  # ▓░░░░░░░
    0x3E,  # ▓▓░░░░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# roundelXXLSprite = thumby.Sprite(8, 8, roundelXXL)

ballXXL = bytearray([
    # BITMAP: width: 8, height: 8, [28,50,121,125,127,62,28,0]
    0x1C,  # ▓▓▓░░░▓▓
    0x32,  # ▓▓░░▓▓░▓
    0x79,  # ▓░░░░▓▓░
    0x7D,  # ▓░░░░░▓░
    0x7F,  # ▓░░░░░░░
    0x3E,  # ▓▓░░░░░▓
    0x1C,  # ▓▓▓░░░▓▓
    0x00,  # ▓▓▓▓▓▓▓▓
])
# ballXXLSprite = thumby.Sprite(8, 8, ballXXL)

annuletUltraLarge = bytearray([
    # BITMAP: width: 8, height: 8, [60,66,129,129,129,129,66,60]
    0x3C,  # ▓▓░░░░▓▓
    0x42,  # ▓░▓▓▓▓░▓
    0x81,  # ░▓▓▓▓▓▓░
    0x81,  # ░▓▓▓▓▓▓░
    0x81,  # ░▓▓▓▓▓▓░
    0x81,  # ░▓▓▓▓▓▓░
    0x42,  # ▓░▓▓▓▓░▓
    0x3C,  # ▓▓░░░░▓▓
])
# annuletUltraLargeSprite = thumby.Sprite(8, 8, annuletUltraLarge)

annuletUltraLargeMedium = bytearray([
    # BITMAP: width: 8, height: 8, [60,102,195,129,129,195,102,60]
    0x3C,  # ▓▓░░░░▓▓
    0x66,  # ▓░░▓▓░░▓
    0xC3,  # ░░▓▓▓▓░░
    0x81,  # ░▓▓▓▓▓▓░
    0x81,  # ░▓▓▓▓▓▓░
    0xC3,  # ░░▓▓▓▓░░
    0x66,  # ▓░░▓▓░░▓
    0x3C,  # ▓▓░░░░▓▓
])
# annuletUltraLargeMediumSprite = thumby.Sprite(8, 8, annuletUltraLargeMedium)

annuletUltraLargeBold = bytearray([
    # BITMAP: width: 8, height: 8, [60,126,231,195,195,231,126,60]
    0x3C,  # ▓▓░░░░▓▓
    0x7E,  # ▓░░░░░░▓
    0xE7,  # ░░░▓▓░░░
    0xC3,  # ░░▓▓▓▓░░
    0xC3,  # ░░▓▓▓▓░░
    0xE7,  # ░░░▓▓░░░
    0x7E,  # ▓░░░░░░▓
    0x3C,  # ▓▓░░░░▓▓
])
# annuletUltraLargeBoldSprite = thumby.Sprite(8, 8, annuletUltraLargeBold)

annuletUltraLargeExtraBold = bytearray([
    # BITMAP: width: 8, height: 8, [60,126,255,231,231,255,126,60]
    0x3C,  # ▓▓░░░░▓▓
    0x7E,  # ▓░░░░░░▓
    0xFF,  # ░░░░░░░░
    0xE7,  # ░░░▓▓░░░
    0xE7,  # ░░░▓▓░░░
    0xFF,  # ░░░░░░░░
    0x7E,  # ▓░░░░░░▓
    0x3C,  # ▓▓░░░░▓▓
])
# annuletUltraLargeExtraBoldSprite = thumby.Sprite(8, 8, annuletUltraLargeExtraBold)

roundelUltraLarge = bytearray([
    # BITMAP: width: 8, height: 8, [60,126,255,255,255,255,126,60]
    0x3C,  # ▓▓░░░░▓▓
    0x7E,  # ▓░░░░░░▓
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0xFF,  # ░░░░░░░░
    0x7E,  # ▓░░░░░░▓
    0x3C,  # ▓▓░░░░▓▓
])
# roundelUltraLargeSprite = thumby.Sprite(8, 8, roundelUltraLarge)
