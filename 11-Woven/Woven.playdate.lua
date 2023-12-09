-- Woven - 8x8.me fill patterns
-- This work is dedicated to the Public Domain by ACED, licensed under CC0
-- https://creativecommons.org/publicdomain/zero/1.0/

local interlinked <const> = {
    0x75, --  ▓░░░▓░▓░
    0xEE, --  ░░░▓░░░▓
    0x57, --  ▓░▓░▓░░░
    0xBB, --  ░▓░░░▓░░
    0xF5, --  ░░░░▓░▓░
    0xEE, --  ░░░▓░░░▓
    0x5D, --  ▓░▓░░░▓░
    0xBB, --  ░▓░░░▓░░
    -- 117,238,87,187,245,238,93,187 -- transparent background
    -- 138,17,168,68,10,17,162,68 -- transparent foreground
}
-- playdate.graphics.setPattern(interlinked)

local weaveDense <const> = {
    0x75, --  ▓░░░▓░▓░
    0xEE, --  ░░░▓░░░▓
    0x57, --  ▓░▓░▓░░░
    0xBB, --  ░▓░░░▓░░
    0xD5, --  ░░▓░▓░▓░
    0xEE, --  ░░░▓░░░▓
    0x5D, --  ▓░▓░░░▓░
    0xBB, --  ░▓░░░▓░░
    -- 117,238,87,187,213,238,93,187 -- transparent background
    -- 138,17,168,68,42,17,162,68 -- transparent foreground
}
-- playdate.graphics.setPattern(weaveDense)

local weave <const> = {
    0x74, --  ▓░░░▓░▓▓
    0xEE, --  ░░░▓░░░▓
    0x47, --  ▓░▓▓▓░░░
    0x83, --  ░▓▓▓▓▓░░
    0xC5, --  ░░▓▓▓░▓░
    0xEE, --  ░░░▓░░░▓
    0x5C, --  ▓░▓░░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    -- 116,238,71,131,197,238,92,56 -- transparent background
    -- 139,17,184,124,58,17,163,199 -- transparent foreground
}
-- playdate.graphics.setPattern(weave)

local weaveMedium <const> = {
    0x78, --  ▓░░░░▓▓▓
    0xF6, --  ░░░░▓░░▓
    0x6F, --  ▓░░▓░░░░
    0x87, --  ░▓▓▓▓░░░
    0xC3, --  ░░▓▓▓▓░░
    0xED, --  ░░░▓░░▓░
    0xDE, --  ░░▓░░░░▓
    0x3C, --  ▓▓░░░░▓▓
    -- 120,246,111,135,195,237,222,60 -- transparent background
    -- 135,9,144,120,60,18,33,195 -- transparent foreground
}
-- playdate.graphics.setPattern(weaveMedium)

local weaveBold <const> = {
    0xFA, --  ░░░░░▓░▓
    0x77, --  ▓░░░▓░░░
    0xAF, --  ░▓░▓░░░░
    0xC7, --  ░░▓▓▓░░░
    0xEB, --  ░░░▓░▓░░
    0xDD, --  ░░▓░░░▓░
    0xBE, --  ░▓░░░░░▓
    0x7C, --  ▓░░░░░▓▓
    -- 250,119,175,199,235,221,190,124 -- transparent background
    -- 5,136,80,56,20,34,65,131 -- transparent foreground
}
-- playdate.graphics.setPattern(weaveBold)

local net <const> = {
    0x83, --  ░▓▓▓▓▓░░
    0xC6, --  ░░▓▓▓░░▓
    0x6C, --  ▓░░▓░░▓▓
    0x38, --  ▓▓░░░▓▓▓
    0x1C, --  ▓▓▓░░░▓▓
    0x36, --  ▓▓░░▓░░▓
    0x63, --  ▓░░▓▓▓░░
    0xC1, --  ░░▓▓▓▓▓░
    -- 131,198,108,56,28,54,99,193 -- transparent background
    -- 124,57,147,199,227,201,156,62 -- transparent foreground
}
-- playdate.graphics.setPattern(net)

local wicker <const> = {
    0x24, --  ▓▓░▓▓░▓▓
    0x20, --  ▓▓░▓▓▓▓▓
    0xAF, --  ░▓░▓░░░░
    0x20, --  ▓▓░▓▓▓▓▓
    0x04, --  ▓▓▓▓▓░▓▓
    0xF5, --  ░░░░▓░▓░
    0x04, --  ▓▓▓▓▓░▓▓
    0x24, --  ▓▓░▓▓░▓▓
    -- 36,32,175,32,4,245,4,36 -- transparent background
    -- 219,223,80,223,251,10,251,219 -- transparent foreground
}
-- playdate.graphics.setPattern(wicker)

