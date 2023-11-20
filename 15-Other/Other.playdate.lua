-- Other - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local chain <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 16,40,40,16,16,40,40,16 -- transparent background
    -- 239,215,215,239,239,215,215,239 -- transparent foreground
}
-- playdate.graphics.setPattern(chain)

local chainLarge <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 16,56,84,68,68,84,56,16 -- transparent background
    -- 239,199,171,187,187,171,199,239 -- transparent foreground
}
-- playdate.graphics.setPattern(chainLarge)

local rosette <const> = {
    0xDC, --  ░░▓░░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x81, --  ░▓▓▓▓▓▓░
    0xB3, --  ░▓░░▓▓░░
    0x3B, --  ▓▓░░░▓░░
    0x18, --  ▓▓▓░░▓▓▓
    0x81, --  ░▓▓▓▓▓▓░
    0xCD, --  ░░▓▓░░▓░
    -- 220,24,129,179,59,24,129,205 -- transparent background
    -- 35,231,126,76,196,231,126,50 -- transparent foreground
}
-- playdate.graphics.setPattern(rosette)

local snowflake <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0xD6, --  ░░▓░▓░░▓
    0x6C, --  ▓░░▓░░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x6C, --  ▓░░▓░░▓▓
    0xD6, --  ░░▓░▓░░▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 16,214,108,16,108,214,16,0 -- transparent background
    -- 239,41,147,239,147,41,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(snowflake)

local festive <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x41, --  ▓░▓▓▓▓▓░
    0x36, --  ▓▓░░▓░░▓
    0x14, --  ▓▓▓░▓░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x36, --  ▓▓░░▓░░▓
    0x41, --  ▓░▓▓▓▓▓░
    -- 8,65,54,20,136,20,54,65 -- transparent background
    -- 247,190,201,235,119,235,201,190 -- transparent foreground
}
-- playdate.graphics.setPattern(festive)

local yuletide <const> = {
    0x88, --  ░▓▓▓░▓▓▓
    0x41, --  ▓░▓▓▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    0x14, --  ▓▓▓░▓░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 136,65,34,20,136,0,170,0 -- transparent background
    -- 119,190,221,235,119,255,85,255 -- transparent foreground
}
-- playdate.graphics.setPattern(yuletide)
