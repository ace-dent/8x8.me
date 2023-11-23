-- Waves - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local rippleLight <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x82, --  ░▓▓▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,80,5,0,0,40,130,0 -- transparent background
    -- 255,175,250,255,255,215,125,255 -- transparent foreground
}
-- playdate.graphics.setPattern(rippleLight)

local ripple <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x78, --  ▓░░░░▓▓▓
    0x87, --  ░▓▓▓▓░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0xC3, --  ░░▓▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,120,135,0,0,60,195,0 -- transparent background
    -- 255,135,120,255,255,195,60,255 -- transparent foreground
}
-- playdate.graphics.setPattern(ripple)

local wave <const> = {
    0x30, --  ▓▓░░▓▓▓▓
    0x4A, --  ▓░▓▓░▓░▓
    0x81, --  ░▓▓▓▓▓▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x4A, --  ▓░▓▓░▓░▓
    0x81, --  ░▓▓▓▓▓▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 48,74,129,0,48,74,129,0 -- transparent background
    -- 207,181,126,255,207,181,126,255 -- transparent foreground
}
-- playdate.graphics.setPattern(wave)

local tidalLight <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x83, --  ░▓▓▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,0,16,68,131,0 -- transparent background
    -- 255,255,255,255,239,187,124,255 -- transparent foreground
}
-- playdate.graphics.setPattern(tidalLight)

local tidal <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x83, --  ░▓▓▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,0,56,68,131,0 -- transparent background
    -- 255,255,255,255,199,187,124,255 -- transparent foreground
}
-- playdate.graphics.setPattern(tidal)

local tidalMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xC7, --  ░░▓▓▓░░░
    0x83, --  ░▓▓▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,56,124,199,131,0 -- transparent background
    -- 255,255,255,199,131,56,124,255 -- transparent foreground
}
-- playdate.graphics.setPattern(tidalMedium)

local oceanicLight <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x41, --  ▓░▓▓▓▓▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,32,16,36,65,0 -- transparent background
    -- 255,255,255,223,239,219,190,255 -- transparent foreground
}
-- playdate.graphics.setPattern(oceanicLight)

local oceanic <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x60, --  ▓░░▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x6C, --  ▓░░▓░░▓▓
    0xC3, --  ░░▓▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,96,48,108,195,0 -- transparent background
    -- 255,255,255,159,207,147,60,255 -- transparent foreground
}
-- playdate.graphics.setPattern(oceanic)

local zigzagMini <const> = {
    0x22, --  ▓▓░▓▓▓░▓
    0x55, --  ▓░▓░▓░▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x55, --  ▓░▓░▓░▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 34,85,136,0,34,85,136,0 -- transparent background
    -- 221,170,119,255,221,170,119,255 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagMini)

local zigzagMiniMedium <const> = {
    0x22, --  ▓▓░▓▓▓░▓
    0x77, --  ▓░░░▓░░░
    0xDD, --  ░░▓░░░▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x77, --  ▓░░░▓░░░
    0xDD, --  ░░▓░░░▓░
    0x88, --  ░▓▓▓░▓▓▓
    -- 34,119,221,136,34,119,221,136 -- transparent background
    -- 221,136,34,119,221,136,34,119 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagMiniMedium)

local zigzag <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x02, --  ▓▓▓▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,32,80,136,5,2,0 -- transparent background
    -- 255,255,223,175,119,250,253,255 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzag)

local zigzagMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x70, --  ▓░░░▓▓▓▓
    0xD8, --  ░░▓░░▓▓▓
    0x8D, --  ░▓▓▓░░▓░
    0x07, --  ▓▓▓▓▓░░░
    0x02, --  ▓▓▓▓▓▓░▓
    -- 0,0,32,112,216,141,7,2 -- transparent background
    -- 255,255,223,143,39,114,248,253 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagMedium)

local zigzagBold <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x70, --  ▓░░░▓▓▓▓
    0xF8, --  ░░░░░▓▓▓
    0xDD, --  ░░▓░░░▓░
    0x8F, --  ░▓▓▓░░░░
    0x07, --  ▓▓▓▓▓░░░
    0x02, --  ▓▓▓▓▓▓░▓
    -- 0,32,112,248,221,143,7,2 -- transparent background
    -- 255,223,143,7,34,112,248,253 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagBold)

local zigzagBoldShaded <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0xA8, --  ░▓░▓░▓▓▓
    0x55, --  ▓░▓░▓░▓░
    0x8A, --  ░▓▓▓░▓░▓
    0x05, --  ▓▓▓▓▓░▓░
    0x02, --  ▓▓▓▓▓▓░▓
    -- 0,32,80,168,85,138,5,2 -- transparent background
    -- 255,223,175,87,170,117,250,253 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagBoldShaded)

local zigzagExtraBold <const> = {
    0x20, --  ▓▓░▓▓▓▓▓
    0x70, --  ▓░░░▓▓▓▓
    0xF8, --  ░░░░░▓▓▓
    0xFD, --  ░░░░░░▓░
    0xDF, --  ░░▓░░░░░
    0x8F, --  ░▓▓▓░░░░
    0x07, --  ▓▓▓▓▓░░░
    0x02, --  ▓▓▓▓▓▓░▓
    -- 32,112,248,253,223,143,7,2 -- transparent background
    -- 223,143,7,2,32,112,248,253 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagExtraBold)

