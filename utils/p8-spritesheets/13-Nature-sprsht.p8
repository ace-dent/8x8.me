pico-8 cartridge // http://www.pico-8.com
version 41
__lua__
#include ../../13-Nature/nature.p8.lua

cls(0)
color(7) -- white(ish) foreground
--spr(0,0,0,1,1) --preserve 'x' spr0

-- write patterns to screen
rows=3
?"\14".." abcdefghijklmno"
?"\14".."pqrstuvw xyz0123"
?"\14".."45"
?"\14"..""
--      "0123456789abcdef"

-- copy screen to sprite memory
for i=0,((8*4)-1) do
 memcpy(i*64,24576+i*64,64)
end
cstore()

-- return the rows occupied
printh(rows)

-- > export nature.png

__gfx__
00000000077777007777777077000770077777777777777000007770000000000000000000000000070000000000000000000000000700070000000700000000
00000000007770070777770707777707077777777777777000777777000000007000000000700000007000000000707070707070070707070000070707070000
00000000700000777000007770000070077777777777777007777777007000000700000000070000070000000000070007000700070707070000070707070000
00000000770007777770777770707077707777777777770707777707000000000000700000000000000000000000000000000000000000000000000000000000
00000000770007777770777707707700707777777777770777770770000000700000070000000070000000700000000000000000007000700070000000007070
00000000700700777707077777070777770777777777707777777070000000000700000007000700000007007070000070707070707070707070000070707070
00000000007770000077700000707000707007777770070777707700000700000070000000700000000000700700000007000700707070707070000070700000
00000000077777007777777070777070077770000007777007770000000000000000007000000000000000000000000000000000000000000000000000000000
00000000000000000000000000000000000000000000000000700000077000000000000000000000000000000000000007700000000000000000000000000000
00000000000000000000000000000000000000000070000000770000077000770000000000000000000700000000000070070000000000000077700007777700
07000000000000000000000000000700007000000077000000070070007707770000000000070000007070000000000000000770000000000777770077777770
70700000000000000007000007007700007700000007070000000770000007700000000007070700070707000000000000007007007770000707070077777770
07000700000007000707070007707000000700007700770000000700770000000000000000707000007070000077000000000000070700000070700770070070
00007070070070000070700000700000770007700770700077000000777007700000000000070000070707000777070000770000077070000000007077707770
00000700007070000000000000000000077077000070700007700000077007700000000007777700000700000000000007007000000000700700000007777700
00000000000000000000000000000000000000000000000000000000000077000000000000000000000700000000000000000000000007000070000007070700
00000000007770700000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00077000007707000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
07077700007770000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
77007700007070000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00707770707770000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
77000070070770000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
70077000007770000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
00777700007070000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000