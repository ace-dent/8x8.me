-- Lines - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local horizontal <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,255,0,0,0,255,0,0 -- transparent background
    -- 255,0,255,255,255,0,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontal)

local horizontalMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,255,255,0,0,255,255,0 -- transparent background
    -- 255,0,0,255,255,0,0,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalMedium)

local horizontalBold <const> = {
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 255,255,255,0,255,255,255,0 -- transparent background
    -- 0,0,0,255,0,0,0,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalBold)

local horizontalSparse <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,255,0,0,0,0 -- transparent background
    -- 255,255,255,0,255,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalSparse)

local horizontalSparseMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,0,255,255,0,0,0 -- transparent background
    -- 255,255,255,0,0,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalSparseMedium)

local horizontalSparseBold <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,255,255,255,0,0,0 -- transparent background
    -- 255,255,0,0,0,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalSparseBold)

local horizontalSparseExtraBold <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,255,255,255,255,0,0 -- transparent background
    -- 255,255,0,0,0,0,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalSparseExtraBold)

local horizontalSparseUltraBold <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,255,255,255,255,255,0,0 -- transparent background
    -- 255,0,0,0,0,0,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalSparseUltraBold)

local horizontalStripes <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,255,0,255,0,255,0,0 -- transparent background
    -- 255,0,255,0,255,0,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalStripes)

local horizontalPinstripe <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,255,0,255,0,0,0 -- transparent background
    -- 255,255,0,255,0,255,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalPinstripe)

local horizontalPinstripeMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,255,0,255,255,0,0 -- transparent background
    -- 255,255,0,255,0,0,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalPinstripeMedium)

local horizontalDense <const> = {
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 255,0,255,0,255,0,255,0 -- transparent background
    -- 0,255,0,255,0,255,0,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalDense)

local horizontalDenseLineDot <const> = {
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 255,0,170,0,255,0,170,0 -- transparent background
    -- 0,255,85,255,0,255,85,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalDenseLineDot)

local horizontalDenseLineDash <const> = {
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFF, --  ░░░░░░░░
    0x00, --  ▓▓▓▓▓▓▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 255,0,204,0,255,0,204,0 -- transparent background
    -- 0,255,51,255,0,255,51,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalDenseLineDash)

local horizontalLight <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,170,0,0,0,170,0,0 -- transparent background
    -- 255,85,255,255,255,85,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(horizontalLight)

local vertical <const> = {
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    -- 34,34,34,34,34,34,34,34 -- transparent background
    -- 221,221,221,221,221,221,221,221 -- transparent foreground
}
-- playdate.graphics.setPattern(vertical)

local verticalMedium <const> = {
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    -- 102,102,102,102,102,102,102,102 -- transparent background
    -- 153,153,153,153,153,153,153,153 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalMedium)

local verticalBold <const> = {
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    0x77, --  ▓░░░▓░░░
    -- 119,119,119,119,119,119,119,119 -- transparent background
    -- 136,136,136,136,136,136,136,136 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalBold)

local verticalSparse <const> = {
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 8,8,8,8,8,8,8,8 -- transparent background
    -- 247,247,247,247,247,247,247,247 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalSparse)

local verticalSparseMedium <const> = {
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    -- 24,24,24,24,24,24,24,24 -- transparent background
    -- 231,231,231,231,231,231,231,231 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalSparseMedium)

local verticalSparseBold <const> = {
    0x1C, --  ▓▓▓░░░▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x1C, --  ▓▓▓░░░▓▓
    -- 28,28,28,28,28,28,28,28 -- transparent background
    -- 227,227,227,227,227,227,227,227 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalSparseBold)

local verticalSparseExtraBold <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    -- 60,60,60,60,60,60,60,60 -- transparent background
    -- 195,195,195,195,195,195,195,195 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalSparseExtraBold)

local verticalSparseUltraBold <const> = {
    0x3E, --  ▓▓░░░░░▓
    0x3E, --  ▓▓░░░░░▓
    0x3E, --  ▓▓░░░░░▓
    0x3E, --  ▓▓░░░░░▓
    0x3E, --  ▓▓░░░░░▓
    0x3E, --  ▓▓░░░░░▓
    0x3E, --  ▓▓░░░░░▓
    0x3E, --  ▓▓░░░░░▓
    -- 62,62,62,62,62,62,62,62 -- transparent background
    -- 193,193,193,193,193,193,193,193 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalSparseUltraBold)

