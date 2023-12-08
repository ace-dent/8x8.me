-- Rectilinear - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local squareMicro <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,102,102,0,0,102,102,0 -- transparent background
    -- 255,153,153,255,255,153,153,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareMicro)

local squareMicroOffset <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x99, --  ░▓▓░░▓▓░
    0x99, --  ░▓▓░░▓▓░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,102,102,0,0,153,153,0 -- transparent background
    -- 255,153,153,255,255,102,102,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareMicroOffset)

local squareMiniHighlight <const> = {
    0xEE, --  ░░░▓░░░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 238,136,136,0,238,136,136,0 -- transparent background
    -- 17,119,119,255,17,119,119,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareMiniHighlight)

local squareMini <const> = {
    0xEE, --  ░░░▓░░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 238,170,238,0,238,170,238,0 -- transparent background
    -- 17,85,17,255,17,85,17,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareMini)

local squareMiniOffset <const> = {
    0xEE, --  ░░░▓░░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xBB, --  ░▓░░░▓░░
    0xAA, --  ░▓░▓░▓░▓
    0xBB, --  ░▓░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 238,170,238,0,187,170,187,0 -- transparent background
    -- 17,85,17,255,68,85,68,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareMiniOffset)

local squareMiniSolid <const> = {
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 238,238,238,0,238,238,238,0 -- transparent background
    -- 17,17,17,255,17,17,17,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareMiniSolid)

local squareMiniSolidOffset <const> = {
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xBB, --  ░▓░░░▓░░
    0xBB, --  ░▓░░░▓░░
    0xBB, --  ░▓░░░▓░░
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 238,238,238,0,187,187,187,0 -- transparent background
    -- 17,17,17,255,68,68,68,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareMiniSolidOffset)

local billetMiniHighlight <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0x88, --  ░▓▓▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,238,136,0,0,238,136,0 -- transparent background
    -- 255,17,119,255,255,17,119,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetMiniHighlight)

local billetMini <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEE, --  ░░░▓░░░▓
    0xEE, --  ░░░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,238,238,0,0,238,238,0 -- transparent background
    -- 255,17,17,255,255,17,17,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetMini)

local billetVerticalMini <const> = {
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 102,102,102,0,102,102,102,0 -- transparent background
    -- 153,153,153,255,153,153,153,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetVerticalMini)

local square <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,60,36,36,60,0,0 -- transparent background
    -- 255,255,195,219,219,195,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(square)

local squareSolid <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,60,60,60,60,0,0 -- transparent background
    -- 255,255,195,195,195,195,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareSolid)

local squareShaded <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,40,20,40,20,0,0 -- transparent background
    -- 255,255,215,235,215,235,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareShaded)

local squareLarge <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x7E, --  ▓░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,126,66,66,66,66,126,0 -- transparent background
    -- 255,129,189,189,189,189,129,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareLarge)

local squareLargeMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x66, --  ▓░░▓▓░░▓
    0x66, --  ▓░░▓▓░░▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,126,126,102,102,126,126,0 -- transparent background
    -- 255,129,129,153,153,129,129,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareLargeMedium)

local squareLargeSolid <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,126,126,126,126,126,126,0 -- transparent background
    -- 255,129,129,129,129,129,129,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareLargeSolid)

local squareLargeShaded <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x54, --  ▓░▓░▓░▓▓
    0x2A, --  ▓▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0x2A, --  ▓▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0x2A, --  ▓▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,84,42,84,42,84,42,0 -- transparent background
    -- 255,171,213,171,213,171,213,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareLargeShaded)

local squareXL <const> = {
    0xFE, --  ░░░░░░░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 254,130,130,130,130,130,254,0 -- transparent background
    -- 1,125,125,125,125,125,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareXL)

local squareXLMedium <const> = {
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xC6, --  ░░▓▓▓░░▓
    0xC6, --  ░░▓▓▓░░▓
    0xC6, --  ░░▓▓▓░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 254,254,198,198,198,254,254,0 -- transparent background
    -- 1,1,57,57,57,1,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareXLMedium)

local squareXLSolid <const> = {
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 254,254,254,254,254,254,254,0 -- transparent background
    -- 1,1,1,1,1,1,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareXLSolid)

local squareXLShaded <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 170,84,170,84,170,84,170,0 -- transparent background
    -- 85,171,85,171,85,171,85,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareXLShaded)

local rectangle <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,124,68,68,124,0,0 -- transparent background
    -- 255,255,131,187,187,131,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(rectangle)

local rectangleSolid <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7C, --  ▓░░░░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x7C, --  ▓░░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,124,124,124,124,0,0 -- transparent background
    -- 255,255,131,131,131,131,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(rectangleSolid)

local rectangleLarge <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFE, --  ░░░░░░░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0x82, --  ░▓▓▓▓▓░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,254,130,130,130,130,254,0 -- transparent background
    -- 255,1,125,125,125,125,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(rectangleLarge)

