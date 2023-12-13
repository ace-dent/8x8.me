-- Checked - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local checkMicro <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    -- 170,85,170,85,170,85,170,85 -- transparent background
    -- 85,170,85,170,85,170,85,170 -- transparent foreground
}
-- playdate.graphics.setPattern(checkMicro)

local checkMini <const> = {
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x33, --  ▓▓░░▓▓░░
    0x33, --  ▓▓░░▓▓░░
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x33, --  ▓▓░░▓▓░░
    0x33, --  ▓▓░░▓▓░░
    -- 204,204,51,51,204,204,51,51 -- transparent background
    -- 51,51,204,204,51,51,204,204 -- transparent foreground
}
-- playdate.graphics.setPattern(checkMini)

local check <const> = {
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0x0F, --  ▓▓▓▓░░░░
    0x0F, --  ▓▓▓▓░░░░
    0x0F, --  ▓▓▓▓░░░░
    0x0F, --  ▓▓▓▓░░░░
    -- 240,240,240,240,15,15,15,15 -- transparent background
    -- 15,15,15,15,240,240,240,240 -- transparent foreground
}
-- playdate.graphics.setPattern(check)

local checkShaded <const> = {
    0xA0, --  ░▓░▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0x05, --  ▓▓▓▓▓░▓░
    0x0A, --  ▓▓▓▓░▓░▓
    0x05, --  ▓▓▓▓▓░▓░
    0x0A, --  ▓▓▓▓░▓░▓
    -- 160,80,160,80,5,10,5,10 -- transparent background
    -- 95,175,95,175,250,245,250,245 -- transparent foreground
}
-- playdate.graphics.setPattern(checkShaded)

local checkBox <const> = {
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0x0F, --  ▓▓▓▓░░░░
    0x09, --  ▓▓▓▓░▓▓░
    0x09, --  ▓▓▓▓░▓▓░
    0x0F, --  ▓▓▓▓░░░░
    -- 240,240,240,240,15,9,9,15 -- transparent background
    -- 15,15,15,15,240,246,246,240 -- transparent foreground
}
-- playdate.graphics.setPattern(checkBox)

local checkSquare <const> = {
    0xF0, --  ░░░░▓▓▓▓
    0xF6, --  ░░░░▓░░▓
    0xF6, --  ░░░░▓░░▓
    0xF0, --  ░░░░▓▓▓▓
    0x0F, --  ▓▓▓▓░░░░
    0x6F, --  ▓░░▓░░░░
    0x6F, --  ▓░░▓░░░░
    0x0F, --  ▓▓▓▓░░░░
    -- 240,246,246,240,15,111,111,15 -- transparent background
    -- 15,9,9,15,240,144,144,240 -- transparent foreground
}
-- playdate.graphics.setPattern(checkSquare)

local checkHorizontalMini <const> = {
    0xCC, --  ░░▓▓░░▓▓
    0x33, --  ▓▓░░▓▓░░
    0xCC, --  ░░▓▓░░▓▓
    0x33, --  ▓▓░░▓▓░░
    0xCC, --  ░░▓▓░░▓▓
    0x33, --  ▓▓░░▓▓░░
    0xCC, --  ░░▓▓░░▓▓
    0x33, --  ▓▓░░▓▓░░
    -- 204,51,204,51,204,51,204,51 -- transparent background
    -- 51,204,51,204,51,204,51,204 -- transparent foreground
}
-- playdate.graphics.setPattern(checkHorizontalMini)

local checkHorizontal <const> = {
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0x0F, --  ▓▓▓▓░░░░
    0x0F, --  ▓▓▓▓░░░░
    0xF0, --  ░░░░▓▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0x0F, --  ▓▓▓▓░░░░
    0x0F, --  ▓▓▓▓░░░░
    -- 240,240,15,15,240,240,15,15 -- transparent background
    -- 15,15,240,240,15,15,240,240 -- transparent foreground
}
-- playdate.graphics.setPattern(checkHorizontal)

local checkVerticalMini <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0x55, --  ▓░▓░▓░▓░
    -- 170,170,85,85,170,170,85,85 -- transparent background
    -- 85,85,170,170,85,85,170,170 -- transparent foreground
}
-- playdate.graphics.setPattern(checkVerticalMini)

local checkVertical <const> = {
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x33, --  ▓▓░░▓▓░░
    0x33, --  ▓▓░░▓▓░░
    0x33, --  ▓▓░░▓▓░░
    0x33, --  ▓▓░░▓▓░░
    -- 204,204,204,204,51,51,51,51 -- transparent background
    -- 51,51,51,51,204,204,204,204 -- transparent foreground
}
-- playdate.graphics.setPattern(checkVertical)