local verticalStripes <const> = {
    0x2A, --  ▓▓░▓░▓░▓
    0x2A, --  ▓▓░▓░▓░▓
    0x2A, --  ▓▓░▓░▓░▓
    0x2A, --  ▓▓░▓░▓░▓
    0x2A, --  ▓▓░▓░▓░▓
    0x2A, --  ▓▓░▓░▓░▓
    0x2A, --  ▓▓░▓░▓░▓
    0x2A, --  ▓▓░▓░▓░▓
    -- 42,42,42,42,42,42,42,42 -- transparent background
    -- 213,213,213,213,213,213,213,213 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalStripes)

local verticalPinstripe <const> = {
    0x14, --  ▓▓▓░▓░▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x14, --  ▓▓▓░▓░▓▓
    -- 20,20,20,20,20,20,20,20 -- transparent background
    -- 235,235,235,235,235,235,235,235 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalPinstripe)

local verticalPinstripeMedium <const> = {
    0x34, --  ▓▓░░▓░▓▓
    0x34, --  ▓▓░░▓░▓▓
    0x34, --  ▓▓░░▓░▓▓
    0x34, --  ▓▓░░▓░▓▓
    0x34, --  ▓▓░░▓░▓▓
    0x34, --  ▓▓░░▓░▓▓
    0x34, --  ▓▓░░▓░▓▓
    0x34, --  ▓▓░░▓░▓▓
    -- 52,52,52,52,52,52,52,52 -- transparent background
    -- 203,203,203,203,203,203,203,203 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalPinstripeMedium)

local verticalDense <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    -- 170,170,170,170,170,170,170,170 -- transparent background
    -- 85,85,85,85,85,85,85,85 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalDense)

local verticalDenseLineDot <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    -- 170,136,170,136,170,136,170,136 -- transparent background
    -- 85,119,85,119,85,119,85,119 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalDenseLineDot)

local verticalDenseLineDash <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0xAA, --  ░▓░▓░▓░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    -- 170,170,136,136,170,170,136,136 -- transparent background
    -- 85,85,119,119,85,85,119,119 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalDenseLineDash)

local verticalLight <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x22, --  ▓▓░▓▓▓░▓
    -- 0,34,0,34,0,34,0,34 -- transparent background
    -- 255,221,255,221,255,221,255,221 -- transparent foreground
}
-- playdate.graphics.setPattern(verticalLight)

local dexter <const> = {
    0x11, --  ▓▓▓░▓▓▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x11, --  ▓▓▓░▓▓▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x22, --  ▓▓░▓▓▓░▓
    -- 17,136,68,34,17,136,68,34 -- transparent background
    -- 238,119,187,221,238,119,187,221 -- transparent foreground
}
-- playdate.graphics.setPattern(dexter)

local dexterMedium <const> = {
    0x33, --  ▓▓░░▓▓░░
    0x99, --  ░▓▓░░▓▓░
    0xCC, --  ░░▓▓░░▓▓
    0x66, --  ▓░░▓▓░░▓
    0x33, --  ▓▓░░▓▓░░
    0x99, --  ░▓▓░░▓▓░
    0xCC, --  ░░▓▓░░▓▓
    0x66, --  ▓░░▓▓░░▓
    -- 51,153,204,102,51,153,204,102 -- transparent background
    -- 204,102,51,153,204,102,51,153 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterMedium)

local dexterBold <const> = {
    0xBB, --  ░▓░░░▓░░
    0xDD, --  ░░▓░░░▓░
    0xEE, --  ░░░▓░░░▓
    0x77, --  ▓░░░▓░░░
    0xBB, --  ░▓░░░▓░░
    0xDD, --  ░░▓░░░▓░
    0xEE, --  ░░░▓░░░▓
    0x77, --  ▓░░░▓░░░
    -- 187,221,238,119,187,221,238,119 -- transparent background
    -- 68,34,17,136,68,34,17,136 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterBold)

local dexterSparse <const> = {
    0x04, --  ▓▓▓▓▓░▓▓
    0x02, --  ▓▓▓▓▓▓░▓
    0x01, --  ▓▓▓▓▓▓▓░
    0x80, --  ░▓▓▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x10, --  ▓▓▓░▓▓▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 4,2,1,128,64,32,16,8 -- transparent background
    -- 251,253,254,127,191,223,239,247 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSparse)

local dexterSparseMedium <const> = {
    0x0C, --  ▓▓▓▓░░▓▓
    0x06, --  ▓▓▓▓▓░░▓
    0x03, --  ▓▓▓▓▓▓░░
    0x81, --  ░▓▓▓▓▓▓░
    0xC0, --  ░░▓▓▓▓▓▓
    0x60, --  ▓░░▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x18, --  ▓▓▓░░▓▓▓
    -- 12,6,3,129,192,96,48,24 -- transparent background
    -- 243,249,252,126,63,159,207,231 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSparseMedium)

