-- Round - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local annuletSmall <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,16,40,16,0,0,0 -- transparent background
    -- 255,255,239,215,239,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletSmall)

local annuletSmallDuo <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x0A, --  ▓▓▓▓░▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 4,10,4,0,64,160,64,0 -- transparent background
    -- 251,245,251,255,191,95,191,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletSmallDuo)

local annuletSmallQuad <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 68,170,68,0,68,170,68,0 -- transparent background
    -- 187,85,187,255,187,85,187,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletSmallQuad)

local roundelSmallDuo <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x0E, --  ▓▓▓▓░░░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0xE0, --  ░░░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 4,14,4,0,64,224,64,0 -- transparent background
    -- 251,241,251,255,191,31,191,255 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelSmallDuo)

local roundelSmall <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,16,56,16,0,0,0 -- transparent background
    -- 255,255,239,199,239,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelSmall)

local annulet <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,24,36,36,24,0,0 -- transparent background
    -- 255,255,231,219,219,231,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annulet)

local annuletCoAnnulet <const> = {
    0x42, --  ▓░▓▓▓▓░▓
    0x81, --  ░▓▓▓▓▓▓░
    0x18, --  ▓▓▓░░▓▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x81, --  ░▓▓▓▓▓▓░
    0x42, --  ▓░▓▓▓▓░▓
    -- 66,129,24,36,36,24,129,66 -- transparent background
    -- 189,126,231,219,219,231,126,189 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletCoAnnulet)

local annuletCoAnnuletSquare <const> = {
    0x5A, --  ▓░▓░░▓░▓
    0x81, --  ░▓▓▓▓▓▓░
    0x18, --  ▓▓▓░░▓▓▓
    0xA5, --  ░▓░▓▓░▓░
    0xA5, --  ░▓░▓▓░▓░
    0x18, --  ▓▓▓░░▓▓▓
    0x81, --  ░▓▓▓▓▓▓░
    0x5A, --  ▓░▓░░▓░▓
    -- 90,129,24,165,165,24,129,90 -- transparent background
    -- 165,126,231,90,90,231,126,165 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletCoAnnuletSquare)

local annuletCoAnnuletXL <const> = {
    0x24, --  ▓▓░▓▓░▓▓
    0x42, --  ▓░▓▓▓▓░▓
    0x99, --  ░▓▓░░▓▓░
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x99, --  ░▓▓░░▓▓░
    0x42, --  ▓░▓▓▓▓░▓
    0x24, --  ▓▓░▓▓░▓▓
    -- 36,66,153,36,36,153,66,36 -- transparent background
    -- 219,189,102,219,219,102,189,219 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletCoAnnuletXL)

local roundelCoAnnuletXL <const> = {
    0x24, --  ▓▓░▓▓░▓▓
    0x42, --  ▓░▓▓▓▓░▓
    0x99, --  ░▓▓░░▓▓░
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x99, --  ░▓▓░░▓▓░
    0x42, --  ▓░▓▓▓▓░▓
    0x24, --  ▓▓░▓▓░▓▓
    -- 36,66,153,60,60,153,66,36 -- transparent background
    -- 219,189,102,195,195,102,189,219 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelCoAnnuletXL)

local roundelCoAnnulet <const> = {
    0x42, --  ▓░▓▓▓▓░▓
    0x81, --  ░▓▓▓▓▓▓░
    0x18, --  ▓▓▓░░▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x81, --  ░▓▓▓▓▓▓░
    0x42, --  ▓░▓▓▓▓░▓
    -- 66,129,24,60,60,24,129,66 -- transparent background
    -- 189,126,231,195,195,231,126,189 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelCoAnnulet)

local roundelCoRoundel <const> = {
    0xC3, --  ░░▓▓▓▓░░
    0x81, --  ░▓▓▓▓▓▓░
    0x18, --  ▓▓▓░░▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x81, --  ░▓▓▓▓▓▓░
    0xC3, --  ░░▓▓▓▓░░
    -- 195,129,24,60,60,24,129,195 -- transparent background
    -- 60,126,231,195,195,231,126,60 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelCoRoundel)

local roundel <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,24,60,60,24,0,0 -- transparent background
    -- 255,255,231,195,195,231,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(roundel)

local ball <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x2C, --  ▓▓░▓░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,24,44,60,24,0,0 -- transparent background
    -- 255,255,231,211,195,231,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(ball)

local annuletLarge <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,56,68,68,68,56,0,0 -- transparent background
    -- 255,199,187,187,187,199,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletLarge)

local annuletLargeMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,56,108,68,108,56,0,0 -- transparent background
    -- 255,199,147,187,147,199,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletLargeMedium)

local annuletLargeBold <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,56,124,108,124,56,0,0 -- transparent background
    -- 255,199,131,147,131,199,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletLargeBold)

local roundelLarge <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,56,124,124,124,56,0,0 -- transparent background
    -- 255,199,131,131,131,199,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelLarge)

