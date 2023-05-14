--symbols - 8x8.me fill patterns (pico-8)
--public domain (cc0) by aced

--setup custom font as 8x8px
poke(0x5600,8,8,8,0,0)

--97 'a' love
poke(0x5600+(8* 97),
  34, -- ▒█▒▒▒█▒▒
  20, -- ▒▒█▒█▒▒▒
 170, -- ▒█▒█▒█▒█
  65, -- █▒▒▒▒▒█▒
  34, -- ▒█▒▒▒█▒▒
  20, -- ▒▒█▒█▒▒▒
 170, -- ▒█▒█▒█▒█
  65  -- █▒▒▒▒▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\"⁘ちA\"⁘ちA"

--98 'b' heart
poke(0x5600+(8* 98),
   0, -- ▒▒▒▒▒▒▒▒
  54, -- ▒██▒██▒▒
  73, -- █▒▒█▒▒█▒
  65, -- █▒▒▒▒▒█▒
  34, -- ▒█▒▒▒█▒▒
  20, -- ▒▒█▒█▒▒▒
   8, -- ▒▒▒█▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉb"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."6IA\"⁘⁸\0"

--99 'c' heartmini
poke(0x5600+(8* 99),
  85, -- █▒█▒█▒█▒
 119, -- ███▒███▒
  34, -- ▒█▒▒▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
 119, -- ███▒███▒
  34, -- ▒█▒▒▒█▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉc"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."Uw\"\0Uw\"\0"
--fillp(20927)

--100 'd' anchor
poke(0x5600+(8* 100),
   0, -- ▒▒▒▒▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  20, -- ▒▒█▒█▒▒▒
   8, -- ▒▒▒█▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  73, -- █▒▒█▒▒█▒
  62, -- ▒█████▒▒
   8  -- ▒▒▒█▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉd"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0⁸⁘⁸⁸I>⁸"

--101 'e' crossbones
poke(0x5600+(8* 101),
  34, -- ▒█▒▒▒█▒▒
  99, -- ██▒▒▒██▒
  20, -- ▒▒█▒█▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  20, -- ▒▒█▒█▒▒▒
  99, -- ██▒▒▒██▒
  34, -- ▒█▒▒▒█▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉe"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\"c⁘⁸⁘c\"\0"

--102 'f' cross
poke(0x5600+(8* 102),
   0, -- ▒▒▒▒▒▒▒▒
  24, -- ▒▒▒██▒▒▒
  24, -- ▒▒▒██▒▒▒
 126, -- ▒██████▒
 126, -- ▒██████▒
  24, -- ▒▒▒██▒▒▒
  24, -- ▒▒▒██▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉf"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0「「~~「「\0"

--103 'g' crossmini
poke(0x5600+(8* 103),
  34, -- ▒█▒▒▒█▒▒
 119, -- ███▒███▒
  34, -- ▒█▒▒▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
  34, -- ▒█▒▒▒█▒▒
 119, -- ███▒███▒
  34, -- ▒█▒▒▒█▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉg"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\"w\"\0\"w\"\0"
--fillp(45503)

--104 'h' amongi
poke(0x5600+(8* 104),
  14, -- ▒███▒▒▒▒
   3, -- ██▒▒▒▒▒▒
  15, -- ████▒▒▒▒
  10, -- ▒█▒█▒▒▒▒
 224, -- ▒▒▒▒▒███
  48, -- ▒▒▒▒██▒▒
 240, -- ▒▒▒▒████
 160  -- ▒▒▒▒▒█▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ᵉ³ᶠ\nナ0ユき"