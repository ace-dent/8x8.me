-- Architecture - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local brickDense <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    -- 0,127,0,247,0,127,0,247 -- transparent background
    -- 255,128,255,8,255,128,255,8 -- transparent foreground
}
-- playdate.graphics.setPattern(brickDense)

local brickNarrow <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xDF, --  ░░▓░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0xF7, --  ░░░░▓░░░
    -- 0,127,127,0,223,0,247,247 -- transparent background
    -- 255,128,128,255,32,255,8,8 -- transparent foreground
}
-- playdate.graphics.setPattern(brickNarrow)

local brickWide <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0xF7, --  ░░░░▓░░░
    0xF7, --  ░░░░▓░░░
    0xF7, --  ░░░░▓░░░
    -- 0,127,127,0,247,247,247,247 -- transparent background
    -- 255,128,128,255,8,8,8,8 -- transparent foreground
}
-- playdate.graphics.setPattern(brickWide)

local brick <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0xF7, --  ░░░░▓░░░
    0xF7, --  ░░░░▓░░░
    -- 0,127,127,127,0,247,247,247 -- transparent background
    -- 255,128,128,128,255,8,8,8 -- transparent foreground
}
-- playdate.graphics.setPattern(brick)

local brickAged <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x80, --  ░▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0xF7, --  ░░░░▓░░░
    0xE7, --  ░░░▓▓░░░
    -- 0,126,127,127,128,247,247,231 -- transparent background
    -- 255,129,128,128,127,8,8,24 -- transparent foreground
}
-- playdate.graphics.setPattern(brickAged)

local brickPointed <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x3E, --  ▓▓░░░░░▓
    0x7F, --  ▓░░░░░░░
    0x3E, --  ▓▓░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xE3, --  ░░░▓▓▓░░
    0xF7, --  ░░░░▓░░░
    0xE3, --  ░░░▓▓▓░░
    -- 0,62,127,62,0,227,247,227 -- transparent background
    -- 255,193,128,193,255,28,8,28 -- transparent foreground
}
-- playdate.graphics.setPattern(brickPointed)

local brickShaded <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x55, --  ▓░▓░▓░▓░
    0x6A, --  ▓░░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0x55, --  ▓░▓░▓░▓░
    0xA6, --  ░▓░▓▓░░▓
    -- 0,127,85,106,0,247,85,166 -- transparent background
    -- 255,128,170,149,255,8,170,89 -- transparent foreground
}
-- playdate.graphics.setPattern(brickShaded)

local brickRelief <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x7E, --  ▓░░░░░░▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0xE7, --  ░░░▓▓░░░
    0x04, --  ▓▓▓▓▓░▓▓
    -- 0,127,126,64,0,247,231,4 -- transparent background
    -- 255,128,129,191,255,8,24,251 -- transparent foreground
}
-- playdate.graphics.setPattern(brickRelief)

local brickSparse <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xE7, --  ░░░▓▓░░░
    0xE7, --  ░░░▓▓░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,126,126,0,0,231,231,0 -- transparent background
    -- 255,129,129,255,255,24,24,255 -- transparent foreground
}
-- playdate.graphics.setPattern(brickSparse)

local brickSparseShaded <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x54, --  ▓░▓░▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xE7, --  ░░░▓▓░░░
    0x45, --  ▓░▓▓▓░▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,126,84,0,0,231,69,0 -- transparent background
    -- 255,129,171,255,255,24,186,255 -- transparent foreground
}
-- playdate.graphics.setPattern(brickSparseShaded)

local brickHighlights <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x40, --  ▓░▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF7, --  ░░░░▓░░░
    0x04, --  ▓▓▓▓▓░▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    -- 0,127,64,64,0,247,4,4 -- transparent background
    -- 255,128,191,191,255,8,251,251 -- transparent foreground
}
-- playdate.graphics.setPattern(brickHighlights)

local mortar <const> = {
    0xDD, --  ░░▓░░░▓░
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0xDD, --  ░░▓░░░▓░
    0x08, --  ▓▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 221,128,0,128,221,8,0,8 -- transparent background
    -- 34,127,255,127,34,247,255,247 -- transparent foreground
}
-- playdate.graphics.setPattern(mortar)

local mortarLight <const> = {
    0x55, --  ▓░▓░▓░▓░
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x55, --  ▓░▓░▓░▓░
    0x08, --  ▓▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 85,128,0,128,85,8,0,8 -- transparent background
    -- 170,127,255,127,170,247,255,247 -- transparent foreground
}
-- playdate.graphics.setPattern(mortarLight)