local dexterSparseBold <const> = {
    0x0E, --  ▓▓▓▓░░░▓
    0x07, --  ▓▓▓▓▓░░░
    0x83, --  ░▓▓▓▓▓░░
    0xC1, --  ░░▓▓▓▓▓░
    0xE0, --  ░░░▓▓▓▓▓
    0x70, --  ▓░░░▓▓▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x1C, --  ▓▓▓░░░▓▓
    -- 14,7,131,193,224,112,56,28 -- transparent background
    -- 241,248,124,62,31,143,199,227 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSparseBold)

local dexterSparseExtraBold <const> = {
    0x1E, --  ▓▓▓░░░░▓
    0x0F, --  ▓▓▓▓░░░░
    0x87, --  ░▓▓▓▓░░░
    0xC3, --  ░░▓▓▓▓░░
    0xE1, --  ░░░▓▓▓▓░
    0xF0, --  ░░░░▓▓▓▓
    0x78, --  ▓░░░░▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    -- 30,15,135,195,225,240,120,60 -- transparent background
    -- 225,240,120,60,30,15,135,195 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSparseExtraBold)

local dexterSparseUltraBold <const> = {
    0x1F, --  ▓▓▓░░░░░
    0x8F, --  ░▓▓▓░░░░
    0xC7, --  ░░▓▓▓░░░
    0xE3, --  ░░░▓▓▓░░
    0xF1, --  ░░░░▓▓▓░
    0xF8, --  ░░░░░▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x3E, --  ▓▓░░░░░▓
    -- 31,143,199,227,241,248,124,62 -- transparent background
    -- 224,112,56,28,14,7,131,193 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSparseUltraBold)

local dexterStripes <const> = {
    0x15, --  ▓▓▓░▓░▓░
    0x8A, --  ░▓▓▓░▓░▓
    0x45, --  ▓░▓▓▓░▓░
    0xA2, --  ░▓░▓▓▓░▓
    0x51, --  ▓░▓░▓▓▓░
    0xA8, --  ░▓░▓░▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x2A, --  ▓▓░▓░▓░▓
    -- 21,138,69,162,81,168,84,42 -- transparent background
    -- 234,117,186,93,174,87,171,213 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterStripes)

local dexterPinstripe <const> = {
    0x12, --  ▓▓▓░▓▓░▓
    0x09, --  ▓▓▓▓░▓▓░
    0x84, --  ░▓▓▓▓░▓▓
    0x42, --  ▓░▓▓▓▓░▓
    0x21, --  ▓▓░▓▓▓▓░
    0x90, --  ░▓▓░▓▓▓▓
    0x48, --  ▓░▓▓░▓▓▓
    0x24, --  ▓▓░▓▓░▓▓
    -- 18,9,132,66,33,144,72,36 -- transparent background
    -- 237,246,123,189,222,111,183,219 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterPinstripe)

local dexterPinstripeMedium <const> = {
    0x32, --  ▓▓░░▓▓░▓
    0x19, --  ▓▓▓░░▓▓░
    0x8C, --  ░▓▓▓░░▓▓
    0x46, --  ▓░▓▓▓░░▓
    0x23, --  ▓▓░▓▓▓░░
    0x91, --  ░▓▓░▓▓▓░
    0xC8, --  ░░▓▓░▓▓▓
    0x64, --  ▓░░▓▓░▓▓
    -- 50,25,140,70,35,145,200,100 -- transparent background
    -- 205,230,115,185,220,110,55,155 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterPinstripeMedium)

local dexterSteep <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x11, --  ▓▓▓░▓▓▓░
    0x11, --  ▓▓▓░▓▓▓░
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    -- 68,34,34,17,17,136,136,68 -- transparent background
    -- 187,221,221,238,238,119,119,187 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSteep)

local dexterSteepMedium <const> = {
    0x66, --  ▓░░▓▓░░▓
    0x33, --  ▓▓░░▓▓░░
    0x33, --  ▓▓░░▓▓░░
    0x99, --  ░▓▓░░▓▓░
    0x99, --  ░▓▓░░▓▓░
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x66, --  ▓░░▓▓░░▓
    -- 102,51,51,153,153,204,204,102 -- transparent background
    -- 153,204,204,102,102,51,51,153 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterSteepMedium)