local diamond <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xFE, --  ░░░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 16,56,124,254,124,56,16,0 -- transparent background
    -- 239,199,131,1,131,199,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(diamond)

local diamondShaded <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 16,40,84,170,84,40,16,0 -- transparent background
    -- 239,215,171,85,171,215,239,255 -- transparent foreground
}
-- playdate.graphics.setPattern(diamondShaded)

local diamondLined <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0xFE, --  ░░░░░░░▓
    0x7D, --  ▓░░░░░▓░
    0x3A, --  ▓▓░░░▓░▓
    0x14, --  ▓▓▓░▓░▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 16,56,124,254,125,58,20,8 -- transparent background
    -- 239,199,131,1,130,197,235,247 -- transparent foreground
}
-- playdate.graphics.setPattern(diamondLined)

local diamondBold <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x3E, --  ▓▓░░░░░▓
    0x7F, --  ▓░░░░░░░
    0xFF, --  ░░░░░░░░
    0x7F, --  ▓░░░░░░░
    0x3E, --  ▓▓░░░░░▓
    0x1C, --  ▓▓▓░░░▓▓
    -- 8,28,62,127,255,127,62,28 -- transparent background
    -- 247,227,193,128,0,128,193,227 -- transparent foreground
}
-- playdate.graphics.setPattern(diamondBold)

local checkDiagonalMini <const> = {
    0xDD, --  ░░▓░░░▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0xBB, --  ░▓░░░▓░░
    0xDD, --  ░░▓░░░▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0xBB, --  ░▓░░░▓░░
    -- 221,136,17,187,221,136,17,187 -- transparent background
    -- 34,119,238,68,34,119,238,68 -- transparent foreground
}
-- playdate.graphics.setPattern(checkDiagonalMini)

local checkDiagonal <const> = {
    0x01, --  ▓▓▓▓▓▓▓░
    0x83, --  ░▓▓▓▓▓░░
    0xC7, --  ░░▓▓▓░░░
    0xEF, --  ░░░▓░░░░
    0xF7, --  ░░░░▓░░░
    0xE3, --  ░░░▓▓▓░░
    0xC1, --  ░░▓▓▓▓▓░
    0x80, --  ░▓▓▓▓▓▓▓
    -- 1,131,199,239,247,227,193,128 -- transparent background
    -- 254,124,56,16,8,28,62,127 -- transparent foreground
}
-- playdate.graphics.setPattern(checkDiagonal)

local checkDiagonalShaded <const> = {
    0x01, --  ▓▓▓▓▓▓▓░
    0x82, --  ░▓▓▓▓▓░▓
    0x45, --  ▓░▓▓▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0xA2, --  ░▓░▓▓▓░▓
    0x41, --  ▓░▓▓▓▓▓░
    0x80, --  ░▓▓▓▓▓▓▓
    -- 1,130,69,170,85,162,65,128 -- transparent background
    -- 254,125,186,85,170,93,190,127 -- transparent foreground
}
-- playdate.graphics.setPattern(checkDiagonalShaded)

local ternaryMini <const> = {
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xBB, --  ░▓░░░▓░░
    0x11, --  ▓▓▓░▓▓▓░
    0xEE, --  ░░░▓░░░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xBB, --  ░▓░░░▓░░
    0x11, --  ▓▓▓░▓▓▓░
    -- 238,68,187,17,238,68,187,17 -- transparent background
    -- 17,187,68,238,17,187,68,238 -- transparent foreground
}
-- playdate.graphics.setPattern(ternaryMini)

local ternary <const> = {
    0xFE, --  ░░░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0xEF, --  ░░░▓░░░░
    0xC7, --  ░░▓▓▓░░░
    0x83, --  ░▓▓▓▓▓░░
    0x01, --  ▓▓▓▓▓▓▓░
    -- 254,124,56,16,239,199,131,1 -- transparent background
    -- 1,131,199,239,16,56,124,254 -- transparent foreground
}
-- playdate.graphics.setPattern(ternary)

local ternaryVerticalMini <const> = {
    0x33, --  ▓▓░░▓▓░░
    0xAA, --  ░▓░▓░▓░▓
    0xCC, --  ░░▓▓░░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x33, --  ▓▓░░▓▓░░
    0xAA, --  ░▓░▓░▓░▓
    0xCC, --  ░░▓▓░░▓▓
    0xAA, --  ░▓░▓░▓░▓
    -- 51,170,204,170,51,170,204,170 -- transparent background
    -- 204,85,51,85,204,85,51,85 -- transparent foreground
}
-- playdate.graphics.setPattern(ternaryVerticalMini)

