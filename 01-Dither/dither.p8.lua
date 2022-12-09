--dither - 8x8.me fill patterns
--public domain (cc0) by aced

--setup custom font as 8x8px
poke(0x5600,8,8,8,0,0)

--97 'a' bayerdither00
poke(0x5600+(8* 97),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0\0\0\0\0\0\0"
--fillp(65535)

--98 'b' bayerdither01
poke(0x5600+(8* 98),
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉb"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."■\0\0\0■\0\0\0"
--fillp(32767)

--99 'c' bayerdither02
poke(0x5600+(8* 99),
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  68, -- ▒▒█▒▒▒█▒
   0, -- ▒▒▒▒▒▒▒▒
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  68, -- ▒▒█▒▒▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉc"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."■\0D\0■\0D\0"
--fillp(32735)

--100 'd' bayerdither03
poke(0x5600+(8* 100),
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
   0, -- ▒▒▒▒▒▒▒▒
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉd"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."■\0U\0■\0U\0"
--fillp(32607)

--101 'e' bayerdither04
poke(0x5600+(8* 101),
  85, -- █▒█▒█▒█▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉe"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U\0U\0U\0U\0"
--fillp(24415)

--102 'f' bayerdither05
poke(0x5600+(8* 102),
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
   0, -- ▒▒▒▒▒▒▒▒
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉf"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U\"U\0U\"U\0"
--fillp(23391)

--103 'g' bayerdither06
poke(0x5600+(8* 103),
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
 136, -- ▒▒▒█▒▒▒█
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
 136  -- ▒▒▒█▒▒▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉg"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U\"U☉U\"U☉"
--fillp(23390)

--104 'h' bayerdither07
poke(0x5600+(8* 104),
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
 170  -- ▒█▒█▒█▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉh"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U\"UちU\"Uち"
--fillp(23386)

--105 'i' bayerdither08
poke(0x5600+(8* 105),
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 170  -- ▒█▒█▒█▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉi"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."UちUちUちUち"
--fillp(23130)

--106 'j' bayerdither09
poke(0x5600+(8* 106),
  85, -- █▒█▒█▒█▒
 187, -- ██▒███▒█
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 187, -- ██▒███▒█
  85, -- █▒█▒█▒█▒
 170  -- ▒█▒█▒█▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉj"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."UめUちUめUち"
--fillp(21082)

--107 'k' bayerdither10
poke(0x5600+(8* 107),
  85, -- █▒█▒█▒█▒
 187, -- ██▒███▒█
  85, -- █▒█▒█▒█▒
 238, -- ▒███▒███
  85, -- █▒█▒█▒█▒
 187, -- ██▒███▒█
  85, -- █▒█▒█▒█▒
 238  -- ▒███▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉk"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."UめUモUめUモ"
--fillp(21080)

--108 'l' bayerdither11
poke(0x5600+(8* 108),
  85, -- █▒█▒█▒█▒
 187, -- ██▒███▒█
  85, -- █▒█▒█▒█▒
 255, -- ████████
  85, -- █▒█▒█▒█▒
 187, -- ██▒███▒█
  85, -- █▒█▒█▒█▒
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉl"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."UめU◝UめU◝"
--fillp(21072)

--109 'm' bayerdither12
poke(0x5600+(8* 109),
  85, -- █▒█▒█▒█▒
 255, -- ████████
  85, -- █▒█▒█▒█▒
 255, -- ████████
  85, -- █▒█▒█▒█▒
 255, -- ████████
  85, -- █▒█▒█▒█▒
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉm"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U◝U◝U◝U◝"
--fillp(20560)

--110 'n' bayerdither13
poke(0x5600+(8* 110),
 119, -- ███▒███▒
 255, -- ████████
  85, -- █▒█▒█▒█▒
 255, -- ████████
 119, -- ███▒███▒
 255, -- ████████
  85, -- █▒█▒█▒█▒
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉn"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."w◝U◝w◝U◝"
--fillp(4176)

--111 'o' bayerdither14
poke(0x5600+(8* 111),
 119, -- ███▒███▒
 255, -- ████████
 221, -- █▒███▒██
 255, -- ████████
 119, -- ███▒███▒
 255, -- ████████
 221, -- █▒███▒██
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉo"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."w◝ツ◝w◝ツ◝"
--fillp(4160)

--112 'p' bayerdither15
poke(0x5600+(8* 112),
 119, -- ███▒███▒
 255, -- ████████
 255, -- ████████
 255, -- ████████
 119, -- ███▒███▒
 255, -- ████████
 255, -- ████████
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉp"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."w◝◝◝w◝◝◝"
--fillp(4096)

--113 'q' bayerdither16
poke(0x5600+(8* 113),
 255, -- ████████
 255, -- ████████
 255, -- ████████
 255, -- ████████
 255, -- ████████
 255, -- ████████
 255, -- ████████
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉq"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."◝◝◝◝◝◝◝◝"
--fillp(0)

--65 'A' officedither05
poke(0x5600+(8* 65),
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  64, -- ▒▒▒▒▒▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉA"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\0⁴\0\0\0@\0"

--66 'B' officedither10
poke(0x5600+(8* 66),
  64, -- ▒▒▒▒▒▒█▒
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  64, -- ▒▒▒▒▒▒█▒
   0, -- ▒▒▒▒▒▒▒▒
   4, -- ▒▒█▒▒▒▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉB"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."@\0⁴\0@\0⁴\0"

--67 'C' officedither20
poke(0x5600+(8* 67),
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  68, -- ▒▒█▒▒▒█▒
   0, -- ▒▒▒▒▒▒▒▒
  17, -- █▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  68, -- ▒▒█▒▒▒█▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉC"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."■\0D\0■\0D\0"
--fillp(32735)

--68 'D' officedither25
poke(0x5600+(8* 68),
  68, -- ▒▒█▒▒▒█▒
  17, -- █▒▒▒█▒▒▒
  68, -- ▒▒█▒▒▒█▒
  17, -- █▒▒▒█▒▒▒
  68, -- ▒▒█▒▒▒█▒
  17, -- █▒▒▒█▒▒▒
  68, -- ▒▒█▒▒▒█▒
  17  -- █▒▒▒█▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉD"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."D■D■D■D■"
--fillp(55255)

--69 'E' officedither30
poke(0x5600+(8* 69),
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
 136, -- ▒▒▒█▒▒▒█
  85, -- █▒█▒█▒█▒
  34, -- ▒█▒▒▒█▒▒
  85, -- █▒█▒█▒█▒
 136  -- ▒▒▒█▒▒▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉE"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U\"U☉U\"U☉"
--fillp(23390)

--70 'F' officedither40
poke(0x5600+(8* 70),
  85, -- █▒█▒█▒█▒
  42, -- ▒█▒█▒█▒▒
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 162, -- ▒█▒▒▒█▒█
  85, -- █▒█▒█▒█▒
 170  -- ▒█▒█▒█▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉF"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."U*UちUけUち"

--71 'G' officedither50
poke(0x5600+(8* 71),
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 170, -- ▒█▒█▒█▒█
  85, -- █▒█▒█▒█▒
 170  -- ▒█▒█▒█▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉG"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."UちUちUちUち"
--fillp(23130)

--72 'H' officedither60
poke(0x5600+(8* 72),
 119, -- ███▒███▒
 170, -- ▒█▒█▒█▒█
 221, -- █▒███▒██
 170, -- ▒█▒█▒█▒█
 119, -- ███▒███▒
 170, -- ▒█▒█▒█▒█
 221, -- █▒███▒██
 170  -- ▒█▒█▒█▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉH"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."wちツちwちツち"
--fillp(6730)

--73 'I' officedither70
poke(0x5600+(8* 73),
 187, -- ██▒███▒█
 238, -- ▒███▒███
 187, -- ██▒███▒█
 238, -- ▒███▒███
 187, -- ██▒███▒█
 238, -- ▒███▒███
 187, -- ██▒███▒█
 238  -- ▒███▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉI"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."めモめモめモめモ"
--fillp(10280)

--74 'J' officedither75
poke(0x5600+(8* 74),
 187, -- ██▒███▒█
 255, -- ████████
 238, -- ▒███▒███
 255, -- ████████
 187, -- ██▒███▒█
 255, -- ████████
 238, -- ▒███▒███
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉJ"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."め◝モ◝め◝モ◝"
--fillp(8320)

--75 'K' officedither80
poke(0x5600+(8* 75),
 223, -- █████▒██
 255, -- ████████
 253, -- █▒██████
 255, -- ████████
 223, -- █████▒██
 255, -- ████████
 253, -- █▒██████
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉK"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ト◝ョ◝ト◝ョ◝"

--76 'L' officedither90
poke(0x5600+(8* 76),
 255, -- ████████
 255, -- ████████
 251, -- ██▒█████
 255, -- ████████
 255, -- ████████
 255, -- ████████
 191, -- ██████▒█
 255  -- ████████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉL"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."◝◝ャ◝◝◝よ◝"