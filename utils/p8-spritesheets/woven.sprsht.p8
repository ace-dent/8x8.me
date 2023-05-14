pico-8 cartridge // http://www.pico-8.com
version 38
__lua__
#include /woven.p8.lua

-- write patterns to spritesheet
cls(0)
color(7) --white(ish) foreground

print"\14 abcdefghijklmn"
--spr(0,0,0,1,1) --preserve 'x' as spr0

for i=0,((8*2)-1) do
 memcpy(i*64,24576+i*64,64)
end
cstore()