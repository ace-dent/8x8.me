-- SPDX-License-Identifier: CC0-1.0

-- Dots - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local pixel <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,8,0,0,0,0 -- transparent background
    -- 255,255,255,247,255,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(pixel)

local pixelMini <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,34,0,0,0,34,0,0 -- transparent background
    -- 255,221,255,255,255,221,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(pixelMini)

local glisten <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 4,16,128,0,2,16,64,0 -- transparent background
    -- 251,239,127,255,253,239,191,255 -- transparent foreground
}
-- playdate.graphics.setPattern(glisten)

local fairyRing <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 4,32,2,0,64,4,32,0 -- transparent background
    -- 251,223,253,255,191,251,223,255 -- transparent foreground
}
-- playdate.graphics.setPattern(fairyRing)

local noise <const> = {
    0x40, --  ▓░▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x90, --  ░▓▓░▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 64,4,0,144,2,0,16,0 -- transparent background
    -- 191,251,255,111,253,255,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(noise)

local confetti <const> = {
    0x20, --  ▓▓░▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x01, --  ▓▓▓▓▓▓▓░
    0x08, --  ▓▓▓▓░▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    -- 32,4,128,16,1,8,64,2 -- transparent background
    -- 223,251,127,239,254,247,191,253 -- transparent foreground
}
-- playdate.graphics.setPattern(confetti)

local static <const> = {
    0x21, --  ▓▓░▓▓▓▓░
    0x08, --  ▓▓▓▓░▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x50, --  ▓░▓░▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x82, --  ░▓▓▓▓▓░▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 33,8,64,5,80,8,130,8 -- transparent background
    -- 222,247,191,250,175,247,125,247 -- transparent foreground
}
-- playdate.graphics.setPattern(static)

local diamondSpeckled <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x0A, --  ▓▓▓▓░▓░▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x50, --  ▓░▓░▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 8,32,10,160,5,80,4,16 -- transparent background
    -- 247,223,245,95,250,175,251,239 -- transparent foreground
}
-- playdate.graphics.setPattern(diamondSpeckled)

local confettiLarge <const> = {
    0x30, --  ▓▓░░▓▓▓▓
    0x36, --  ▓▓░░▓░░▓
    0xC6, --  ░░▓▓▓░░▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    0x6C, --  ▓░░▓░░▓▓
    0x63, --  ▓░░▓▓▓░░
    0x03, --  ▓▓▓▓▓▓░░
    -- 48,54,198,192,12,108,99,3 -- transparent background
    -- 207,201,57,63,243,147,156,252 -- transparent foreground
}
-- playdate.graphics.setPattern(confettiLarge)
