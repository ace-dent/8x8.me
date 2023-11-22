pico-8 cartridge // http://www.pico-8.com
version 41
__lua__
#include ../../15-Other/other.p8.lua

cls(0)
color(7) -- white(ish) foreground
--spr(0,0,0,1,1) --preserve 'x' spr0

-- write patterns to screen
rows=1
?"\14".." ab c def"
?"\14"..""
?"\14"..""
?"\14"..""
--      "0123456789abcdef"

-- copy screen to sprite memory
for i=0,((8*4)-1) do
 memcpy(i*64,24576+i*64,64)
end
cstore()

-- return the rows occupied
printh(rows)

-- > export other.png

__gfx__