local ternaryVertical <const> = {
    0x0F, --  ▓▓▓▓░░░░
    0x8E, --  ░▓▓▓░░░▓
    0xCC, --  ░░▓▓░░▓▓
    0xE8, --  ░░░▓░▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xE8, --  ░░░▓░▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x8E, --  ░▓▓▓░░░▓
    -- 15,142,204,232,240,232,204,142 -- transparent background
    -- 240,113,51,23,15,23,51,113 -- transparent foreground
}
-- playdate.graphics.setPattern(ternaryVertical)

local gyron <const> = {
    0xF1, --  ░░░░▓▓▓░
    0x73, --  ▓░░░▓▓░░
    0x37, --  ▓▓░░▓░░░
    0x1F, --  ▓▓▓░░░░░
    0xF8, --  ░░░░░▓▓▓
    0xEC, --  ░░░▓░░▓▓
    0xCE, --  ░░▓▓░░░▓
    0x8F, --  ░▓▓▓░░░░
    -- 241,115,55,31,248,236,206,143 -- transparent background
    -- 14,140,200,224,7,19,49,112 -- transparent foreground
}
-- playdate.graphics.setPattern(gyron)

local triangleMini <const> = {
    0xFF, --  ░░░░░░░░
    0xEE, --  ░░░▓░░░▓
    0xCC, --  ░░▓▓░░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0xFF, --  ░░░░░░░░
    0xEE, --  ░░░▓░░░▓
    0xCC, --  ░░▓▓░░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    -- 255,238,204,136,255,238,204,136 -- transparent background
    -- 0,17,51,119,0,17,51,119 -- transparent foreground
}
-- playdate.graphics.setPattern(triangleMini)

local triangle <const> = {
    0xFF, --  ░░░░░░░░
    0xFE, --  ░░░░░░░▓
    0xFC, --  ░░░░░░▓▓
    0xF8, --  ░░░░░▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xE0, --  ░░░▓▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    -- 255,254,252,248,240,224,192,128 -- transparent background
    -- 0,1,3,7,15,31,63,127 -- transparent foreground
}
-- playdate.graphics.setPattern(triangle)

local triangleShaded <const> = {
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0xA8, --  ░▓░▓░▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0xA0, --  ░▓░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    -- 85,170,84,168,80,160,64,128 -- transparent background
    -- 170,85,171,87,175,95,191,127 -- transparent foreground
}
-- playdate.graphics.setPattern(triangleShaded)

local chevronCheckMini <const> = {
    0x55, --  ▓░▓░▓░▓░
    0xCC, --  ░░▓▓░░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x33, --  ▓▓░░▓▓░░
    0x55, --  ▓░▓░▓░▓░
    0xCC, --  ░░▓▓░░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x33, --  ▓▓░░▓▓░░
    -- 85,204,170,51,85,204,170,51 -- transparent background
    -- 170,51,85,204,170,51,85,204 -- transparent foreground
}
-- playdate.graphics.setPattern(chevronCheckMini)

local chevronCheckDense <const> = {
    0x69, --  ▓░░▓░▓▓░
    0xCC, --  ░░▓▓░░▓▓
    0x96, --  ░▓▓░▓░░▓
    0x33, --  ▓▓░░▓▓░░
    0x69, --  ▓░░▓░▓▓░
    0xCC, --  ░░▓▓░░▓▓
    0x96, --  ░▓▓░▓░░▓
    0x33, --  ▓▓░░▓▓░░
    -- 105,204,150,51,105,204,150,51 -- transparent background
    -- 150,51,105,204,150,51,105,204 -- transparent foreground
}
-- playdate.graphics.setPattern(chevronCheckDense)

local chevronCheck <const> = {
    0xE8, --  ░░░▓░▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x8E, --  ░▓▓▓░░░▓
    0x0F, --  ▓▓▓▓░░░░
    0x17, --  ▓▓▓░▓░░░
    0x33, --  ▓▓░░▓▓░░
    0x71, --  ▓░░░▓▓▓░
    0xF0, --  ░░░░▓▓▓▓
    -- 232,204,142,15,23,51,113,240 -- transparent background
    -- 23,51,113,240,232,204,142,15 -- transparent foreground
}
-- playdate.graphics.setPattern(chevronCheck)