local mortarAged <const> = {
    0x23, --  ▓▓░▓▓▓░░
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x65, --  ▓░░▓▓░▓░
    0x08, --  ▓▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 35,128,0,128,101,8,0,8 -- transparent background
    -- 220,127,255,127,154,247,255,247 -- transparent foreground
}
-- playdate.graphics.setPattern(mortarAged)

local brickVertical <const> = {
    0x07, --  ▓▓▓▓▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x70, --  ▓░░░▓▓▓▓
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    -- 7,119,119,119,112,119,119,119 -- transparent background
    -- 248,136,136,136,143,136,136,136 -- transparent foreground
}
-- playdate.graphics.setPattern(brickVertical)

local brickSinister <const> = {
    0xF7, --  ░░░░▓░░░
    0xEF, --  ░░░▓░░░░
    0xDF, --  ░░▓░░░░░
    0xBF, --  ░▓░░░░░░
    0x5F, --  ▓░▓░░░░░
    0xEE, --  ░░░▓░░░▓
    0xF5, --  ░░░░▓░▓░
    0xFB, --  ░░░░░▓░░
    -- 247,239,223,191,95,238,245,251 -- transparent background
    -- 8,16,32,64,160,17,10,4 -- transparent foreground
}
-- playdate.graphics.setPattern(brickSinister)

local brickSinisterRounded <const> = {
    0xF7, --  ░░░░▓░░░
    0xEF, --  ░░░▓░░░░
    0xDF, --  ░░▓░░░░░
    0xBF, --  ░▓░░░░░░
    0x1F, --  ▓▓▓░░░░░
    0xEE, --  ░░░▓░░░▓
    0xF1, --  ░░░░▓▓▓░
    0xFB, --  ░░░░░▓░░
    -- 247,239,223,191,31,238,241,251 -- transparent background
    -- 8,16,32,64,224,17,14,4 -- transparent foreground
}
-- playdate.graphics.setPattern(brickSinisterRounded)

local brickSinisterMini <const> = {
    0x55, --  ▓░▓░▓░▓░
    0xBB, --  ░▓░░░▓░░
    0x77, --  ▓░░░▓░░░
    0xEE, --  ░░░▓░░░▓
    0x55, --  ▓░▓░▓░▓░
    0xBB, --  ░▓░░░▓░░
    0x77, --  ▓░░░▓░░░
    0xEE, --  ░░░▓░░░▓
    -- 85,187,119,238,85,187,119,238 -- transparent background
    -- 170,68,136,17,170,68,136,17 -- transparent foreground
}
-- playdate.graphics.setPattern(brickSinisterMini)

local brickMini <const> = {
    0xBB, --  ░▓░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xBB, --  ░▓░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 187,0,238,0,187,0,238,0 -- transparent background
    -- 68,255,17,255,68,255,17,255 -- transparent foreground
}
-- playdate.graphics.setPattern(brickMini)

local brickMiniDamage <const> = {
    0xB9, --  ░▓░░░▓▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xE2, --  ░░░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xBB, --  ░▓░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 185,0,226,0,187,0,238,0 -- transparent background
    -- 70,255,29,255,68,255,17,255 -- transparent foreground
}
-- playdate.graphics.setPattern(brickMiniDamage)

local brickMiniRuins <const> = {
    0xB9, --  ░▓░░░▓▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x1B, --  ▓▓▓░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x0E, --  ▓▓▓▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 185,0,64,0,27,0,14,0 -- transparent background
    -- 70,255,191,255,228,255,241,255 -- transparent foreground
}
-- playdate.graphics.setPattern(brickMiniRuins)

local stoneWall <const> = {
    0x70, --  ▓░░░▓▓▓▓
    0x67, --  ▓░░▓▓░░░
    0x0F, --  ▓▓▓▓░░░░
    0x66, --  ▓░░▓▓░░▓
    0xF0, --  ░░░░▓▓▓▓
    0xFA, --  ░░░░░▓░▓
    0x73, --  ▓░░░▓▓░░
    0x07, --  ▓▓▓▓▓░░░
    -- 112,103,15,102,240,250,115,7 -- transparent background
    -- 143,152,240,153,15,5,140,248 -- transparent foreground
}
-- playdate.graphics.setPattern(stoneWall)

local quarryWall <const> = {
    0xC1, --  ░░▓▓▓▓▓░
    0x1E, --  ▓▓▓░░░░▓
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x3E, --  ▓▓░░░░░▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xEF, --  ░░░▓░░░░
    0xF7, --  ░░░░▓░░░
    -- 193,30,127,127,62,192,239,247 -- transparent background
    -- 62,225,128,128,193,63,16,8 -- transparent foreground
}
-- playdate.graphics.setPattern(quarryWall)

