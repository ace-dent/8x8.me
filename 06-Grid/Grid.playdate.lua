-- Grid - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local gridLight <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,0,128,0,128,0,128,0 -- transparent background
    -- 85,255,127,255,127,255,127,255 -- transparent foreground
}
-- playdate.graphics.setPattern(gridLight)

local gridLightDot <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,0,128,0,136,0,128,0 -- transparent background
    -- 85,255,127,255,119,255,127,255 -- transparent foreground
}
-- playdate.graphics.setPattern(gridLightDot)

local grid <const> = {
    0xFF, --  ░░░░░░░░
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    -- 255,128,128,128,128,128,128,128 -- transparent background
    -- 0,127,127,127,127,127,127,127 -- transparent foreground
}
-- playdate.graphics.setPattern(grid)

local gridMedium <const> = {
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xC0, --  ░░▓▓▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    -- 255,255,192,192,192,192,192,192 -- transparent background
    -- 0,0,63,63,63,63,63,63 -- transparent foreground
}
-- playdate.graphics.setPattern(gridMedium)

local gridBold <const> = {
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xC1, --  ░░▓▓▓▓▓░
    0xC1, --  ░░▓▓▓▓▓░
    0xC1, --  ░░▓▓▓▓▓░
    0xC1, --  ░░▓▓▓▓▓░
    0xC1, --  ░░▓▓▓▓▓░
    0xFF, --  ░░░░░░░░
    -- 255,255,193,193,193,193,193,255 -- transparent background
    -- 0,0,62,62,62,62,62,0 -- transparent foreground
}
-- playdate.graphics.setPattern(gridBold)

local gridMiniLight <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,0,136,0,170,0,136,0 -- transparent background
    -- 85,255,119,255,85,255,119,255 -- transparent foreground
}
-- playdate.graphics.setPattern(gridMiniLight)

local gridMini <const> = {
    0xFF, --  ░░░░░░░░
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0xFF, --  ░░░░░░░░
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    -- 255,136,136,136,255,136,136,136 -- transparent background
    -- 0,119,119,119,0,119,119,119 -- transparent foreground
}
-- playdate.graphics.setPattern(gridMini)

local gridMiniMedium <const> = {
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    -- 255,255,204,204,255,255,204,204 -- transparent background
    -- 0,0,51,51,0,0,51,51 -- transparent foreground
}
-- playdate.graphics.setPattern(gridMiniMedium)

local gridDense <const> = {
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    -- 255,170,255,170,255,170,255,170 -- transparent background
    -- 0,85,0,85,0,85,0,85 -- transparent foreground
}
-- playdate.graphics.setPattern(gridDense)

local gridDiagonalLight <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    -- 0,136,0,32,0,136,0,2 -- transparent background
    -- 255,119,255,223,255,119,255,253 -- transparent foreground
}
-- playdate.graphics.setPattern(gridDiagonalLight)

local gridDiagonal <const> = {
    0x05, --  ▓▓▓▓▓░▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x02, --  ▓▓▓▓▓▓░▓
    -- 5,136,80,32,80,136,5,2 -- transparent background
    -- 250,119,175,223,175,119,250,253 -- transparent foreground
}
-- playdate.graphics.setPattern(gridDiagonal)

local gridDiagonalMedium <const> = {
    0x87, --  ░▓▓▓▓░░░
    0xCC, --  ░░▓▓░░▓▓
    0x78, --  ▓░░░░▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x78, --  ▓░░░░▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x87, --  ░▓▓▓▓░░░
    0x03, --  ▓▓▓▓▓▓░░
    -- 135,204,120,48,120,204,135,3 -- transparent background
    -- 120,51,135,207,135,51,120,252 -- transparent foreground
}
-- playdate.graphics.setPattern(gridDiagonalMedium)

local gridDiagonalMini <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x11, --  ▓▓▓░▓▓▓░
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x11, --  ▓▓▓░▓▓▓░
    -- 170,68,170,17,170,68,170,17 -- transparent background
    -- 85,187,85,238,85,187,85,238 -- transparent foreground
}
-- playdate.graphics.setPattern(gridDiagonalMini)

local honeycomb <const> = {
    0x1C, --  ▓▓▓░░░▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0xC1, --  ░░▓▓▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    0x1C, --  ▓▓▓░░░▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0xC1, --  ░░▓▓▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    -- 28,34,193,34,28,34,193,34 -- transparent background
    -- 227,221,62,221,227,221,62,221 -- transparent foreground
}
-- playdate.graphics.setPattern(honeycomb)

local trapezoid <const> = {
    0x02, --  ▓▓▓▓▓▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x01, --  ▓▓▓▓▓▓▓░
    -- 2,4,8,16,32,64,255,1 -- transparent background
    -- 253,251,247,239,223,191,0,254 -- transparent foreground
}
-- playdate.graphics.setPattern(trapezoid)
