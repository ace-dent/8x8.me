--other - 8x8.me fill patterns (pico-8)
--public domain (cc0) by aced

--setup custom font as 8x8px
poke(0x5600,8,8,8,0,0)

--97 'a' chain
poke(0x5600+(8* 97),
   8, -- ▒▒▒█▒▒▒▒
  20, -- ▒▒█▒█▒▒▒
  20, -- ▒▒█▒█▒▒▒
   8, -- ▒▒▒█▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  20, -- ▒▒█▒█▒▒▒
  20, -- ▒▒█▒█▒▒▒
   8  -- ▒▒▒█▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."⁸⁘⁘⁸⁸⁘⁘⁸"

--98 'b' chainlarge
poke(0x5600+(8* 98),
   8, -- ▒▒▒█▒▒▒▒
  28, -- ▒▒███▒▒▒
  42, -- ▒█▒█▒█▒▒
  34, -- ▒█▒▒▒█▒▒
  34, -- ▒█▒▒▒█▒▒
  42, -- ▒█▒█▒█▒▒
  28, -- ▒▒███▒▒▒
   8  -- ▒▒▒█▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉb"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."⁸、*\"\"*、⁸"