local dexterShallow <const> = {
    0x03, --  ▓▓▓▓▓▓░░
    0xC0, --  ░░▓▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    0x03, --  ▓▓▓▓▓▓░░
    0xC0, --  ░░▓▓▓▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x0C, --  ▓▓▓▓░░▓▓
    -- 3,192,48,12,3,192,48,12 -- transparent background
    -- 252,63,207,243,252,63,207,243 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterShallow)

local dexterShallowMedium <const> = {
    0x0F, --  ▓▓▓▓░░░░
    0xC3, --  ░░▓▓▓▓░░
    0xF0, --  ░░░░▓▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x0F, --  ▓▓▓▓░░░░
    0xC3, --  ░░▓▓▓▓░░
    0xF0, --  ░░░░▓▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    -- 15,195,240,60,15,195,240,60 -- transparent background
    -- 240,60,15,195,240,60,15,195 -- transparent foreground
}
-- playdate.graphics.setPattern(dexterShallowMedium)

local sinister <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    -- 68,136,17,34,68,136,17,34 -- transparent background
    -- 187,119,238,221,187,119,238,221 -- transparent foreground
}
-- playdate.graphics.setPattern(sinister)

local sinisterMedium <const> = {
    0x66, --  ▓░░▓▓░░▓
    0xCC, --  ░░▓▓░░▓▓
    0x99, --  ░▓▓░░▓▓░
    0x33, --  ▓▓░░▓▓░░
    0x66, --  ▓░░▓▓░░▓
    0xCC, --  ░░▓▓░░▓▓
    0x99, --  ░▓▓░░▓▓░
    0x33, --  ▓▓░░▓▓░░
    -- 102,204,153,51,102,204,153,51 -- transparent background
    -- 153,51,102,204,153,51,102,204 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterMedium)

local sinisterBold <const> = {
    0xEE, --  ░░░▓░░░▓
    0xDD, --  ░░▓░░░▓░
    0xBB, --  ░▓░░░▓░░
    0x77, --  ▓░░░▓░░░
    0xEE, --  ░░░▓░░░▓
    0xDD, --  ░░▓░░░▓░
    0xBB, --  ░▓░░░▓░░
    0x77, --  ▓░░░▓░░░
    -- 238,221,187,119,238,221,187,119 -- transparent background
    -- 17,34,68,136,17,34,68,136 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterBold)

local sinisterSparse <const> = {
    0x10, --  ▓▓▓░▓▓▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0x40, --  ▓░▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x01, --  ▓▓▓▓▓▓▓░
    0x02, --  ▓▓▓▓▓▓░▓
    0x04, --  ▓▓▓▓▓░▓▓
    0x08, --  ▓▓▓▓░▓▓▓
    -- 16,32,64,128,1,2,4,8 -- transparent background
    -- 239,223,191,127,254,253,251,247 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSparse)

local sinisterSparseMedium <const> = {
    0x18, --  ▓▓▓░░▓▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0x60, --  ▓░░▓▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x81, --  ░▓▓▓▓▓▓░
    0x03, --  ▓▓▓▓▓▓░░
    0x06, --  ▓▓▓▓▓░░▓
    0x0C, --  ▓▓▓▓░░▓▓
    -- 24,48,96,192,129,3,6,12 -- transparent background
    -- 231,207,159,63,126,252,249,243 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSparseMedium)

local sinisterSparseBold <const> = {
    0x38, --  ▓▓░░░▓▓▓
    0x70, --  ▓░░░▓▓▓▓
    0xE0, --  ░░░▓▓▓▓▓
    0xC1, --  ░░▓▓▓▓▓░
    0x83, --  ░▓▓▓▓▓░░
    0x07, --  ▓▓▓▓▓░░░
    0x0E, --  ▓▓▓▓░░░▓
    0x1C, --  ▓▓▓░░░▓▓
    -- 56,112,224,193,131,7,14,28 -- transparent background
    -- 199,143,31,62,124,248,241,227 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSparseBold)

local sinisterSparseExtraBold <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0x78, --  ▓░░░░▓▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xE1, --  ░░░▓▓▓▓░
    0xC3, --  ░░▓▓▓▓░░
    0x87, --  ░▓▓▓▓░░░
    0x0F, --  ▓▓▓▓░░░░
    0x1E, --  ▓▓▓░░░░▓
    -- 60,120,240,225,195,135,15,30 -- transparent background
    -- 195,135,15,30,60,120,240,225 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSparseExtraBold)

