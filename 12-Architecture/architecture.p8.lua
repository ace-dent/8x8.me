--architecture - 8x8.me fill patterns (pico-8)
--public domain (cc0) by aced

--setup custom font as 8x8px
poke(0x5600,8,8,8,0,0)

--97 'a' brickdense
poke(0x5600+(8* 97),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
   0, -- ▒▒▒▒▒▒▒▒
 239, -- ████▒███
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
   0, -- ▒▒▒▒▒▒▒▒
 239  -- ████▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉa"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜\0ヤ\0◜\0ヤ"

--98 'b' bricknarrow
poke(0x5600+(8* 98),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
 254, -- ▒███████
   0, -- ▒▒▒▒▒▒▒▒
 251, -- ██▒█████
   0, -- ▒▒▒▒▒▒▒▒
 239, -- ████▒███
 239  -- ████▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉb"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜◜\0ャ\0ヤヤ"

--99 'c' brickwide
poke(0x5600+(8* 99),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
 254, -- ▒███████
   0, -- ▒▒▒▒▒▒▒▒
 239, -- ████▒███
 239, -- ████▒███
 239, -- ████▒███
 239  -- ████▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉc"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜◜\0ヤヤヤヤ"

--100 'd' brick
poke(0x5600+(8* 100),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
 254, -- ▒███████
 254, -- ▒███████
   0, -- ▒▒▒▒▒▒▒▒
 239, -- ████▒███
 239, -- ████▒███
 239  -- ████▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉd"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜◜◜\0ヤヤヤ"

--101 'e' brickaged
poke(0x5600+(8* 101),
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
 254, -- ▒███████
 254, -- ▒███████
   1, -- █▒▒▒▒▒▒▒
 239, -- ████▒███
 239, -- ████▒███
 231  -- ███▒▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉe"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0~◜◜¹ヤヤフ"

--102 'f' brickpointed
poke(0x5600+(8* 102),
   0, -- ▒▒▒▒▒▒▒▒
 124, -- ▒▒█████▒
 254, -- ▒███████
 124, -- ▒▒█████▒
   0, -- ▒▒▒▒▒▒▒▒
 199, -- ███▒▒▒██
 239, -- ████▒███
 199  -- ███▒▒▒██
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉf"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0|◜|\0んヤん"

--103 'g' brickshaded
poke(0x5600+(8* 103),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
 170, -- ▒█▒█▒█▒█
  86, -- ▒██▒█▒█▒
   0, -- ▒▒▒▒▒▒▒▒
 239, -- ████▒███
 170, -- ▒█▒█▒█▒█
 101  -- █▒█▒▒██▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉg"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜ちV\0ヤちe"

--104 'h' brickrelief
poke(0x5600+(8* 104),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
 126, -- ▒██████▒
   2, -- ▒█▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 239, -- ████▒███
 231, -- ███▒▒███
  32  -- ▒▒▒▒▒█▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉh"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜~²\0ヤフ "

--105 'i' bricksparse
poke(0x5600+(8* 105),
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
 126, -- ▒██████▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 231, -- ███▒▒███
 231, -- ███▒▒███
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉi"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0~~\0\0フフ\0"

--106 'j' bricksparseshaded
poke(0x5600+(8* 106),
   0, -- ▒▒▒▒▒▒▒▒
 126, -- ▒██████▒
  42, -- ▒█▒█▒█▒▒
   0, -- ▒▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 231, -- ███▒▒███
 162, -- ▒█▒▒▒█▒█
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉj"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0~*\0\0フけ\0"

--107 'k' brickhighlights
poke(0x5600+(8* 107),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
   2, -- ▒█▒▒▒▒▒▒
   2, -- ▒█▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 239, -- ████▒███
  32, -- ▒▒▒▒▒█▒▒
  32  -- ▒▒▒▒▒█▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉk"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜²²\0ヤ  "

--108 'l' mortar
poke(0x5600+(8* 108),
 187, -- ██▒███▒█
   1, -- █▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   1, -- █▒▒▒▒▒▒▒
 187, -- ██▒███▒█
  16, -- ▒▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  16  -- ▒▒▒▒█▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉl"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."め¹\0¹め▮\0▮"

--109 'm' mortarlight
poke(0x5600+(8* 109),
 170, -- ▒█▒█▒█▒█
   1, -- █▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   1, -- █▒▒▒▒▒▒▒
 170, -- ▒█▒█▒█▒█
  16, -- ▒▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  16  -- ▒▒▒▒█▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉm"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ち¹\0¹ち▮\0▮"

--110 'n' mortaraged
poke(0x5600+(8* 110),
 196, -- ▒▒█▒▒▒██
   1, -- █▒▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
   1, -- █▒▒▒▒▒▒▒
 166, -- ▒██▒▒█▒█
  16, -- ▒▒▒▒█▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
  16  -- ▒▒▒▒█▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉn"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ろ¹\0¹す▮\0▮"

--111 'o' brickvertical
poke(0x5600+(8* 111),
 224, -- ▒▒▒▒▒███
 238, -- ▒███▒███
 238, -- ▒███▒███
 238, -- ▒███▒███
  14, -- ▒███▒▒▒▒
 238, -- ▒███▒███
 238, -- ▒███▒███
 238  -- ▒███▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉo"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ナモモモᵉモモモ"

--112 'p' bricksinister
poke(0x5600+(8* 112),
 239, -- ████▒███
 247, -- ███▒████
 251, -- ██▒█████
 253, -- █▒██████
 250, -- ▒█▒█████
 119, -- ███▒███▒
 175, -- ████▒█▒█
 223  -- █████▒██
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉp"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ヤワャョッwにト"

--113 'q' bricksinisterrounded
poke(0x5600+(8* 113),
 239, -- ████▒███
 247, -- ███▒████
 251, -- ██▒█████
 253, -- █▒██████
 248, -- ▒▒▒█████
 119, -- ███▒███▒
 143, -- ████▒▒▒█
 223  -- █████▒██
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉq"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ヤワャョヲw◆ト"

--114 'r' bricksinistermini
poke(0x5600+(8* 114),
 170, -- ▒█▒█▒█▒█
 221, -- █▒███▒██
 238, -- ▒███▒███
 119, -- ███▒███▒
 170, -- ▒█▒█▒█▒█
 221, -- █▒███▒██
 238, -- ▒███▒███
 119  -- ███▒███▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉr"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ちツモwちツモw"
--fillp(42113)

--115 's' brickmini
poke(0x5600+(8* 115),
   0, -- ▒▒▒▒▒▒▒▒
 221, -- █▒███▒██
   0, -- ▒▒▒▒▒▒▒▒
 119, -- ███▒███▒
   0, -- ▒▒▒▒▒▒▒▒
 221, -- █▒███▒██
   0, -- ▒▒▒▒▒▒▒▒
 119  -- ███▒███▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉs"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0ツ\0w\0ツ\0w"
--fillp(62705)

--116 't' brickminidamage
poke(0x5600+(8* 116),
   0, -- ▒▒▒▒▒▒▒▒
 157, -- █▒███▒▒█
   0, -- ▒▒▒▒▒▒▒▒
  71, -- ███▒▒▒█▒
   0, -- ▒▒▒▒▒▒▒▒
 221, -- █▒███▒██
   0, -- ▒▒▒▒▒▒▒▒
 119  -- ███▒███▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉt"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0え\0G\0ツ\0w"

--117 'u' brickminiruins
poke(0x5600+(8* 117),
   0, -- ▒▒▒▒▒▒▒▒
 157, -- █▒███▒▒█
   0, -- ▒▒▒▒▒▒▒▒
   2, -- ▒█▒▒▒▒▒▒
   0, -- ▒▒▒▒▒▒▒▒
 216, -- ▒▒▒██▒██
   0, -- ▒▒▒▒▒▒▒▒
 112  -- ▒▒▒▒███▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉu"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0え\0²\0ス\0p"

--118 'v' stonewall
poke(0x5600+(8* 118),
  14, -- ▒███▒▒▒▒
 230, -- ▒██▒▒███
 240, -- ▒▒▒▒████
 102, -- ▒██▒▒██▒
  15, -- ████▒▒▒▒
  95, -- █████▒█▒
 206, -- ▒███▒▒██
 224  -- ▒▒▒▒▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉv"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."ᵉヒユfᶠ_ウナ"

--119 'w' quarrywall
poke(0x5600+(8* 119),
 131, -- ██▒▒▒▒▒█
 120, -- ▒▒▒████▒
 254, -- ▒███████
 254, -- ▒███████
 124, -- ▒▒█████▒
   3, -- ██▒▒▒▒▒▒
 247, -- ███▒████
 239  -- ████▒███
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉw"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."⬇️x◜◜|³ワヤ"

--120 'x' stoneblock
poke(0x5600+(8* 120),
 128, -- ▒▒▒▒▒▒▒█
 117, -- █▒█▒███▒
 250, -- ▒█▒█████
 254, -- ▒███████
 254, -- ▒███████
 126, -- ▒██████▒
 190, -- ▒█████▒█
  84  -- ▒▒█▒█▒█▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉx"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."█uッ◜◜~ゆT"

--121 'y' flagstone
poke(0x5600+(8* 121),
 123, -- ██▒████▒
 123, -- ██▒████▒
   3, -- ██▒▒▒▒▒▒
 104, -- ▒▒▒█▒██▒
 111, -- ████▒██▒
 111, -- ████▒██▒
   7, -- ███▒▒▒▒▒
 112  -- ▒▒▒▒███▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉy"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."{{³hoo⁷p"

--122 'z' pavingstones
poke(0x5600+(8* 122),
 118, -- ▒██▒███▒
 185, -- █▒▒███▒█
 155, -- ██▒██▒▒█
 103, -- ███▒▒██▒
 230, -- ▒██▒▒███
 217, -- █▒▒██▒██
 157, -- █▒███▒▒█
 110  -- ▒███▒██▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉz"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."vみいgヒセえn"

--48 '0' shingle
poke(0x5600+(8* 48),
  63, -- ██████▒▒
 222, -- ▒████▒██
 237, -- █▒██▒███
 243, -- ██▒▒████
 207, -- ████▒▒██
 191, -- ██████▒█
 127, -- ███████▒
 127  -- ███████▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ0"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."?テメリエよ○○"

--49 '1' rooftiles
poke(0x5600+(8* 49),
 127, -- ███████▒
 127, -- ███████▒
  62, -- ▒█████▒▒
   0, -- ▒▒▒▒▒▒▒▒
 247, -- ███▒████
 247, -- ███▒████
 227, -- ██▒▒▒███
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ1"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."○○>\0ワワネ\0"

--50 '2' archway
poke(0x5600+(8* 50),
  60, -- ▒▒████▒▒
 231, -- ███▒▒███
 195, -- ██▒▒▒▒██
 129, -- █▒▒▒▒▒▒█
 129, -- █▒▒▒▒▒▒█
 129, -- █▒▒▒▒▒▒█
 129, -- █▒▒▒▒▒▒█
 129  -- █▒▒▒▒▒▒█
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ2"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."<フれ▒▒▒▒▒"

--51 '3' window
poke(0x5600+(8* 51),
 129, -- █▒▒▒▒▒▒█
  60, -- ▒▒████▒▒
  66, -- ▒█▒▒▒▒█▒
  66, -- ▒█▒▒▒▒█▒
  66, -- ▒█▒▒▒▒█▒
  66, -- ▒█▒▒▒▒█▒
 126, -- ▒██████▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ3"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."▒<BBBB~\0"

--52 '4' planks
poke(0x5600+(8* 52),
   0, -- ▒▒▒▒▒▒▒▒
 254, -- ▒███████
   0, -- ▒▒▒▒▒▒▒▒
 223, -- █████▒██
   0, -- ▒▒▒▒▒▒▒▒
 127, -- ███████▒
   0, -- ▒▒▒▒▒▒▒▒
 251  -- ██▒█████
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ4"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0◜\0ト\0○\0ャ"

--53 '5' picket
poke(0x5600+(8* 53),
   0, -- ▒▒▒▒▒▒▒▒
  34, -- ▒█▒▒▒█▒▒
 102, -- ▒██▒▒██▒
 255, -- ████████
 102, -- ▒██▒▒██▒
 102, -- ▒██▒▒██▒
 255, -- ████████
 102  -- ▒██▒▒██▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ5"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\0\"f◝ff◝f"

--54 '6' house
poke(0x5600+(8* 54),
   8, -- ▒▒▒█▒▒▒▒
  20, -- ▒▒█▒█▒▒▒
  42, -- ▒█▒█▒█▒▒
  93, -- █▒███▒█▒
  62, -- ▒█████▒▒
  54, -- ▒██▒██▒▒
  54, -- ▒██▒██▒▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ6"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."⁸⁘*]>66\0"

--55 '7' housemini
poke(0x5600+(8* 55),
  34, -- ▒█▒▒▒█▒▒
 119, -- ███▒███▒
 119, -- ███▒███▒
   0, -- ▒▒▒▒▒▒▒▒
  34, -- ▒█▒▒▒█▒▒
 119, -- ███▒███▒
 119, -- ███▒███▒
   0  -- ▒▒▒▒▒▒▒▒
)
-->spr0: print"⁶@56000003⁸x⁸⁶c0ᵉ7"for i=0,448,64do memcpy(i,24576+i,4)end cstore()
--magic: ?"⁶rw¹シ⁶.".."\"ww\0\"ww\0"
--fillp(45343)