local ballLarge <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x5C, --  ▓░▓░░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,56,108,92,124,56,0,0 -- transparent background
    -- 255,199,147,163,131,199,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(ballLarge)

local spheres <const> = {
    0xC7, --  ░░▓▓▓░░░
    0xBB, --  ░▓░░░▓░░
    0x4C, --  ▓░▓▓░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0xBB, --  ░▓░░░▓░░
    0xC4, --  ░░▓▓▓░▓▓
    0xC7, --  ░░▓▓▓░░░
    -- 199,187,76,124,124,187,196,199 -- transparent background
    -- 56,68,179,131,131,68,59,56 -- transparent foreground
}
-- playdate.graphics.setPattern(spheres)

local annuletXXL <const> = {
    0x38, --  ▓▓░░░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 56,68,130,130,130,68,56,0 -- transparent background
    -- 199,187,125,125,125,187,199,255 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletXXL)

local bubble <const> = {
    0x38, --  ▓▓░░░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x92, --  ░▓▓░▓▓░▓
    0xA2, --  ░▓░▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 56,68,146,162,130,68,56,0 -- transparent background
    -- 199,187,109,93,125,187,199,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bubble)

local roundelXXL <const> = {
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 56,124,254,254,254,124,56,0 -- transparent background
    -- 199,131,1,1,1,131,199,255 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelXXL)

local ballXXL <const> = {
    0x38, --  ▓▓░░░▓▓▓
    0x4C, --  ▓░▓▓░░▓▓
    0x9E, --  ░▓▓░░░░▓
    0xBE, --  ░▓░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 56,76,158,190,254,124,56,0 -- transparent background
    -- 199,179,97,65,1,131,199,255 -- transparent foreground
}
-- playdate.graphics.setPattern(ballXXL)

local annuletXXXL <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0x42, --  ▓░▓▓▓▓░▓
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    0x42, --  ▓░▓▓▓▓░▓
    0x3C, --  ▓▓░░░░▓▓
    -- 60,66,129,129,129,129,66,60 -- transparent background
    -- 195,189,126,126,126,126,189,195 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletXXXL)

local annuletXXXLMedium <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0x66, --  ▓░░▓▓░░▓
    0xC3, --  ░░▓▓▓▓░░
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    0xC3, --  ░░▓▓▓▓░░
    0x66, --  ▓░░▓▓░░▓
    0x3C, --  ▓▓░░░░▓▓
    -- 60,102,195,129,129,195,102,60 -- transparent background
    -- 195,153,60,126,126,60,153,195 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletXXXLMedium)

local annuletXXXLBold <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0x7E, --  ▓░░░░░░▓
    0xE7, --  ░░░▓▓░░░
    0xC3, --  ░░▓▓▓▓░░
    0xC3, --  ░░▓▓▓▓░░
    0xE7, --  ░░░▓▓░░░
    0x7E, --  ▓░░░░░░▓
    0x3C, --  ▓▓░░░░▓▓
    -- 60,126,231,195,195,231,126,60 -- transparent background
    -- 195,129,24,60,60,24,129,195 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletXXXLBold)

local annuletXXXLExtraBold <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0x7E, --  ▓░░░░░░▓
    0xFF, --  ░░░░░░░░
    0xE7, --  ░░░▓▓░░░
    0xE7, --  ░░░▓▓░░░
    0xFF, --  ░░░░░░░░
    0x7E, --  ▓░░░░░░▓
    0x3C, --  ▓▓░░░░▓▓
    -- 60,126,255,231,231,255,126,60 -- transparent background
    -- 195,129,0,24,24,0,129,195 -- transparent foreground
}
-- playdate.graphics.setPattern(annuletXXXLExtraBold)

local roundelXXXL <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0x7E, --  ▓░░░░░░▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x7E, --  ▓░░░░░░▓
    0x3C, --  ▓▓░░░░▓▓
    -- 60,126,255,255,255,255,126,60 -- transparent background
    -- 195,129,0,0,0,0,129,195 -- transparent foreground
}
-- playdate.graphics.setPattern(roundelXXXL)

local truchetDexter <const> = {
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    0xC7, --  ░░▓▓▓░░░
    0xE3, --  ░░░▓▓▓░░
    0x30, --  ▓▓░░▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    -- 24,24,12,199,227,48,24,24 -- transparent background
    -- 231,231,243,56,28,207,231,231 -- transparent foreground
}
-- playdate.graphics.setPattern(truchetDexter)

local truchetSinister <const> = {
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0xE3, --  ░░░▓▓▓░░
    0xC7, --  ░░▓▓▓░░░
    0x0C, --  ▓▓▓▓░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    -- 24,24,48,227,199,12,24,24 -- transparent background
    -- 231,231,207,28,56,243,231,231 -- transparent foreground
}
-- playdate.graphics.setPattern(truchetSinister)
