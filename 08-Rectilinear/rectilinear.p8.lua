--rectilinear - 8x8.me fill patterns (pico-8)
--public domain (cc0) by aced

--setup custom font as 8x8px
poke(0x5600,8,8,8,0,0)

--97 'a' squaremicro
poke(0x5600+(8* 97),
   0, -- ▒▒▒▒▒▒▒▒
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0ff\0\0ff\0"
--fillp(63903)

--98 'b' squaremicrooffset
poke(0x5600+(8* 98),
   0, -- ▒▒▒▒▒▒▒▒
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 153, -- █▒▒██▒▒█
 153, -- █▒▒██▒▒█
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉb"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0ff\0\0▥▥\0"

--99 'c' squareminihighlight
poke(0x5600+(8* 99),
 119, -- ███▒███▒
  17, -- █▒▒▒█▒▒▒
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
  17, -- █▒▒▒█▒▒▒
  17, -- █▒▒▒█▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉc"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."w■■\0w■■\0"
--fillp(6015)

--100 'd' squaremini
poke(0x5600+(8* 100),
 119, -- ███▒███▒
  85, -- █▒█▒█▒█▒
 119, -- ███▒███▒
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
  85, -- █▒█▒█▒█▒
 119, -- ███▒███▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉd"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."wUw\0wUw\0"
--fillp(5407)

--101 'e' squareminioffset
poke(0x5600+(8* 101),
 119, -- ███▒███▒
  85, -- █▒█▒█▒█▒
 119, -- ███▒███▒
   0, -- ▒▒▒▒▒▒▒▒
 221, -- █▒███▒██
  85, -- █▒█▒█▒█▒
 221, -- █▒███▒██
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉe"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."wUw\0ツUツ\0"

--102 'f' squareminisolid
poke(0x5600+(8* 102),
 119, -- ███▒███▒
 119, -- ███▒███▒
 119, -- ███▒███▒
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
 119, -- ███▒███▒
 119, -- ███▒███▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉf"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."www\0www\0"
--fillp(4383)

--103 'g' squareminisolidoffset
poke(0x5600+(8* 103),
 119, -- ███▒███▒
 119, -- ███▒███▒
 119, -- ███▒███▒
   0, -- ▒▒▒▒▒▒▒▒
 221, -- █▒███▒██
 221, -- █▒███▒██
 221, -- █▒███▒██
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉg"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."www\0ツツツ\0"

--104 'h' billetminihighlight
poke(0x5600+(8* 104),
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
  17, -- █▒▒▒█▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉh"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0w■\0\0w■\0"
--fillp(61823)

--105 'i' billetmini
poke(0x5600+(8* 105),
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
 119, -- ███▒███▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
 119, -- ███▒███▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉi"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0ww\0\0ww\0"
--fillp(61727)

--106 'j' billetverticalmini
poke(0x5600+(8* 106),
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
   0, -- ▒▒▒▒▒▒▒▒
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉj"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."fff\0fff\0"
--fillp(39327)

--107 'k' square
poke(0x5600+(8* 107),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  60, -- ▒▒████▒▒
  36, -- ▒▒█▒▒█▒▒
  36, -- ▒▒█▒▒█▒▒
  60, -- ▒▒████▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉk"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0<$$<\0\0"

--108 'l' squaresolid
poke(0x5600+(8* 108),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉl"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0<<<<\0\0"

--109 'm' squareshaded
poke(0x5600+(8* 109),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  20, -- ▒▒█▒█▒▒▒
  40, -- ▒▒▒█▒█▒▒
  20, -- ▒▒█▒█▒▒▒
  40, -- ▒▒▒█▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉm"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0⁘(⁘(\0\0"

--110 'n' squarelarge
poke(0x5600+(8* 110),
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
  66, -- ▒█▒▒▒▒█▒
  66, -- ▒█▒▒▒▒█▒
  66, -- ▒█▒▒▒▒█▒
  66, -- ▒█▒▒▒▒█▒
 126, -- ▒██████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉn"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0~BBBB~\0"

--111 'o' squarelargemedium
poke(0x5600+(8* 111),
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
 126, -- ▒██████▒
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
 126, -- ▒██████▒
 126, -- ▒██████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉo"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0~~ff~~\0"

--112 'p' squarelargesolid
poke(0x5600+(8* 112),
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
 126, -- ▒██████▒
 126, -- ▒██████▒
 126, -- ▒██████▒
 126, -- ▒██████▒
 126, -- ▒██████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉp"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0~~~~~~\0"

--113 'q' squarelargeshaded
poke(0x5600+(8* 113),
   0, -- ▒▒▒▒▒▒▒▒
  42, -- ▒█▒█▒█▒▒
  84, -- ▒▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
  84, -- ▒▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
  84, -- ▒▒█▒█▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉq"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0*T*T*T\0"

--114 'r' squarexl
poke(0x5600+(8* 114),
 127, -- ███████▒
  65, -- █▒▒▒▒▒█▒
  65, -- █▒▒▒▒▒█▒
  65, -- █▒▒▒▒▒█▒
  65, -- █▒▒▒▒▒█▒
  65, -- █▒▒▒▒▒█▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉr"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○AAAAA○\0"

--115 's' squarexlmedium
poke(0x5600+(8* 115),
 127, -- ███████▒
 127, -- ███████▒
  99, -- ██▒▒▒██▒
  99, -- ██▒▒▒██▒
  99, -- ██▒▒▒██▒
 127, -- ███████▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉs"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○○ccc○○\0"

--116 't' squarexlsolid
poke(0x5600+(8* 116),
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉt"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○○○○○○○\0"

--117 'u' squarexlshaded
poke(0x5600+(8* 117),
  85, -- █▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
  85, -- █▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
  85, -- █▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
  85, -- █▒█▒█▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉu"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U*U*U*U\0"

--118 'v' rectangle
poke(0x5600+(8* 118),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  62, -- ▒█████▒▒
  34, -- ▒█▒▒▒█▒▒
  34, -- ▒█▒▒▒█▒▒
  62, -- ▒█████▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉv"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0>\"\">\0\0"

--119 'w' rectanglesolid
poke(0x5600+(8* 119),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  62, -- ▒█████▒▒
  62, -- ▒█████▒▒
  62, -- ▒█████▒▒
  62, -- ▒█████▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉw"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0>>>>\0\0"

--120 'x' rectanglelarge
poke(0x5600+(8* 120),
   0, -- ▒▒▒▒▒▒▒▒
 127, -- ███████▒
  65, -- █▒▒▒▒▒█▒
  65, -- █▒▒▒▒▒█▒
  65, -- █▒▒▒▒▒█▒
  65, -- █▒▒▒▒▒█▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉx"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0○AAAA○\0"

--121 'y' rectanglelargemedium
poke(0x5600+(8* 121),
   0, -- ▒▒▒▒▒▒▒▒
 127, -- ███████▒
 127, -- ███████▒
  99, -- ██▒▒▒██▒
  99, -- ██▒▒▒██▒
 127, -- ███████▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉy"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0○○cc○○\0"

--122 'z' rectanglelargesolid
poke(0x5600+(8* 122),
   0, -- ▒▒▒▒▒▒▒▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉz"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0○○○○○○\0"

--48 '0' billet
poke(0x5600+(8* 48),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
  66, -- ▒█▒▒▒▒█▒
  66, -- ▒█▒▒▒▒█▒
 126, -- ▒██████▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ0"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0~BB~\0\0"

--49 '1' billetsolid
poke(0x5600+(8* 49),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
 126, -- ▒██████▒
 126, -- ▒██████▒
 126, -- ▒██████▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ1"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0~~~~\0\0"

--50 '2' billetshaded
poke(0x5600+(8* 50),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  84, -- ▒▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
  84, -- ▒▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ2"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0T*T*\0\0"

--51 '3' billetvertical
poke(0x5600+(8* 51),
   0, -- ▒▒▒▒▒▒▒▒
  60, -- ▒▒████▒▒
  36, -- ▒▒█▒▒█▒▒
  36, -- ▒▒█▒▒█▒▒
  36, -- ▒▒█▒▒█▒▒
  36, -- ▒▒█▒▒█▒▒
  60, -- ▒▒████▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ3"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0<$$$$<\0"

--52 '4' billetverticalsolid
poke(0x5600+(8* 52),
   0, -- ▒▒▒▒▒▒▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
  60, -- ▒▒████▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ4"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0<<<<<<\0"

--53 '5' billetverticalshaded
poke(0x5600+(8* 53),
   0, -- ▒▒▒▒▒▒▒▒
  40, -- ▒▒▒█▒█▒▒
  20, -- ▒▒█▒█▒▒▒
  40, -- ▒▒▒█▒█▒▒
  20, -- ▒▒█▒█▒▒▒
  40, -- ▒▒▒█▒█▒▒
  20, -- ▒▒█▒█▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ5"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0(⁘(⁘(⁘\0"

--54 '6' waffle
poke(0x5600+(8* 54),
 255, -- ████████
   1, -- █▒▒▒▒▒▒▒
   1, -- █▒▒▒▒▒▒▒
 121, -- █▒▒████▒
 121, -- █▒▒████▒
 121, -- █▒▒████▒
 121, -- █▒▒████▒
   1  -- █▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ6"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."◝¹¹yyyy¹"

--55 '7' tile
poke(0x5600+(8* 55),
 127, -- ███████▒
  65, -- █▒▒▒▒▒█▒
 125, -- █▒█████▒
 125, -- █▒█████▒
 125, -- █▒█████▒
 125, -- █▒█████▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ7"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○A}}}}○\0"

--56 '8' tileshaded
poke(0x5600+(8* 56),
 127, -- ███████▒
  85, -- █▒█▒█▒█▒
 107, -- ██▒█▒██▒
  85, -- █▒█▒█▒█▒
 107, -- ██▒█▒██▒
  85, -- █▒█▒█▒█▒
 127, -- ███████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ8"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○UkUkU○\0"

--57 '9' illuminated
poke(0x5600+(8* 57),
  31, -- █████▒▒▒
  63, -- ██████▒▒
  95, -- █████▒█▒
  63, -- ██████▒▒
  95, -- █████▒█▒
  42, -- ▒█▒█▒█▒▒
  84, -- ▒▒█▒█▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ9"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."゜?_?_*T\0"

--65 'A' block
poke(0x5600+(8* 65),
 126, -- ▒██████▒
  61, -- █▒████▒▒
   3, -- ██▒▒▒▒▒▒
  27, -- ██▒██▒▒▒
  27, -- ██▒██▒▒▒
   3, -- ██▒▒▒▒▒▒
   1, -- █▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉA"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."~=³••³¹\0"

--66 'B' blockpyramid
poke(0x5600+(8* 66),
 127, -- ███████▒
  62, -- ▒█████▒▒
  29, -- █▒███▒▒▒
  10, -- ▒█▒█▒▒▒▒
  21, -- █▒█▒█▒▒▒
  34, -- ▒█▒▒▒█▒▒
  65, -- █▒▒▒▒▒█▒
 128  -- ▒▒▒▒▒▒▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉB"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○>。\n‖\"A█"
