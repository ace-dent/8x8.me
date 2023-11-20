-- Symbols - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local love <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x55, --  ▓░▓░▓░▓░
    0x82, --  ░▓▓▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x55, --  ▓░▓░▓░▓░
    0x82, --  ░▓▓▓▓▓░▓
    -- 68,40,85,130,68,40,85,130 -- transparent background
    -- 187,215,170,125,187,215,170,125 -- transparent foreground
}
-- playdate.graphics.setPattern(love)

local heart <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x92, --  ░▓▓░▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,108,146,130,68,40,16,0 -- transparent background
    -- 255,147,109,125,187,215,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(heart)

local heartSolid <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x6C, --  ▓░░▓░░▓▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,108,254,254,124,56,16,0 -- transparent background
    -- 255,147,1,1,131,199,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(heartSolid)

local heartMini <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,238,68,0,170,238,68,0 -- transparent background
    -- 85,17,187,255,85,17,187,255 -- transparent foreground
}
-- playdate.graphics.setPattern(heartMini)

local quaver <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    0x0A, --  ▓▓▓▓░▓░▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x78, --  ▓░░░░▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 8,12,10,8,56,120,48,0 -- transparent background
    -- 247,243,245,247,199,135,207,255 -- transparent foreground
}
-- playdate.graphics.setPattern(quaver)

local quaverMini <const> = {
    0x66, --  ▓░░▓▓░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x66, --  ▓░░▓▓░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 102,68,204,0,102,68,204,0 -- transparent background
    -- 153,187,51,255,153,187,51,255 -- transparent foreground
}
-- playdate.graphics.setPattern(quaverMini)

local anchor <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x92, --  ░▓▓░▓▓░▓
    0x7C, --  ▓░░░░░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 0,16,40,16,16,146,124,16 -- transparent background
    -- 255,239,215,239,239,109,131,239 -- transparent foreground
}
-- playdate.graphics.setPattern(anchor)

local crossbones <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0xC6, --  ░░▓▓▓░░▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0xC6, --  ░░▓▓▓░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 68,198,40,16,40,198,68,0 -- transparent background
    -- 187,57,215,239,215,57,187,255 -- transparent foreground
}
-- playdate.graphics.setPattern(crossbones)

local octothorp <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x7E, --  ▓░░░░░░▓
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x7E, --  ▓░░░░░░▓
    0x24, --  ▓▓░▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,36,126,36,36,126,36,0 -- transparent background
    -- 255,219,129,219,219,129,219,255 -- transparent foreground
}
-- playdate.graphics.setPattern(octothorp)

local cross <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,24,24,126,126,24,24,0 -- transparent background
    -- 255,231,231,129,129,231,231,255 -- transparent foreground
}
-- playdate.graphics.setPattern(cross)

local crossMini <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 68,238,68,0,68,238,68,0 -- transparent background
    -- 187,17,187,255,187,17,187,255 -- transparent foreground
}
-- playdate.graphics.setPattern(crossMini)

local atto <const> = {
    0x38, --  ▓▓░░░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x9A, --  ░▓▓░░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xB4, --  ░▓░░▓░▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 56,68,154,170,180,64,48,0 -- transparent background
    -- 199,187,101,85,75,191,207,255 -- transparent foreground
}
-- playdate.graphics.setPattern(atto)

local amongi <const> = {
    0x70, --  ▓░░░▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x07, --  ▓▓▓▓▓░░░
    0x0C, --  ▓▓▓▓░░▓▓
    0x0F, --  ▓▓▓▓░░░░
    0x05, --  ▓▓▓▓▓░▓░
    -- 112,192,240,80,7,12,15,5 -- transparent background
    -- 143,63,15,175,248,243,240,250 -- transparent foreground
}
-- playdate.graphics.setPattern(amongi)

local invadingBug <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xD6, --  ░░▓░▓░░▓
    0x7C, --  ▓░░░░░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 68,40,124,214,124,170,130,0 -- transparent background
    -- 187,215,131,41,131,85,125,255 -- transparent foreground
}
-- playdate.graphics.setPattern(invadingBug)

local invadingCrab <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xFE, --  ░░░░░░░▓
    0x54, --  ▓░▓░▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 16,124,254,84,170,130,68,0 -- transparent background
    -- 239,131,1,171,85,125,187,255 -- transparent foreground
}
-- playdate.graphics.setPattern(invadingCrab)

local invadingSquid <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xD6, --  ░░▓░▓░░▓
    0x7C, --  ▓░░░░░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 16,56,124,214,124,40,68,0 -- transparent background
    -- 239,199,131,41,131,215,187,255 -- transparent foreground
}
-- playdate.graphics.setPattern(invadingSquid)
