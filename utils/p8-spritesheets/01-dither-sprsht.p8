pico-8 cartridge

__lua__
#include /dither.p8.lua

cls(0)
color(7) -- white(ish) foreground
--spr(0,0,0,1,1) --preserve 'x' spr0

-- write patterns to screen
print"\14abcdefghijklmnop"
print"\14  ABCDEFGHIJKLqq"

-- copy screen to spritesheet
for i=0,((8*2)-1) do
 memcpy(i*64,24576+i*64,64)
end
cstore()
