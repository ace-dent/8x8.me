-- Nature - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local scalesSparse <const> = {
    0x7C, --  ▓░░░░░▓▓
    0x39, --  ▓▓░░░▓▓░
    0x83, --  ░▓▓▓▓▓░░
    0xC7, --  ░░▓▓▓░░░
    0xC7, --  ░░▓▓▓░░░
    0x93, --  ░▓▓░▓▓░░
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    -- 124,57,131,199,199,147,56,124 -- transparent background
    -- 131,198,124,56,56,108,199,131 -- transparent foreground
}
-- playdate.graphics.setPattern(scalesSparse)

local scales <const> = {
    0xFE, --  ░░░░░░░▓
    0x7D, --  ▓░░░░░▓░
    0x83, --  ░▓▓▓▓▓░░
    0xEF, --  ░░░▓░░░░
    0xEF, --  ░░░▓░░░░
    0xD7, --  ░░▓░▓░░░
    0x38, --  ▓▓░░░▓▓▓
    0xFE, --  ░░░░░░░▓
    -- 254,125,131,239,239,215,56,254 -- transparent background
    -- 1,130,124,16,16,40,199,1 -- transparent foreground
}
-- playdate.graphics.setPattern(scales)

local scallop <const> = {
    0xC6, --  ░░▓▓▓░░▓
    0x7D, --  ▓░░░░░▓░
    0x82, --  ░▓▓▓▓▓░▓
    0xAB, --  ░▓░▓░▓░░
    0x6C, --  ▓░░▓░░▓▓
    0xD7, --  ░░▓░▓░░░
    0x28, --  ▓▓░▓░▓▓▓
    0xBA, --  ░▓░░░▓░▓
    -- 198,125,130,171,108,215,40,186 -- transparent background
    -- 57,130,125,84,147,40,215,69 -- transparent foreground
}
-- playdate.graphics.setPattern(scallop)

local scalesLargeDexter <const> = {
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x7F, --  ▓░░░░░░░
    0xBF, --  ░▓░░░░░░
    0xBF, --  ░▓░░░░░░
    0xDF, --  ░░▓░░░░░
    0xA7, --  ░▓░▓▓░░░
    0x78, --  ▓░░░░▓▓▓
    -- 127,127,127,191,191,223,167,120 -- transparent background
    -- 128,128,128,64,64,32,88,135 -- transparent foreground
}
-- playdate.graphics.setPattern(scalesLargeDexter)

local scalesLargeSinister <const> = {
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFD, --  ░░░░░░▓░
    0xFD, --  ░░░░░░▓░
    0xFB, --  ░░░░░▓░░
    0xE5, --  ░░░▓▓░▓░
    0x1E, --  ▓▓▓░░░░▓
    -- 254,254,254,253,253,251,229,30 -- transparent background
    -- 1,1,1,2,2,4,26,225 -- transparent foreground
}
-- playdate.graphics.setPattern(scalesLargeSinister)

local papillon <const> = {
    0x0E, --  ▓▓▓▓░░░▓
    0x3F, --  ▓▓░░░░░░
    0x7F, --  ▓░░░░░░░
    0x7D, --  ▓░░░░░▓░
    0xF6, --  ░░░░▓░░▓
    0xFA, --  ░░░░░▓░▓
    0xEC, --  ░░░▓░░▓▓
    0x70, --  ▓░░░▓▓▓▓
    -- 14,63,127,125,246,250,236,112 -- transparent background
    -- 241,192,128,130,9,5,19,143 -- transparent foreground
}
-- playdate.graphics.setPattern(papillon)

local loam <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,32,0,2,0,16,0 -- transparent background
    -- 255,255,223,255,253,255,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(loam)

local sand <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    -- 0,128,64,8,4,64,32,2 -- transparent background
    -- 255,127,191,247,251,191,223,253 -- transparent foreground
}
-- playdate.graphics.setPattern(sand)

local patch <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,32,16,0,2,68,32,0 -- transparent background
    -- 255,223,239,255,253,187,223,255 -- transparent foreground
}
-- playdate.graphics.setPattern(patch)

local divot <const> = {
    0x40, --  ▓░▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 64,32,64,0,2,4,2,0 -- transparent background
    -- 191,223,191,255,253,251,253,255 -- transparent foreground
}
-- playdate.graphics.setPattern(divot)

local grass <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x0A, --  ▓▓▓▓░▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,10,4,0,0,160,64,0 -- transparent background
    -- 255,245,251,255,255,95,191,255 -- transparent foreground
}
-- playdate.graphics.setPattern(grass)

local grassMini <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,170,68,0,0,170,68,0 -- transparent background
    -- 255,85,187,255,255,85,187,255 -- transparent foreground
}
-- playdate.graphics.setPattern(grassMini)

local field <const> = {
    0x11, --  ▓▓▓░▓▓▓░
    0x55, --  ▓░▓░▓░▓░
    0x55, --  ▓░▓░▓░▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 17,85,85,0,34,170,170,0 -- transparent background
    -- 238,170,170,255,221,85,85,255 -- transparent foreground
}
-- playdate.graphics.setPattern(field)

local fieldSparse <const> = {
    0x01, --  ▓▓▓▓▓▓▓░
    0x05, --  ▓▓▓▓▓░▓░
    0x05, --  ▓▓▓▓▓░▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 1,5,5,0,32,160,160,0 -- transparent background
    -- 254,250,250,255,223,95,95,255 -- transparent foreground
}
-- playdate.graphics.setPattern(fieldSparse)

