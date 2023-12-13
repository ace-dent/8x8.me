-- Dashes - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local horizontalDenseTrellis <const> = {
    0x33, --  ▓▓░░▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x33, --  ▓▓░░▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 51,0,204,0,51,0,204,0 -- transparent background
    -- 204,255,51,255,204,255,51,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalDenseTrellis)

local horizontalDenseDotDash <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,0,238,0,170,0,238,0 -- transparent background
    -- 85,255,17,255,85,255,17,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalDenseDotDash)

local horizontalDash <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x0F, --  ▓▓▓▓░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,15,0,0,0,240,0 -- transparent background
    -- 255,255,240,255,255,255,15,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalDash)

local horizontalDashMini <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,204,0,0,0,204,0 -- transparent background
    -- 255,255,51,255,255,255,51,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalDashMini)

local verticalDash <const> = {
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 128,128,128,128,8,8,8,8 -- transparent background
    -- 127,127,127,127,247,247,247,247 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalDash)

local dexterDash <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x11, --  ▓▓▓░▓▓▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,34,17,136,68,0,0 -- transparent background
    -- 255,255,221,238,119,187,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterDash)

local dexterSparseDash <const> = {
    0x80, --  ░▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x01, --  ▓▓▓▓▓▓▓░
    -- 128,64,32,0,0,4,2,1 -- transparent background
    -- 127,191,223,255,255,251,253,254 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSparseDash)

local sinisterDash <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,68,136,17,34,0,0 -- transparent background
    -- 255,255,187,119,238,221,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterDash)

local sinisterSparseDash <const> = {
    0x01, --  ▓▓▓▓▓▓▓░
    0x02, --  ▓▓▓▓▓▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    -- 1,2,4,0,0,32,64,128 -- transparent background
    -- 254,253,251,255,255,223,191,127 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSparseDash)

local alternatingDash <const> = {
    0x80, --  ░▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 128,64,32,0,2,4,8,0 -- transparent background
    -- 127,191,223,255,253,251,247,255 -- transparent foreground
}
-- playdate.graphics.setPattern(alternatingDash)

local alternatingDashDouble <const> = {
    0xCC, --  ░░▓▓░░▓▓
    0x60, --  ▓░░▓▓▓▓▓
    0x33, --  ▓▓░░▓▓░░
    0x81, --  ░▓▓▓▓▓▓░
    0xCC, --  ░░▓▓░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x33, --  ▓▓░░▓▓░░
    0x06, --  ▓▓▓▓▓░░▓
    -- 204,96,51,129,204,24,51,6 -- transparent background
    -- 51,159,204,126,51,231,204,249 -- transparent foreground
}
-- playdate.graphics.setPattern(alternatingDashDouble)

local alternatingDashMini <const> = {
    0x88, --  ░▓▓▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    -- 136,68,17,34,136,68,17,34 -- transparent background
    -- 119,187,238,221,119,187,238,221 -- transparent foreground
}
-- playdate.graphics.setPattern(alternatingDashMini)
