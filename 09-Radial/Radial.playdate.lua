-- Radial - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local nebula <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x3A, --  ▓▓░░░▓░▓
    0x5C, --  ▓░▓░░░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,16,8,58,92,16,8,0 -- transparent background
    -- 255,239,247,197,163,239,247,255 -- transparent foreground
}
-- playdate.graphics.setPattern(nebula)

local pinwheel <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x78, --  ▓░░░░▓▓▓
    0x1E, --  ▓▓▓░░░░▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,8,8,120,30,16,16,0 -- transparent background
    -- 255,247,247,135,225,239,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(pinwheel)

local pivot <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0xE4, --  ░░░▓▓░▓▓
    0x27, --  ▓▓░▓▓░░░
    0x18, --  ▓▓▓░░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 8,8,24,228,39,24,16,16 -- transparent background
    -- 247,247,231,27,216,231,239,239 -- transparent foreground
}
-- playdate.graphics.setPattern(pivot)

local fylfot <const> = {
    0x30, --  ▓▓░░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x19, --  ▓▓▓░░▓▓░
    0x27, --  ▓▓░▓▓░░░
    0xE4, --  ░░░▓▓░▓▓
    0x98, --  ░▓▓░░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    -- 48,16,25,39,228,152,8,12 -- transparent background
    -- 207,239,230,216,27,103,247,243 -- transparent foreground
}
-- playdate.graphics.setPattern(fylfot)

local rotary <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x34, --  ▓▓░░▓░▓▓
    0xC4, --  ░░▓▓▓░▓▓
    0x23, --  ▓▓░▓▓▓░░
    0x2C, --  ▓▓░▓░░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 8,8,52,196,35,44,16,16 -- transparent background
    -- 247,247,203,59,220,211,239,239 -- transparent foreground
}
-- playdate.graphics.setPattern(rotary)

local starBurst <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    0xF4, --  ░░░░▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x2F, --  ▓▓░▓░░░░
    0x30, --  ▓▓░░▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    -- 4,12,244,68,34,47,48,32 -- transparent background
    -- 251,243,11,187,221,208,207,223 -- transparent foreground
}
-- playdate.graphics.setPattern(starBurst)

local swirl <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x64, --  ▓░░▓▓░▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x01, --  ▓▓▓▓▓▓▓░
    0x26, --  ▓▓░▓▓░░▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 8,4,100,128,1,38,32,16 -- transparent background
    -- 247,251,155,127,254,217,223,239 -- transparent foreground
}
-- playdate.graphics.setPattern(swirl)

local swarm <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0xA4, --  ░▓░▓▓░▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x25, --  ▓▓░▓▓░▓░
    0x10, --  ▓▓▓░▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    -- 4,8,164,64,2,37,16,32 -- transparent background
    -- 251,247,91,191,253,218,239,223 -- transparent foreground
}
-- playdate.graphics.setPattern(swarm)

local encircled <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x42, --  ▓░▓▓▓▓░▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x01, --  ▓▓▓▓▓▓▓░
    0x42, --  ▓░▓▓▓▓░▓
    0x20, --  ▓▓░▓▓▓▓▓
    -- 4,66,128,24,24,1,66,32 -- transparent background
    -- 251,189,127,231,231,254,189,223 -- transparent foreground
}
-- playdate.graphics.setPattern(encircled)

local spokes <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    0x64, --  ▓░░▓▓░▓▓
    0xD8, --  ░░▓░░▓▓▓
    0x1B, --  ▓▓▓░░▓░░
    0x26, --  ▓▓░▓▓░░▓
    0x30, --  ▓▓░░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 8,12,100,216,27,38,48,16 -- transparent background
    -- 247,243,155,39,228,217,207,239 -- transparent foreground
}
-- playdate.graphics.setPattern(spokes)

local cartwheel <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x2C, --  ▓▓░▓░░▓▓
    0x66, --  ▓░░▓▓░░▓
    0xD8, --  ░░▓░░▓▓▓
    0x1B, --  ▓▓▓░░▓░░
    0x66, --  ▓░░▓▓░░▓
    0x34, --  ▓▓░░▓░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 8,44,102,216,27,102,52,16 -- transparent background
    -- 247,211,153,39,228,153,203,239 -- transparent foreground
}
-- playdate.graphics.setPattern(cartwheel)

local cartwheelBold <const> = {
    0x2C, --  ▓▓░▓░░▓▓
    0x6E, --  ▓░░▓░░░▓
    0xE7, --  ░░░▓▓░░░
    0xD8, --  ░░▓░░▓▓▓
    0x1B, --  ▓▓▓░░▓░░
    0xE7, --  ░░░▓▓░░░
    0x76, --  ▓░░░▓░░▓
    0x34, --  ▓▓░░▓░▓▓
    -- 44,110,231,216,27,231,118,52 -- transparent background
    -- 211,145,24,39,228,24,137,203 -- transparent foreground
}
-- playdate.graphics.setPattern(cartwheelBold)

local cartwheelExtraBold <const> = {
    0x6E, --  ▓░░▓░░░▓
    0xEF, --  ░░░▓░░░░
    0xE7, --  ░░░▓▓░░░
    0xD8, --  ░░▓░░▓▓▓
    0x1B, --  ▓▓▓░░▓░░
    0xE7, --  ░░░▓▓░░░
    0xF7, --  ░░░░▓░░░
    0x76, --  ▓░░░▓░░▓
    -- 110,239,231,216,27,231,247,118 -- transparent background
    -- 145,16,24,39,228,24,8,137 -- transparent foreground
}
-- playdate.graphics.setPattern(cartwheelExtraBold)