local laced <const> = {
    0xAA, --  ░▓░▓░▓░▓
    0x20, --  ▓▓░▓▓▓▓▓
    0xAF, --  ░▓░▓░░░░
    0x20, --  ▓▓░▓▓▓▓▓
    0xAA, --  ░▓░▓░▓░▓
    0x02, --  ▓▓▓▓▓▓░▓
    0xFA, --  ░░░░░▓░▓
    0x02, --  ▓▓▓▓▓▓░▓
    -- 170,32,175,32,170,2,250,2 -- transparent background
    -- 85,223,80,223,85,253,5,253 -- transparent foreground
}
-- playdate.graphics.setPattern(laced)

local squareBasket <const> = {
    0xAE, --  ░▓░▓░░░▓
    0xA0, --  ░▓░▓▓▓▓▓
    0xAE, --  ░▓░▓░░░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    0xEA, --  ░░░▓░▓░▓
    0x0A, --  ▓▓▓▓░▓░▓
    0xEA, --  ░░░▓░▓░▓
    0x00, --  ▓▓▓▓▓▓▓▓
    -- 174,160,174,0,234,10,234,0 -- transparent background
    -- 81,95,81,255,21,245,21,255 -- transparent foreground
}
-- playdate.graphics.setPattern(squareBasket)

local puppytooth <const> = {
    0x44, --  ▓░▓▓▓░▓▓
    0x77, --  ▓░░░▓░░░
    0xEE, --  ░░░▓░░░▓
    0x22, --  ▓▓░▓▓▓░▓
    0x44, --  ▓░▓▓▓░▓▓
    0x77, --  ▓░░░▓░░░
    0xEE, --  ░░░▓░░░▓
    0x22, --  ▓▓░▓▓▓░▓
    -- 68,119,238,34,68,119,238,34 -- transparent background
    -- 187,136,17,221,187,136,17,221 -- transparent foreground
}
-- playdate.graphics.setPattern(puppytooth)

local houndstooth <const> = {
    0x06, --  ▓▓▓▓▓░░▓
    0x0C, --  ▓▓▓▓░░▓▓
    0x18, --  ▓▓▓░░▓▓▓
    0xDE, --  ░░▓░░░░▓
    0x9F, --  ░▓▓░░░░░
    0x3F, --  ▓▓░░░░░░
    0x7E, --  ▓░░░░░░▓
    0x12, --  ▓▓▓░▓▓░▓
    -- 6,12,24,222,159,63,126,18 -- transparent background
    -- 249,243,231,33,96,192,129,237 -- transparent foreground
}
-- playdate.graphics.setPattern(houndstooth)

local gingham <const> = {
    0x05, --  ▓▓▓▓▓░▓░
    0x0A, --  ▓▓▓▓░▓░▓
    0x05, --  ▓▓▓▓▓░▓░
    0xAF, --  ░▓░▓░░░░
    0x5F, --  ▓░▓░░░░░
    0xAF, --  ░▓░▓░░░░
    0x5F, --  ▓░▓░░░░░
    0x0A, --  ▓▓▓▓░▓░▓
    -- 5,10,5,175,95,175,95,10 -- transparent background
    -- 250,245,250,80,160,80,160,245 -- transparent foreground
}
-- playdate.graphics.setPattern(gingham)

local plaid <const> = {
    0x05, --  ▓▓▓▓▓░▓░
    0x0A, --  ▓▓▓▓░▓░▓
    0x05, --  ▓▓▓▓▓░▓░
    0xFA, --  ░░░░░▓░▓
    0xF5, --  ░░░░▓░▓░
    0xFA, --  ░░░░░▓░▓
    0xF5, --  ░░░░▓░▓░
    0x0A, --  ▓▓▓▓░▓░▓
    -- 5,10,5,250,245,250,245,10 -- transparent background
    -- 250,245,250,5,10,5,10,245 -- transparent foreground
}
-- playdate.graphics.setPattern(plaid)

local tartan <const> = {
    0x0D, --  ▓▓▓▓░░▓░
    0x0D, --  ▓▓▓▓░░▓░
    0x0D, --  ▓▓▓▓░░▓░
    0xFF, --  ░░░░░░░░
    0xFF, --  ░░░░░░░░
    0x0D, --  ▓▓▓▓░░▓░
    0xFF, --  ░░░░░░░░
    0x0D, --  ▓▓▓▓░░▓░
    -- 13,13,13,255,255,13,255,13 -- transparent background
    -- 242,242,242,0,0,242,0,242 -- transparent foreground
}
-- playdate.graphics.setPattern(tartan)