local stoneBlock <const> = {
    0x01, --  ▓▓▓▓▓▓▓░
    0xAE, --  ░▓░▓░░░▓
    0x5F, --  ▓░▓░░░░░
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x7E, --  ▓░░░░░░▓
    0x7D, --  ▓░░░░░▓░
    0x2A, --  ▓▓░▓░▓░▓
    -- 1,174,95,127,127,126,125,42 -- transparent background
    -- 254,81,160,128,128,129,130,213 -- transparent foreground
}
-- playdate.graphics.setPattern(stoneBlock)

local flagstone <const> = {
    0xDE, --  ░░▓░░░░▓
    0xDE, --  ░░▓░░░░▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x16, --  ▓▓▓░▓░░▓
    0xF6, --  ░░░░▓░░▓
    0xF6, --  ░░░░▓░░▓
    0xE0, --  ░░░▓▓▓▓▓
    0x0E, --  ▓▓▓▓░░░▓
    -- 222,222,192,22,246,246,224,14 -- transparent background
    -- 33,33,63,233,9,9,31,241 -- transparent foreground
}
-- playdate.graphics.setPattern(flagstone)

local pavingStones <const> = {
    0x6E, --  ▓░░▓░░░▓
    0x9D, --  ░▓▓░░░▓░
    0xD9, --  ░░▓░░▓▓░
    0xE6, --  ░░░▓▓░░▓
    0x67, --  ▓░░▓▓░░░
    0x9B, --  ░▓▓░░▓░░
    0xB9, --  ░▓░░░▓▓░
    0x76, --  ▓░░░▓░░▓
    -- 110,157,217,230,103,155,185,118 -- transparent background
    -- 145,98,38,25,152,100,70,137 -- transparent foreground
}
-- playdate.graphics.setPattern(pavingStones)

local shingle <const> = {
    0xFC, --  ░░░░░░▓▓
    0x7B, --  ▓░░░░▓░░
    0xB7, --  ░▓░░▓░░░
    0xCF, --  ░░▓▓░░░░
    0xF3, --  ░░░░▓▓░░
    0xFD, --  ░░░░░░▓░
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    -- 252,123,183,207,243,253,254,254 -- transparent background
    -- 3,132,72,48,12,2,1,1 -- transparent foreground
}
-- playdate.graphics.setPattern(shingle)

local roofTiles <const> = {
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEF, --  ░░░▓░░░░
    0xEF, --  ░░░▓░░░░
    0xC7, --  ░░▓▓▓░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 254,254,124,0,239,239,199,0 -- transparent background
    -- 1,1,131,255,16,16,56,255 -- transparent foreground
}
-- playdate.graphics.setPattern(roofTiles)

local archway <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0xE7, --  ░░░▓▓░░░
    0xC3, --  ░░▓▓▓▓░░
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    0x81, --  ░▓▓▓▓▓▓░
    -- 60,231,195,129,129,129,129,129 -- transparent background
    -- 195,24,60,126,126,126,126,126 -- transparent foreground
}
-- playdate.graphics.setPattern(archway)

local window <const> = {
    0x81, --  ░▓▓▓▓▓▓░
    0x3C, --  ▓▓░░░░▓▓
    0x42, --  ▓░▓▓▓▓░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x7E, --  ▓░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 129,60,66,66,66,66,126,0 -- transparent background
    -- 126,195,189,189,189,189,129,255 -- transparent foreground
}
-- playdate.graphics.setPattern(window)

local planks <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7F, --  ▓░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFB, --  ░░░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xDF, --  ░░▓░░░░░
    -- 0,127,0,251,0,254,0,223 -- transparent background
    -- 255,128,255,4,255,1,255,32 -- transparent foreground
}
-- playdate.graphics.setPattern(planks)

local picket <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x66, --  ▓░░▓▓░░▓
    0xFF, --  ░░░░░░░░
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0xFF, --  ░░░░░░░░
    0x66, --  ▓░░▓▓░░▓
    -- 0,68,102,255,102,102,255,102 -- transparent background
    -- 255,187,153,0,153,153,0,153 -- transparent foreground
}
-- playdate.graphics.setPattern(picket)

local house <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0xBA, --  ░▓░░░▓░▓
    0x7C, --  ▓░░░░░▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 16,40,84,186,124,108,108,0 -- transparent background
    -- 239,215,171,69,131,147,147,255 -- transparent foreground
}
-- playdate.graphics.setPattern(house)

local houseMini <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 68,238,238,0,68,238,238,0 -- transparent background
    -- 187,17,17,255,187,17,17,255 -- transparent foreground
}
-- playdate.graphics.setPattern(houseMini)