local sinisterSparseUltraBold <const> = {
    0x7C, --  ▓░░░░░▓▓
    0xF8, --  ░░░░░▓▓▓
    0xF1, --  ░░░░▓▓▓░
    0xE3, --  ░░░▓▓▓░░
    0xC7, --  ░░▓▓▓░░░
    0x8F, --  ░▓▓▓░░░░
    0x1F, --  ▓▓▓░░░░░
    0x3E, --  ▓▓░░░░░▓
    -- 124,248,241,227,199,143,31,62 -- transparent background
    -- 131,7,14,28,56,112,224,193 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSparseUltraBold)

local sinisterStripes <const> = {
    0x54, --  ▓░▓░▓░▓▓
    0xA8, --  ░▓░▓░▓▓▓
    0x51, --  ▓░▓░▓▓▓░
    0xA2, --  ░▓░▓▓▓░▓
    0x45, --  ▓░▓▓▓░▓░
    0x8A, --  ░▓▓▓░▓░▓
    0x15, --  ▓▓▓░▓░▓░
    0x2A, --  ▓▓░▓░▓░▓
    -- 84,168,81,162,69,138,21,42 -- transparent background
    -- 171,87,174,93,186,117,234,213 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterStripes)

local sinisterPinstripe <const> = {
    0x24, --  ▓▓░▓▓░▓▓
    0x48, --  ▓░▓▓░▓▓▓
    0x90, --  ░▓▓░▓▓▓▓
    0x21, --  ▓▓░▓▓▓▓░
    0x42, --  ▓░▓▓▓▓░▓
    0x84, --  ░▓▓▓▓░▓▓
    0x09, --  ▓▓▓▓░▓▓░
    0x12, --  ▓▓▓░▓▓░▓
    -- 36,72,144,33,66,132,9,18 -- transparent background
    -- 219,183,111,222,189,123,246,237 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterPinstripe)

local sinisterPinstripeMedium <const> = {
    0x64, --  ▓░░▓▓░▓▓
    0xC8, --  ░░▓▓░▓▓▓
    0x91, --  ░▓▓░▓▓▓░
    0x23, --  ▓▓░▓▓▓░░
    0x46, --  ▓░▓▓▓░░▓
    0x8C, --  ░▓▓▓░░▓▓
    0x19, --  ▓▓▓░░▓▓░
    0x32, --  ▓▓░░▓▓░▓
    -- 100,200,145,35,70,140,25,50 -- transparent background
    -- 155,55,110,220,185,115,230,205 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterPinstripeMedium)

local sinisterSteep <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x11, --  ▓▓▓░▓▓▓░
    0x11, --  ▓▓▓░▓▓▓░
    0x22, --  ▓▓░▓▓▓░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    -- 68,136,136,17,17,34,34,68 -- transparent background
    -- 187,119,119,238,238,221,221,187 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSteep)

local sinisterSteepMedium <const> = {
    0x66, --  ▓░░▓▓░░▓
    0xCC, --  ░░▓▓░░▓▓
    0xCC, --  ░░▓▓░░▓▓
    0x99, --  ░▓▓░░▓▓░
    0x99, --  ░▓▓░░▓▓░
    0x33, --  ▓▓░░▓▓░░
    0x33, --  ▓▓░░▓▓░░
    0x66, --  ▓░░▓▓░░▓
    -- 102,204,204,153,153,51,51,102 -- transparent background
    -- 153,51,51,102,102,204,204,153 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterSteepMedium)

local sinisterShallow <const> = {
    0x30, --  ▓▓░░▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x03, --  ▓▓▓▓▓▓░░
    0x0C, --  ▓▓▓▓░░▓▓
    0x30, --  ▓▓░░▓▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x03, --  ▓▓▓▓▓▓░░
    0x0C, --  ▓▓▓▓░░▓▓
    -- 48,192,3,12,48,192,3,12 -- transparent background
    -- 207,63,252,243,207,63,252,243 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterShallow)

local sinisterShallowMedium <const> = {
    0x3C, --  ▓▓░░░░▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xC3, --  ░░▓▓▓▓░░
    0x0F, --  ▓▓▓▓░░░░
    0x3C, --  ▓▓░░░░▓▓
    0xF0, --  ░░░░▓▓▓▓
    0xC3, --  ░░▓▓▓▓░░
    0x0F, --  ▓▓▓▓░░░░
    -- 60,240,195,15,60,240,195,15 -- transparent background
    -- 195,15,60,240,195,15,60,240 -- transparent foreground
}
-- playdate.graphics.setPattern(sinisterShallowMedium)