local pasture <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x0A, --  ▓▓▓▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,80,80,0,10,170,160,0 -- transparent background
    -- 255,175,175,255,245,85,95,255 -- transparent foreground
}
-- playdate.graphics.setPattern(pasture)

local daisies <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x0A, --  ▓▓▓▓░▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,64,160,68,10,4,0 -- transparent background
    -- 255,255,191,95,187,245,251,255 -- transparent foreground
}
-- playdate.graphics.setPattern(daisies)

local tuffet <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x48, --  ▓░▓▓░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,0,4,72,40,0 -- transparent background
    -- 255,255,255,255,251,183,215,255 -- transparent foreground
}
-- playdate.graphics.setPattern(tuffet)

local shrub <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,16,84,40,0,0 -- transparent background
    -- 255,255,255,239,171,215,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(shrub)

local sprout <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x4C, --  ▓░▓▓░░▓▓
    0x68, --  ▓░░▓░▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,4,76,104,32,0,0 -- transparent background
    -- 255,255,251,179,151,223,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(sprout)

local crop <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0xC6, --  ░░▓▓▓░░▓
    0x6C, --  ▓░░▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,32,48,16,198,108,0 -- transparent background
    -- 255,255,223,207,239,57,147,255 -- transparent foreground
}
-- playdate.graphics.setPattern(crop)

local bush <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x68, --  ▓░░▓░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,32,48,20,204,104,40,0 -- transparent background
    -- 255,223,207,235,51,151,215,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bush)

local leaves <const> = {
    0x20, --  ▓▓░▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x12, --  ▓▓▓░▓▓░▓
    0x06, --  ▓▓▓▓▓░░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x60, --  ▓░░▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 32,48,18,6,4,192,96,0 -- transparent background
    -- 223,207,237,249,251,63,159,255 -- transparent foreground
}
-- playdate.graphics.setPattern(leaves)

local overgrowth <const> = {
    0x60, --  ▓░░▓▓▓▓▓
    0x63, --  ▓░░▓▓▓░░
    0x37, --  ▓▓░░▓░░░
    0x06, --  ▓▓▓▓▓░░▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xE6, --  ░░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x0C, --  ▓▓▓▓░░▓▓
    -- 96,99,55,6,192,230,102,12 -- transparent background
    -- 159,156,200,249,63,25,153,243 -- transparent foreground
}
-- playdate.graphics.setPattern(overgrowth)

local thicket <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,16,84,40,16,124,0 -- transparent background
    -- 255,255,239,171,215,239,131,255 -- transparent foreground
}
-- playdate.graphics.setPattern(thicket)

local tree <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    -- 0,16,40,84,40,84,16,16 -- transparent background
    -- 255,239,215,171,215,171,239,239 -- transparent foreground
}
-- playdate.graphics.setPattern(tree)

local rocks <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x74, --  ▓░░░▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,0,48,116,0,0 -- transparent background
    -- 255,255,255,255,207,139,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(rocks)

local mounds <const> = {
    0x60, --  ▓░░▓▓▓▓▓
    0x90, --  ░▓▓░▓▓▓▓
    0x06, --  ▓▓▓▓▓░░▓
    0x09, --  ▓▓▓▓░▓▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x48, --  ▓░▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 96,144,6,9,0,48,72,0 -- transparent background
    -- 159,111,249,246,255,207,183,255 -- transparent foreground
}
-- playdate.graphics.setPattern(mounds)

local skull <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x68, --  ▓░░▓░▓▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    -- 0,0,0,56,80,104,2,4 -- transparent background
    -- 255,255,255,199,175,151,253,251 -- transparent foreground
}
-- playdate.graphics.setPattern(skull)

local skullLarge <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x29, --  ▓▓░▓░▓▓░
    0x02, --  ▓▓▓▓▓▓░▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    -- 0,56,124,84,41,2,64,32 -- transparent background
    -- 255,199,131,171,214,253,191,223 -- transparent foreground
}
-- playdate.graphics.setPattern(skullLarge)

local skullXL <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x92, --  ░▓▓░▓▓░▓
    0xEE, --  ░░░▓░░░▓
    0x7C, --  ▓░░░░░▓▓
    0x54, --  ▓░▓░▓░▓▓
    -- 0,124,254,254,146,238,124,84 -- transparent background
    -- 255,131,1,1,109,17,131,171 -- transparent foreground
}
-- playdate.graphics.setPattern(skullXL)

local crackedBoulder <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x5C, --  ▓░▓░░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x2E, --  ▓▓░▓░░░▓
    0xC2, --  ░░▓▓▓▓░▓
    0x98, --  ░▓▓░░▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    -- 0,24,92,204,46,194,152,60 -- transparent background
    -- 255,231,163,51,209,61,103,195 -- transparent foreground
}
-- playdate.graphics.setPattern(crackedBoulder)

local bamboo <const> = {
    0x3A, --  ▓▓░░░▓░▓
    0x34, --  ▓▓░░▓░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0xB8, --  ░▓░░░▓▓▓
    0x58, --  ▓░▓░░▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    -- 58,52,56,40,184,88,56,40 -- transparent background
    -- 197,203,199,215,71,167,199,215 -- transparent foreground
}
-- playdate.graphics.setPattern(bamboo)
