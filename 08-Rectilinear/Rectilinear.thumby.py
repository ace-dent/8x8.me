# Rectilinear - 8x8.me fill patterns
# This work is dedicated to the Public Domain by ACED, licensed under CC0
# https://creativecommons.org/publicdomain/zero/1.0/

squareMicro = bytearray([
    # BITMAP: width: 8, height: 8, [0,102,102,0,0,102,102,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareMicroSprite = thumby.Sprite(8, 8, squareMicro)

squareMicroOffset = bytearray([
    # BITMAP: width: 8, height: 8, [96,6,6,96,96,6,6,96]
    0x60, #  ▓░░▓▓▓▓▓
    0x06, #  ▓▓▓▓▓░░▓
    0x06, #  ▓▓▓▓▓░░▓
    0x60, #  ▓░░▓▓▓▓▓
    0x60, #  ▓░░▓▓▓▓▓
    0x06, #  ▓▓▓▓▓░░▓
    0x06, #  ▓▓▓▓▓░░▓
    0x60, #  ▓░░▓▓▓▓▓
])
# squareMicroOffsetSprite = thumby.Sprite(8, 8, squareMicroOffset)

squareMiniHighlight = bytearray([
    # BITMAP: width: 8, height: 8, [119,17,17,0,119,17,17,0]
    0x77, #  ▓░░░▓░░░
    0x11, #  ▓▓▓░▓▓▓░
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x11, #  ▓▓▓░▓▓▓░
    0x11, #  ▓▓▓░▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareMiniHighlightSprite = thumby.Sprite(8, 8, squareMiniHighlight)

squareMini = bytearray([
    # BITMAP: width: 8, height: 8, [119,85,119,0,119,85,119,0]
    0x77, #  ▓░░░▓░░░
    0x55, #  ▓░▓░▓░▓░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x55, #  ▓░▓░▓░▓░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareMiniSprite = thumby.Sprite(8, 8, squareMini)

squareMiniOffset = bytearray([
    # BITMAP: width: 8, height: 8, [119,5,119,80,119,5,119,80]
    0x77, #  ▓░░░▓░░░
    0x05, #  ▓▓▓▓▓░▓░
    0x77, #  ▓░░░▓░░░
    0x50, #  ▓░▓░▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x05, #  ▓▓▓▓▓░▓░
    0x77, #  ▓░░░▓░░░
    0x50, #  ▓░▓░▓▓▓▓
])
# squareMiniOffsetSprite = thumby.Sprite(8, 8, squareMiniOffset)

squareMiniSolid = bytearray([
    # BITMAP: width: 8, height: 8, [119,119,119,0,119,119,119,0]
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareMiniSolidSprite = thumby.Sprite(8, 8, squareMiniSolid)

squareMiniSolidOffset = bytearray([
    # BITMAP: width: 8, height: 8, [119,7,119,112,119,7,119,112]
    0x77, #  ▓░░░▓░░░
    0x07, #  ▓▓▓▓▓░░░
    0x77, #  ▓░░░▓░░░
    0x70, #  ▓░░░▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x07, #  ▓▓▓▓▓░░░
    0x77, #  ▓░░░▓░░░
    0x70, #  ▓░░░▓▓▓▓
])
# squareMiniSolidOffsetSprite = thumby.Sprite(8, 8, squareMiniSolidOffset)

billetMiniHighlight = bytearray([
    # BITMAP: width: 8, height: 8, [102,34,34,0,102,34,34,0]
    0x66, #  ▓░░▓▓░░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x22, #  ▓▓░▓▓▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetMiniHighlightSprite = thumby.Sprite(8, 8, billetMiniHighlight)

billetMini = bytearray([
    # BITMAP: width: 8, height: 8, [102,102,102,0,102,102,102,0]
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetMiniSprite = thumby.Sprite(8, 8, billetMini)

billetVerticalMini = bytearray([
    # BITMAP: width: 8, height: 8, [0,119,119,0,0,119,119,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x77, #  ▓░░░▓░░░
    0x77, #  ▓░░░▓░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetVerticalMiniSprite = thumby.Sprite(8, 8, billetVerticalMini)

square = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,60,36,36,60,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareSprite = thumby.Sprite(8, 8, square)

squareSolid = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,60,60,60,60,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareSolidSprite = thumby.Sprite(8, 8, squareSolid)

squareShaded = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,20,40,20,40,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareShadedSprite = thumby.Sprite(8, 8, squareShaded)

squareLarge = bytearray([
    # BITMAP: width: 8, height: 8, [0,126,66,66,66,66,126,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x7E, #  ▓░░░░░░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareLargeSprite = thumby.Sprite(8, 8, squareLarge)

squareLargeMedium = bytearray([
    # BITMAP: width: 8, height: 8, [0,126,126,102,102,126,126,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareLargeMediumSprite = thumby.Sprite(8, 8, squareLargeMedium)

squareLargeSolid = bytearray([
    # BITMAP: width: 8, height: 8, [0,126,126,126,126,126,126,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareLargeSolidSprite = thumby.Sprite(8, 8, squareLargeSolid)

squareLargeShaded = bytearray([
    # BITMAP: width: 8, height: 8, [0,42,84,42,84,42,84,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x2A, #  ▓▓░▓░▓░▓
    0x54, #  ▓░▓░▓░▓▓
    0x2A, #  ▓▓░▓░▓░▓
    0x54, #  ▓░▓░▓░▓▓
    0x2A, #  ▓▓░▓░▓░▓
    0x54, #  ▓░▓░▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareLargeShadedSprite = thumby.Sprite(8, 8, squareLargeShaded)

squareXL = bytearray([
    # BITMAP: width: 8, height: 8, [127,65,65,65,65,65,127,0]
    0x7F, #  ▓░░░░░░░
    0x41, #  ▓░▓▓▓▓▓░
    0x41, #  ▓░▓▓▓▓▓░
    0x41, #  ▓░▓▓▓▓▓░
    0x41, #  ▓░▓▓▓▓▓░
    0x41, #  ▓░▓▓▓▓▓░
    0x7F, #  ▓░░░░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareXLSprite = thumby.Sprite(8, 8, squareXL)

squareXLMedium = bytearray([
    # BITMAP: width: 8, height: 8, [127,127,99,99,99,127,127,0]
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x63, #  ▓░░▓▓▓░░
    0x63, #  ▓░░▓▓▓░░
    0x63, #  ▓░░▓▓▓░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareXLMediumSprite = thumby.Sprite(8, 8, squareXLMedium)

squareXLSolid = bytearray([
    # BITMAP: width: 8, height: 8, [127,127,127,127,127,127,127,0]
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x7F, #  ▓░░░░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareXLSolidSprite = thumby.Sprite(8, 8, squareXLSolid)

squareXLShaded = bytearray([
    # BITMAP: width: 8, height: 8, [85,42,85,42,85,42,85,0]
    0x55, #  ▓░▓░▓░▓░
    0x2A, #  ▓▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x2A, #  ▓▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x2A, #  ▓▓░▓░▓░▓
    0x55, #  ▓░▓░▓░▓░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# squareXLShadedSprite = thumby.Sprite(8, 8, squareXLShaded)

rectangle = bytearray([
    # BITMAP: width: 8, height: 8, [0,60,36,36,36,60,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# rectangleSprite = thumby.Sprite(8, 8, rectangle)

rectangleSolid = bytearray([
    # BITMAP: width: 8, height: 8, [0,60,60,60,60,60,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# rectangleSolidSprite = thumby.Sprite(8, 8, rectangleSolid)

rectangleLarge = bytearray([
    # BITMAP: width: 8, height: 8, [126,66,66,66,66,66,126,0]
    0x7E, #  ▓░░░░░░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# rectangleLargeSprite = thumby.Sprite(8, 8, rectangleLarge)

rectangleLargeMedium = bytearray([
    # BITMAP: width: 8, height: 8, [126,126,102,102,102,126,126,0]
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x66, #  ▓░░▓▓░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# rectangleLargeMediumSprite = thumby.Sprite(8, 8, rectangleLargeMedium)

rectangleLargeSolid = bytearray([
    # BITMAP: width: 8, height: 8, [126,126,126,126,126,126,126,0]
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# rectangleLargeSolidSprite = thumby.Sprite(8, 8, rectangleLargeSolid)

billet = bytearray([
    # BITMAP: width: 8, height: 8, [0,60,36,36,36,36,60,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x24, #  ▓▓░▓▓░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetSprite = thumby.Sprite(8, 8, billet)

billetSolid = bytearray([
    # BITMAP: width: 8, height: 8, [0,60,60,60,60,60,60,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x3C, #  ▓▓░░░░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetSolidSprite = thumby.Sprite(8, 8, billetSolid)

billetShaded = bytearray([
    # BITMAP: width: 8, height: 8, [0,40,20,40,20,40,20,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x28, #  ▓▓░▓░▓▓▓
    0x14, #  ▓▓▓░▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetShadedSprite = thumby.Sprite(8, 8, billetShaded)

billetVertical = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,126,66,66,126,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x7E, #  ▓░░░░░░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x42, #  ▓░▓▓▓▓░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetVerticalSprite = thumby.Sprite(8, 8, billetVertical)

billetVerticalSolid = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,126,126,126,126,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x7E, #  ▓░░░░░░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetVerticalSolidSprite = thumby.Sprite(8, 8, billetVerticalSolid)

billetVerticalShaded = bytearray([
    # BITMAP: width: 8, height: 8, [0,0,84,42,84,42,0,0]
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x54, #  ▓░▓░▓░▓▓
    0x2A, #  ▓▓░▓░▓░▓
    0x54, #  ▓░▓░▓░▓▓
    0x2A, #  ▓▓░▓░▓░▓
    0x00, #  ▓▓▓▓▓▓▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# billetVerticalShadedSprite = thumby.Sprite(8, 8, billetVerticalShaded)

waffle = bytearray([
    # BITMAP: width: 8, height: 8, [255,1,1,121,121,121,121,1]
    0xFF, #  ░░░░░░░░
    0x01, #  ▓▓▓▓▓▓▓░
    0x01, #  ▓▓▓▓▓▓▓░
    0x79, #  ▓░░░░▓▓░
    0x79, #  ▓░░░░▓▓░
    0x79, #  ▓░░░░▓▓░
    0x79, #  ▓░░░░▓▓░
    0x01, #  ▓▓▓▓▓▓▓░
])
# waffleSprite = thumby.Sprite(8, 8, waffle)

tile = bytearray([
    # BITMAP: width: 8, height: 8, [127,65,125,125,125,125,127,0]
    0x7F, #  ▓░░░░░░░
    0x41, #  ▓░▓▓▓▓▓░
    0x7D, #  ▓░░░░░▓░
    0x7D, #  ▓░░░░░▓░
    0x7D, #  ▓░░░░░▓░
    0x7D, #  ▓░░░░░▓░
    0x7F, #  ▓░░░░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# tileSprite = thumby.Sprite(8, 8, tile)

tileShaded = bytearray([
    # BITMAP: width: 8, height: 8, [127,85,107,85,107,85,127,0]
    0x7F, #  ▓░░░░░░░
    0x55, #  ▓░▓░▓░▓░
    0x6B, #  ▓░░▓░▓░░
    0x55, #  ▓░▓░▓░▓░
    0x6B, #  ▓░░▓░▓░░
    0x55, #  ▓░▓░▓░▓░
    0x7F, #  ▓░░░░░░░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# tileShadedSprite = thumby.Sprite(8, 8, tileShaded)

illuminated = bytearray([
    # BITMAP: width: 8, height: 8, [31,63,95,63,95,42,84,0]
    0x1F, #  ▓▓▓░░░░░
    0x3F, #  ▓▓░░░░░░
    0x5F, #  ▓░▓░░░░░
    0x3F, #  ▓▓░░░░░░
    0x5F, #  ▓░▓░░░░░
    0x2A, #  ▓▓░▓░▓░▓
    0x54, #  ▓░▓░▓░▓▓
    0x00, #  ▓▓▓▓▓▓▓▓
])
# illuminatedSprite = thumby.Sprite(8, 8, illuminated)

block = bytearray([
    # BITMAP: width: 8, height: 8, [126,61,3,27,27,3,1,0]
    0x7E, #  ▓░░░░░░▓
    0x3D, #  ▓▓░░░░▓░
    0x03, #  ▓▓▓▓▓▓░░
    0x1B, #  ▓▓▓░░▓░░
    0x1B, #  ▓▓▓░░▓░░
    0x03, #  ▓▓▓▓▓▓░░
    0x01, #  ▓▓▓▓▓▓▓░
    0x00, #  ▓▓▓▓▓▓▓▓
])
# blockSprite = thumby.Sprite(8, 8, block)

blockPyramid = bytearray([
    # BITMAP: width: 8, height: 8, [85,43,23,15,23,35,65,128]
    0x55, #  ▓░▓░▓░▓░
    0x2B, #  ▓▓░▓░▓░░
    0x17, #  ▓▓▓░▓░░░
    0x0F, #  ▓▓▓▓░░░░
    0x17, #  ▓▓▓░▓░░░
    0x23, #  ▓▓░▓▓▓░░
    0x41, #  ▓░▓▓▓▓▓░
    0x80, #  ░▓▓▓▓▓▓▓
])
# blockPyramidSprite = thumby.Sprite(8, 8, blockPyramid)