local rectangleLargeMedium <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xC6, --  ░░▓▓▓░░▓
    0xC6, --  ░░▓▓▓░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,254,254,198,198,254,254,0 -- transparent background
    -- 255,1,1,57,57,1,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(rectangleLargeMedium)

local rectangleLargeSolid <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,254,254,254,254,254,254,0 -- transparent background
    -- 255,1,1,1,1,1,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(rectangleLargeSolid)

local billet <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x42, --  ▓░▓▓▓▓░▓
    0x7E, --  ▓░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,126,66,66,126,0,0 -- transparent background
    -- 255,255,129,189,189,129,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billet)

local billetSolid <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x7E, --  ▓░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,126,126,126,126,0,0 -- transparent background
    -- 255,255,129,129,129,129,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetSolid)

local billetShaded <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x2A, --  ▓▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0x2A, --  ▓▓░▓░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,0,42,84,42,84,0,0 -- transparent background
    -- 255,255,213,171,213,171,255,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetShaded)

local billetVertical <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,60,36,36,36,36,60,0 -- transparent background
    -- 255,195,219,219,219,219,195,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetVertical)

local billetVerticalSolid <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x3C, --  ▓▓░░░░▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,60,60,60,60,60,60,0 -- transparent background
    -- 255,195,195,195,195,195,195,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetVerticalSolid)

local billetVerticalShaded <const> = {
    0x00, --  ▓▓▓▓▓▓▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x14, --  ▓▓▓░▓░▓▓
    0x28, --  ▓▓░▓░▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 0,20,40,20,40,20,40,0 -- transparent background
    -- 255,235,215,235,215,235,215,255 -- transparent foreground
}
-- playdate.graphics.setPattern(billetVerticalShaded)

local waffle <const> = {
    0xFF, --  ░░░░░░░░
    0x80, --  ░▓▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x9E, --  ░▓▓░░░░▓
    0x9E, --  ░▓▓░░░░▓
    0x9E, --  ░▓▓░░░░▓
    0x9E, --  ░▓▓░░░░▓
    0x80, --  ░▓▓▓▓▓▓▓
    -- 255,128,128,158,158,158,158,128 -- transparent background
    -- 0,127,127,97,97,97,97,127 -- transparent foreground
}
-- playdate.graphics.setPattern(waffle)

local tile <const> = {
    0xFE, --  ░░░░░░░▓
    0x82, --  ░▓▓▓▓▓░▓
    0xBE, --  ░▓░░░░░▓
    0xBE, --  ░▓░░░░░▓
    0xBE, --  ░▓░░░░░▓
    0xBE, --  ░▓░░░░░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 254,130,190,190,190,190,254,0 -- transparent background
    -- 1,125,65,65,65,65,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(tile)

local tileShaded <const> = {
    0xFE, --  ░░░░░░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xD6, --  ░░▓░▓░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xD6, --  ░░▓░▓░░▓
    0xAA, --  ░▓░▓░▓░▓
    0xFE, --  ░░░░░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 254,170,214,170,214,170,254,0 -- transparent background
    -- 1,85,41,85,41,85,1,255 -- transparent foreground
}
-- playdate.graphics.setPattern(tileShaded)

local illuminated <const> = {
    0xF8, --  ░░░░░▓▓▓
    0xFC, --  ░░░░░░▓▓
    0xFA, --  ░░░░░▓░▓
    0xFC, --  ░░░░░░▓▓
    0xFA, --  ░░░░░▓░▓
    0x54, --  ▓░▓░▓░▓▓
    0x2A, --  ▓▓░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 248,252,250,252,250,84,42,0 -- transparent background
    -- 7,3,5,3,5,171,213,255 -- transparent foreground
}
-- playdate.graphics.setPattern(illuminated)

local block <const> = {
    0x7E, --  ▓░░░░░░▓
    0xBC, --  ░▓░░░░▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0xD8, --  ░░▓░░▓▓▓
    0xD8, --  ░░▓░░▓▓▓
    0xC0, --  ░░▓▓▓▓▓▓
    0x80, --  ░▓▓▓▓▓▓▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 126,188,192,216,216,192,128,0 -- transparent background
    -- 129,67,63,39,39,63,127,255 -- transparent foreground
}
-- playdate.graphics.setPattern(block)

local blockPyramid <const> = {
    0xFE, --  ░░░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    0xB8, --  ░▓░░░▓▓▓
    0x50, --  ▓░▓░▓▓▓▓
    0xA8, --  ░▓░▓░▓▓▓
    0x44, --  ▓░▓▓▓░▓▓
    0x82, --  ░▓▓▓▓▓░▓
    0x01, --  ▓▓▓▓▓▓▓░
    -- 254,124,184,80,168,68,130,1 -- transparent background
    -- 1,131,71,175,87,187,125,254 -- transparent foreground
}
-- playdate.graphics.setPattern(blockPyramid)
