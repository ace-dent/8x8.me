--nature - 8x8.me fill patterns (pico-8)
--public domain (cc0) by aced

--setup custom font as 8x8px
poke(0x5600,8,8,8,0,0)

--97 'a' scalessparse
poke(0x5600+(8* 97),
  62, -- ▒█████▒▒
 156, -- ▒▒███▒▒█
 193, -- █▒▒▒▒▒██
 227, -- ██▒▒▒███
 227, -- ██▒▒▒███
 201, -- █▒▒█▒▒██
  28, -- ▒▒███▒▒▒
  62  -- ▒█████▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶."..">うりネネゃ、>"

--98 'b' scales
poke(0x5600+(8* 98),
 127, -- ███████▒
 190, -- ▒█████▒█
 193, -- █▒▒▒▒▒██
 247, -- ███▒████
 247, -- ███▒████
 235, -- ██▒█▒███
  28, -- ▒▒███▒▒▒
 127  -- ███████▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉb"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○ゆりワワミ、○"

--99 'c' scallop
poke(0x5600+(8* 99),
  99, -- ██▒▒▒██▒
 190, -- ▒█████▒█
  65, -- █▒▒▒▒▒█▒
 213, -- █▒█▒█▒██
  54, -- ▒██▒██▒▒
 235, -- ██▒█▒███
  20, -- ▒▒█▒█▒▒▒
  93  -- █▒███▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉc"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."cゆAコ6ミ⁘]"

--100 'd' scaleslargedexter
poke(0x5600+(8* 100),
 254, -- ▒███████
 254, -- ▒███████
 254, -- ▒███████
 253, -- █▒██████
 253, -- █▒██████
 251, -- ██▒█████
 229, -- █▒█▒▒███
  30  -- ▒████▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉd"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."◜◜◜ョョャハ゛"

--101 'e' scaleslargesinister
poke(0x5600+(8* 101),
 127, -- ███████▒
 127, -- ███████▒
 127, -- ███████▒
 191, -- ██████▒█
 191, -- ██████▒█
 223, -- █████▒██
 167, -- ███▒▒█▒█
 120  -- ▒▒▒████▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉe"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○○○よよトせx"

--102 'f' papillon
poke(0x5600+(8* 102),
 112, -- ▒▒▒▒███▒
 252, -- ▒▒██████
 254, -- ▒███████
 190, -- ▒█████▒█
 111, -- ████▒██▒
  95, -- █████▒█▒
  55, -- ███▒██▒▒
  14  -- ▒███▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉf"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."pュ◜ゆo_7ᵉ"

--103 'g' loam
poke(0x5600+(8* 103),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  64, -- ▒▒▒▒▒▒█▒
   0, -- ▒▒▒▒▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉg"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0⁴\0@\0⁸\0"

--104 'h' sand
poke(0x5600+(8* 104),
   0, -- ▒▒▒▒▒▒▒▒
   1, -- █▒▒▒▒▒▒▒
   2, -- ▒█▒▒▒▒▒▒
  16, -- ▒▒▒▒█▒▒▒
  32, -- ▒▒▒▒▒█▒▒
   2, -- ▒█▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
  64  -- ▒▒▒▒▒▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉh"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0¹²▮ ²⁴@"

--105 'i' patch
poke(0x5600+(8* 105),
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  64, -- ▒▒▒▒▒▒█▒
  34, -- ▒█▒▒▒█▒▒
   4, -- ▒▒█▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉi"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0⁴⁸\0@\"⁴\0"

--106 'j' divot
poke(0x5600+(8* 106),
   2, -- ▒█▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   2, -- ▒█▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  64, -- ▒▒▒▒▒▒█▒
  32, -- ▒▒▒▒▒█▒▒
  64, -- ▒▒▒▒▒▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉj"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."²⁴²\0@ @\0"

--107 'k' grass
poke(0x5600+(8* 107),
   0, -- ▒▒▒▒▒▒▒▒
  80, -- ▒▒▒▒█▒█▒
  32, -- ▒▒▒▒▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   5, -- █▒█▒▒▒▒▒
   2, -- ▒█▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉk"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0P \0\0⁵²\0"

--108 'l' grassmini
poke(0x5600+(8* 108),
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉl"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0U\"\0\0U\"\0"
--fillp(62911)

--109 'm' field
poke(0x5600+(8* 109),
 136, -- ▒▒▒█▒▒▒█
 170, -- ▒█▒█▒█▒█
 170, -- ▒█▒█▒█▒█
   0, -- ▒▒▒▒▒▒▒▒
  68, -- ▒▒█▒▒▒█▒
  85, -- █▒█▒█▒█▒
  85, -- █▒█▒█▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉm"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."☉ちち\0DUU\0"

--110 'n' fieldsparse
poke(0x5600+(8* 110),
 128, -- ▒▒▒▒▒▒▒█
 160, -- ▒▒▒▒▒█▒█
 160, -- ▒▒▒▒▒█▒█
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   5, -- █▒█▒▒▒▒▒
   5, -- █▒█▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉn"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."█きき\0⁴⁵⁵\0"

--111 'o' pasture
poke(0x5600+(8* 111),
   0, -- ▒▒▒▒▒▒▒▒
  10, -- ▒█▒█▒▒▒▒
  10, -- ▒█▒█▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  80, -- ▒▒▒▒█▒█▒
  85, -- █▒█▒█▒█▒
   5, -- █▒█▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉo"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\n\n\0PU⁵\0"

--112 'p' daisies
poke(0x5600+(8* 112),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   2, -- ▒█▒▒▒▒▒▒
   5, -- █▒█▒▒▒▒▒
  34, -- ▒█▒▒▒█▒▒
  80, -- ▒▒▒▒█▒█▒
  32, -- ▒▒▒▒▒█▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉp"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0²⁵\"P \0"

--113 'q' tuffet
poke(0x5600+(8* 113),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  32, -- ▒▒▒▒▒█▒▒
  18, -- ▒█▒▒█▒▒▒
  20, -- ▒▒█▒█▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉq"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0\0\0 □⁘\0"

--114 'r' shrub
poke(0x5600+(8* 114),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  42, -- ▒█▒█▒█▒▒
  20, -- ▒▒█▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉr"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0\0⁸*⁘\0\0"

--115 's' sprout
poke(0x5600+(8* 115),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  32, -- ▒▒▒▒▒█▒▒
  50, -- ▒█▒▒██▒▒
  22, -- ▒██▒█▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉs"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0 2◀⁴\0\0"

--116 't' crop
poke(0x5600+(8* 116),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
  12, -- ▒▒██▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  99, -- ██▒▒▒██▒
  54, -- ▒██▒██▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉt"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0⁴ᶜ⁸c6\0"

--117 'u' bush
poke(0x5600+(8* 117),
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
  12, -- ▒▒██▒▒▒▒
  40, -- ▒▒▒█▒█▒▒
  51, -- ██▒▒██▒▒
  22, -- ▒██▒█▒▒▒
  20, -- ▒▒█▒█▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉu"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0⁴ᶜ(3◀⁘\0"

--118 'v' leaves
poke(0x5600+(8* 118),
   4, -- ▒▒█▒▒▒▒▒
  12, -- ▒▒██▒▒▒▒
  72, -- ▒▒▒█▒▒█▒
  96, -- ▒▒▒▒▒██▒
  32, -- ▒▒▒▒▒█▒▒
   3, -- ██▒▒▒▒▒▒
   6, -- ▒██▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉv"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."⁴ᶜH` ³⁶\0"

--119 'w' overgrowth
poke(0x5600+(8* 119),
   6, -- ▒██▒▒▒▒▒
 198, -- ▒██▒▒▒██
 236, -- ▒▒██▒███
  96, -- ▒▒▒▒▒██▒
   3, -- ██▒▒▒▒▒▒
 103, -- ███▒▒██▒
 102, -- ▒██▒▒██▒
  48  -- ▒▒▒▒██▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉw"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."⁶をム`³gf0"

--120 'x' thicket
poke(0x5600+(8* 120),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  42, -- ▒█▒█▒█▒▒
  20, -- ▒▒█▒█▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  62, -- ▒█████▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉx"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0⁸*⁘⁸>\0"

--121 'y' tree
poke(0x5600+(8* 121),
   0, -- ▒▒▒▒▒▒▒▒
   8, -- ▒▒▒█▒▒▒▒
  20, -- ▒▒█▒█▒▒▒
  42, -- ▒█▒█▒█▒▒
  20, -- ▒▒█▒█▒▒▒
  42, -- ▒█▒█▒█▒▒
   8, -- ▒▒▒█▒▒▒▒
   8  -- ▒▒▒█▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉy"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0⁸⁘*⁘*⁸⁸"

--122 'z' rocks
poke(0x5600+(8* 122),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  12, -- ▒▒██▒▒▒▒
  46, -- ▒███▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉz"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0\0\0ᶜ.\0\0"

--48 '0' mounds
poke(0x5600+(8* 48),
   6, -- ▒██▒▒▒▒▒
   9, -- █▒▒█▒▒▒▒
  96, -- ▒▒▒▒▒██▒
 144, -- ▒▒▒▒█▒▒█
   0, -- ▒▒▒▒▒▒▒▒
  12, -- ▒▒██▒▒▒▒
  18, -- ▒█▒▒█▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ0"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."⁶\t`…\0ᶜ□\0"

--49 '1' skull
poke(0x5600+(8* 49),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  28, -- ▒▒███▒▒▒
  10, -- ▒█▒█▒▒▒▒
  22, -- ▒██▒█▒▒▒
  64, -- ▒▒▒▒▒▒█▒
  32  -- ▒▒▒▒▒█▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ1"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0\0、\n◀@ "

--50 '2' skulllarge
poke(0x5600+(8* 50),
   0, -- ▒▒▒▒▒▒▒▒
  28, -- ▒▒███▒▒▒
  62, -- ▒█████▒▒
  42, -- ▒█▒█▒█▒▒
 148, -- ▒▒█▒█▒▒█
  64, -- ▒▒▒▒▒▒█▒
   2, -- ▒█▒▒▒▒▒▒
   4  -- ▒▒█▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ2"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0、>*⬆️@²⁴"

--51 '3' skullxl
poke(0x5600+(8* 51),
   0, -- ▒▒▒▒▒▒▒▒
  62, -- ▒█████▒▒
 127, -- ███████▒
 127, -- ███████▒
  73, -- █▒▒█▒▒█▒
 119, -- ███▒███▒
  62, -- ▒█████▒▒
  42  -- ▒█▒█▒█▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ3"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0>○○Iw>*"

--52 '4' bouldercracked
poke(0x5600+(8* 52),
   0, -- ▒▒▒▒▒▒▒▒
  24, -- ▒▒▒██▒▒▒
  58, -- ▒█▒███▒▒
  51, -- ██▒▒██▒▒
 116, -- ▒▒█▒███▒
  67, -- ██▒▒▒▒█▒
  25, -- █▒▒██▒▒▒
  60  -- ▒▒████▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ4"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0「:3tC」<"

--53 '5' bamboo
poke(0x5600+(8* 53),
  92, -- ▒▒███▒█▒
  44, -- ▒▒██▒█▒▒
  28, -- ▒▒███▒▒▒
  20, -- ▒▒█▒█▒▒▒
  29, -- █▒███▒▒▒
  26, -- ▒█▒██▒▒▒
  28, -- ▒▒███▒▒▒
  20  -- ▒▒█▒█▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ5"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\\,、⁘。¥、⁘"