local zigzagPinstripe <const> = {
    0x20, --  ▓▓░▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x25, --  ▓▓░▓▓░▓░
    0x52, --  ▓░▓░▓▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x02, --  ▓▓▓▓▓▓░▓
    -- 32,80,136,37,82,136,5,2 -- transparent background
    -- 223,175,119,218,173,119,250,253 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagPinstripe)

local zigzagSteep <const> = {
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x50, --  ▓░▓░▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x05, --  ▓▓▓▓▓░▓░
    -- 34,34,80,80,136,136,5,5 -- transparent background
    -- 221,221,175,175,119,119,250,250 -- transparent foreground
}
-- playdate.graphics.setPattern(zigzagSteep)

local dentilly <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0xE3, --  ░░░▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,32,48,40,36,227,0 -- transparent background
    -- 255,255,223,207,215,219,28,255 -- transparent foreground
}
-- playdate.graphics.setPattern(dentilly)

local dentillyMini <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0x66, --  ▓░░▓▓░░▓
    0xDD, --  ░░▓░░░▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x66, --  ▓░░▓▓░░▓
    0xDD, --  ░░▓░░░▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 68,102,221,0,68,102,221,0 -- transparent background
    -- 187,153,34,255,187,153,34,255 -- transparent foreground
}
-- playdate.graphics.setPattern(dentillyMini)

local urdy <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x82, --  ░▓▓▓▓▓░▓
    0x01, --  ▓▓▓▓▓▓▓░
    -- 16,40,68,68,68,68,130,1 -- transparent background
    -- 239,215,187,187,187,187,125,254 -- transparent foreground
}
-- playdate.graphics.setPattern(urdy)

local urdyMini <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0x11, --  ▓▓▓░▓▓▓░
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0x11, --  ▓▓▓░▓▓▓░
    -- 68,170,170,17,68,170,170,17 -- transparent background
    -- 187,85,85,238,187,85,85,238 -- transparent foreground
}
-- playdate.graphics.setPattern(urdyMini)

local embattledGrady <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x83, --  ░▓▓▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,56,40,238,130,131,0 -- transparent background
    -- 255,255,199,215,17,125,124,255 -- transparent foreground
}
-- playdate.graphics.setPattern(embattledGrady)

local embattled <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0xC7, --  ░░▓▓▓░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,124,68,68,68,199,0 -- transparent background
    -- 255,255,131,187,187,187,56,255 -- transparent foreground
}
-- playdate.graphics.setPattern(embattled)

local embattledMini <const> = {
    0xEE, --  ░░░▓░░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xBB, --  ░▓░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xBB, --  ░▓░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 238,170,187,0,238,170,187,0 -- transparent background
    -- 17,85,68,255,17,85,68,255 -- transparent foreground
}
-- playdate.graphics.setPattern(embattledMini)

local potenty <const> = {
    0xFE, --  ░░░░░░░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0xEE, --  ░░░▓░░░▓
    0x28, --  ▓▓░▓░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0xEF, --  ░░░▓░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 254,130,130,238,40,40,239,0 -- transparent background
    -- 1,125,125,17,215,215,16,255 -- transparent foreground
}
-- playdate.graphics.setPattern(potenty)

local potentyMini <const> = {
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 238,68,255,0,238,68,255,0 -- transparent background
    -- 17,187,0,255,17,187,0,255 -- transparent foreground
}
-- playdate.graphics.setPattern(potentyMini)

local serpentine <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0xEE, --  ░░░▓░░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xBB, --  ░▓░░░▓░░
    0x11, --  ▓▓▓░▓▓▓░
    -- 68,238,170,170,170,170,187,17 -- transparent background
    -- 187,17,85,85,85,85,68,238 -- transparent foreground
}
-- playdate.graphics.setPattern(serpentine)

local rising <const> = {
    0x50, --  ▓░▓░▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x0A, --  ▓▓▓▓░▓░▓
    0x50, --  ▓░▓░▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x0A, --  ▓▓▓▓░▓░▓
    -- 80,160,5,10,80,160,5,10 -- transparent background
    -- 175,95,250,245,175,95,250,245 -- transparent foreground
}
-- playdate.graphics.setPattern(rising)

local riseAndFall <const> = {
    0x20, --  ▓▓░▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x0A, --  ▓▓▓▓░▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x02, --  ▓▓▓▓▓▓░▓
    -- 32,80,10,4,64,160,5,2 -- transparent background
    -- 223,175,245,251,191,95,250,253 -- transparent foreground
}
-- playdate.graphics.setPattern(riseAndFall)

local doubleHelix <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xC3, --  ░░▓▓▓▓░░
    0x24, --  ▓▓░▓▓░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0xC3, --  ░░▓▓▓▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,195,36,16,8,36,195,0 -- transparent background
    -- 255,60,219,239,247,219,60,255 -- transparent foreground
}
-- playdate.graphics.setPattern(doubleHelix)
