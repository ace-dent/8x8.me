--woven - 8x8.me fill patterns
--public domain (cc0) by aced

--setup custom font as 8x8px
poke(0x5600,8,8,8,0,0)

--97 'a' interlinked
poke(0x5600+(8* 97),
 174, -- ▒███▒█▒█
 119, -- ███▒███▒
 234, -- ▒█▒█▒███
 221, -- █▒███▒██
 175, -- ████▒█▒█
 119, -- ███▒███▒
 186, -- ▒█▒███▒█
 221  -- █▒███▒██
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."なwマツにwむツ"

--98 'b' weavedense
poke(0x5600+(8* 98),
 174, -- ▒███▒█▒█
 119, -- ███▒███▒
 234, -- ▒█▒█▒███
 221, -- █▒███▒██
 171, -- ██▒█▒█▒█
 119, -- ███▒███▒
 186, -- ▒█▒███▒█
 221  -- █▒███▒██
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉb"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."なwマツつwむツ"

--99 'c' weave
poke(0x5600+(8* 99),
  46, -- ▒███▒█▒▒
 119, -- ███▒███▒
 226, -- ▒█▒▒▒███
 193, -- █▒▒▒▒▒██
 163, -- ██▒▒▒█▒█
 119, -- ███▒███▒
  58, -- ▒█▒███▒▒
  28  -- ▒▒███▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉc"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶."..".wヌりこw:、"

--100 'd' weavemedium
poke(0x5600+(8* 100),
  30, -- ▒████▒▒▒
 111, -- ████▒██▒
 246, -- ▒██▒████
 225, -- █▒▒▒▒███
 195, -- ██▒▒▒▒██
 183, -- ███▒██▒█
 123, -- ██▒████▒
  60  -- ▒▒████▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉd"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."゛oロニれほ{<"

--101 'e' weavebold
poke(0x5600+(8* 101),
  95, -- █████▒█▒
 238, -- ▒███▒███
 245, -- █▒█▒████
 227, -- ██▒▒▒███
 215, -- ███▒█▒██
 187, -- ██▒███▒█
 125, -- █▒█████▒
  62  -- ▒█████▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉe"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."_モレネシめ}>"

--102 'f' net
poke(0x5600+(8* 102),
 193, -- █▒▒▒▒▒██
  99, -- ██▒▒▒██▒
  54, -- ▒██▒██▒▒
  28, -- ▒▒███▒▒▒
  56, -- ▒▒▒███▒▒
 108, -- ▒▒██▒██▒
 198, -- ▒██▒▒▒██
 131  -- ██▒▒▒▒▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉf"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."りc6、8lを⬇️"

--103 'g' wicker
poke(0x5600+(8* 103),
  36, -- ▒▒█▒▒█▒▒
   4, -- ▒▒█▒▒▒▒▒
 245, -- █▒█▒████
   4, -- ▒▒█▒▒▒▒▒
  32, -- ▒▒▒▒▒█▒▒
 175, -- ████▒█▒█
  32, -- ▒▒▒▒▒█▒▒
  36  -- ▒▒█▒▒█▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉg"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."$⁴レ⁴ に $"

--104 'h' laced
poke(0x5600+(8* 104),
  85, -- █▒█▒█▒█▒
   4, -- ▒▒█▒▒▒▒▒
 245, -- █▒█▒████
   4, -- ▒▒█▒▒▒▒▒
  85, -- █▒█▒█▒█▒
  64, -- ▒▒▒▒▒▒█▒
  95, -- █████▒█▒
  64  -- ▒▒▒▒▒▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉh"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U⁴レ⁴U@_@"

--105 'i' puppytooth
poke(0x5600+(8* 105),
  34, -- ▒█▒▒▒█▒▒
 238, -- ▒███▒███
 119, -- ███▒███▒
  68, -- ▒▒█▒▒▒█▒
  34, -- ▒█▒▒▒█▒▒
 238, -- ▒███▒███
 119, -- ███▒███▒
  68  -- ▒▒█▒▒▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉi"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\"モwD\"モwD"
--fillp(47133)

--106 'j' houndstooth
poke(0x5600+(8* 106),
  96, -- ▒▒▒▒▒██▒
  48, -- ▒▒▒▒██▒▒
  24, -- ▒▒▒██▒▒▒
 123, -- ██▒████▒
 249, -- █▒▒█████
 252, -- ▒▒██████
 126, -- ▒██████▒
  72  -- ▒▒▒█▒▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉj"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."`0「{ンュ~H"

--107 'k' gingham
poke(0x5600+(8* 107),
 160, -- ▒▒▒▒▒█▒█
  80, -- ▒▒▒▒█▒█▒
 160, -- ▒▒▒▒▒█▒█
 245, -- █▒█▒████
 250, -- ▒█▒█████
 245, -- █▒█▒████
 250, -- ▒█▒█████
  80  -- ▒▒▒▒█▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉk"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."きPきレッレッP"

--108 'l' plaid
poke(0x5600+(8* 108),
 160, -- ▒▒▒▒▒█▒█
  80, -- ▒▒▒▒█▒█▒
 160, -- ▒▒▒▒▒█▒█
  95, -- █████▒█▒
 175, -- ████▒█▒█
  95, -- █████▒█▒
 175, -- ████▒█▒█
  80  -- ▒▒▒▒█▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉl"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."きPき_に_にP"

--109 'm' tartan
poke(0x5600+(8* 109),
 176, -- ▒▒▒▒██▒█
 176, -- ▒▒▒▒██▒█
 176, -- ▒▒▒▒██▒█
 255, -- ████████
 255, -- ████████
 176, -- ▒▒▒▒██▒█
 255, -- ████████
 176  -- ▒▒▒▒██▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉm"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ぬぬぬ◝◝ぬ◝ぬ"