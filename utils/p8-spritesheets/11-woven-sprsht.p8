pico-8 cartridge

__lua__
#include /woven.p8.lua

cls(0)
color(7) -- white(ish) foreground
--spr(0,0,0,1,1) --preserve 'x' spr0

-- write patterns to screen
?"\14".." abcdefghijklmno"
?"\14"..""
?"\14"..""
?"\14"..""

-- copy screen to spritesheet
for i=0,((8*4)-1) do
 memcpy(i*64,24576+i*64,64)
end
cstore()

-- > export woven.png