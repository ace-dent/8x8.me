-- Dither - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local bayerDither00 <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,0,0,0,0,0 -- transparent background
    -- 255,255,255,255,255,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither00)

local bayerDither01 <const> = {
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 136,0,0,0,136,0,0,0 -- transparent background
    -- 119,255,255,255,119,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither01)

local bayerDither02 <const> = {
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 136,0,34,0,136,0,34,0 -- transparent background
    -- 119,255,221,255,119,255,221,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither02)

local bayerDither03 <const> = {
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 136,0,170,0,136,0,170,0 -- transparent background
    -- 119,255,85,255,119,255,85,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither03)

local bayerDither04 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,0,170,0,170,0,170,0 -- transparent background
    -- 85,255,85,255,85,255,85,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither04)

local bayerDither05 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,68,170,0,170,68,170,0 -- transparent background
    -- 85,187,85,255,85,187,85,255 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither05)

local bayerDither06 <const> = {
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
-- playdate.graphics.setPattern(bayerDither06)

local bayerDither07 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    -- 170,68,170,85,170,68,170,85 -- transparent background
    -- 85,187,85,170,85,187,85,170 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither07)

local bayerDither08 <const> = {
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
-- playdate.graphics.setPattern(bayerDither08)

local bayerDither09 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xDD, --  ░░▓░░░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0xDD, --  ░░▓░░░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    -- 170,221,170,85,170,221,170,85 -- transparent background
    -- 85,34,85,170,85,34,85,170 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither09)

local bayerDither10 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xDD, --  ░░▓░░░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x77, --  ▓░░░▓░░░
    0xAA, --  ░▓░▓░▓░▓
    0xDD, --  ░░▓░░░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x77, --  ▓░░░▓░░░
    -- 170,221,170,119,170,221,170,119 -- transparent background
    -- 85,34,85,136,85,34,85,136 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither10)

local bayerDither11 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xDD, --  ░░▓░░░▓░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xDD, --  ░░▓░░░▓░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    -- 170,221,170,255,170,221,170,255 -- transparent background
    -- 85,34,85,0,85,34,85,0 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither11)

local bayerDither12 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    -- 170,255,170,255,170,255,170,255 -- transparent background
    -- 85,0,85,0,85,0,85,0 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither12)

local bayerDither13 <const> = {
    0xEE, --  ░░░▓░░░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    0xEE, --  ░░░▓░░░▓
    0xFF, --  ░░░░░░░░
    0xAA, --  ░▓░▓░▓░▓
    0xFF, --  ░░░░░░░░
    -- 238,255,170,255,238,255,170,255 -- transparent background
    -- 17,0,85,0,17,0,85,0 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither13)

local bayerDither14 <const> = {
    0xEE, --  ░░░▓░░░▓
    0xFF, --  ░░░░░░░░
    0xBB, --  ░▓░░░▓░░
    0xFF, --  ░░░░░░░░
    0xEE, --  ░░░▓░░░▓
    0xFF, --  ░░░░░░░░
    0xBB, --  ░▓░░░▓░░
    0xFF, --  ░░░░░░░░
    -- 238,255,187,255,238,255,187,255 -- transparent background
    -- 17,0,68,0,17,0,68,0 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither14)

local bayerDither15 <const> = {
    0xEE, --  ░░░▓░░░▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xEE, --  ░░░▓░░░▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    -- 238,255,255,255,238,255,255,255 -- transparent background
    -- 17,0,0,0,17,0,0,0 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither15)

local bayerDither16 <const> = {
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    -- 255,255,255,255,255,255,255,255 -- transparent background
    -- 0,0,0,0,0,0,0,0 -- transparent foreground
}
-- playdate.graphics.setPattern(bayerDither16)

local officeDither05 <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,64,0,0,0,4,0 -- transparent background
    -- 255,255,191,255,255,255,251,255 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither05)

local officeDither10 <const> = {
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 64,0,4,0,64,0,4,0 -- transparent background
    -- 191,255,251,255,191,255,251,255 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither10)

local officeDither20 <const> = {
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 136,0,34,0,136,0,34,0 -- transparent background
    -- 119,255,221,255,119,255,221,255 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither20)

local officeDither25 <const> = {
    0x88, --  ░▓▓▓░▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    -- 136,34,136,34,136,34,136,34 -- transparent background
    -- 119,221,119,221,119,221,119,221 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither25)

local officeDither30 <const> = {
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
-- playdate.graphics.setPattern(officeDither30)

local officeDither40 <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x45, --  ▓░▓▓▓░▓░
    0xAA, --  ░▓░▓░▓░▓
    0x55, --  ▓░▓░▓░▓░
    -- 170,84,170,85,170,69,170,85 -- transparent background
    -- 85,171,85,170,85,186,85,170 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither40)

local officeDither50 <const> = {
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
-- playdate.graphics.setPattern(officeDither50)

local officeDither60 <const> = {
    0xEE, --  ░░░▓░░░▓
    0x55, --  ▓░▓░▓░▓░
    0xBB, --  ░▓░░░▓░░
    0x55, --  ▓░▓░▓░▓░
    0xEE, --  ░░░▓░░░▓
    0x55, --  ▓░▓░▓░▓░
    0xBB, --  ░▓░░░▓░░
    0x55, --  ▓░▓░▓░▓░
    -- 238,85,187,85,238,85,187,85 -- transparent background
    -- 17,170,68,170,17,170,68,170 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither60)

local officeDither70 <const> = {
    0xDD, --  ░░▓░░░▓░
    0x77, --  ▓░░░▓░░░
    0xDD, --  ░░▓░░░▓░
    0x77, --  ▓░░░▓░░░
    0xDD, --  ░░▓░░░▓░
    0x77, --  ▓░░░▓░░░
    0xDD, --  ░░▓░░░▓░
    0x77, --  ▓░░░▓░░░
    -- 221,119,221,119,221,119,221,119 -- transparent background
    -- 34,136,34,136,34,136,34,136 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither70)

local officeDither75 <const> = {
    0xDD, --  ░░▓░░░▓░
    0xFF, --  ░░░░░░░░
    0x77, --  ▓░░░▓░░░
    0xFF, --  ░░░░░░░░
    0xDD, --  ░░▓░░░▓░
    0xFF, --  ░░░░░░░░
    0x77, --  ▓░░░▓░░░
    0xFF, --  ░░░░░░░░
    -- 221,255,119,255,221,255,119,255 -- transparent background
    -- 34,0,136,0,34,0,136,0 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither75)

local officeDither80 <const> = {
    0xFB, --  ░░░░░▓░░
    0xFF, --  ░░░░░░░░
    0xBF, --  ░▓░░░░░░
    0xFF, --  ░░░░░░░░
    0xFB, --  ░░░░░▓░░
    0xFF, --  ░░░░░░░░
    0xBF, --  ░▓░░░░░░
    0xFF, --  ░░░░░░░░
    -- 251,255,191,255,251,255,191,255 -- transparent background
    -- 4,0,64,0,4,0,64,0 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither80)

local officeDither90 <const> = {
    0xFF, --  ░░░░░░░░
    0xFB, --  ░░░░░▓░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xBF, --  ░▓░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    -- 255,251,255,255,255,191,255,255 -- transparent background
    -- 0,4,0,0,0,64,0,0 -- transparent foreground
}
-- playdate.graphics.setPattern(officeDither90)
