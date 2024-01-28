# 12 – Architecture

Architectural patterns.

## Gallery

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Playdate | Thumby |
| :------ | :-----: | :----: | :-----: | :---: | :----: | :------: | :----: |
| BrickDense | <img width="64" height="32" src="../docs/art/BrickDense.png" alt=""> | [png](png/BrickDense.png) | [cpp](Architecture.h#L12-L23) | [txt](Architecture.bitsy.txt#L5-L14) | [p𝟪](architecture.p8.lua#L7-L19) | [lua](Architecture.playdate.lua#L5-L17) | [py](Architecture.thumby.py#L5-L16) |
| BrickNarrow | <img width="64" height="32" src="../docs/art/BrickNarrow.png" alt=""> | [png](png/BrickNarrow.png) | [cpp](Architecture.h#L25-L36) | [txt](Architecture.bitsy.txt#L16-L25) | [p𝟪](architecture.p8.lua#L21-L33) | [lua](Architecture.playdate.lua#L19-L31) | [py](Architecture.thumby.py#L18-L29) |
| BrickWide | <img width="64" height="32" src="../docs/art/BrickWide.png" alt=""> | [png](png/BrickWide.png) | [cpp](Architecture.h#L38-L49) | [txt](Architecture.bitsy.txt#L27-L36) | [p𝟪](architecture.p8.lua#L35-L47) | [lua](Architecture.playdate.lua#L33-L45) | [py](Architecture.thumby.py#L31-L42) |
| Brick <sup>o</sup>| <img width="64" height="32" src="../docs/art/Brick.png" alt=""> | [png](png/Brick.png) | [cpp](Architecture.h#L51-L62) | [txt](Architecture.bitsy.txt#L38-L47) | [p𝟪](architecture.p8.lua#L49-L61) | [lua](Architecture.playdate.lua#L47-L59) | [py](Architecture.thumby.py#L44-L55) |
| BrickAged | <img width="64" height="32" src="../docs/art/BrickAged.png" alt=""> | [png](png/BrickAged.png) | [cpp](Architecture.h#L64-L75) | [txt](Architecture.bitsy.txt#L49-L58) | [p𝟪](architecture.p8.lua#L63-L75) | [lua](Architecture.playdate.lua#L61-L73) | [py](Architecture.thumby.py#L57-L68) |
| BrickBasic | <img width="64" height="32" src="../docs/art/BrickBasic.png" alt=""> | [png](png/BrickBasic.png) |
| BrickPointed | <img width="64" height="32" src="../docs/art/BrickPointed.png" alt=""> | [png](png/BrickPointed.png) | [cpp](Architecture.h#L77-L88) | [txt](Architecture.bitsy.txt#L60-L69) | [p𝟪](architecture.p8.lua#L77-L89) | [lua](Architecture.playdate.lua#L75-L87) | [py](Architecture.thumby.py#L70-L81) |
| BrickShaded | <img width="64" height="32" src="../docs/art/BrickShaded.png" alt=""> | [png](png/BrickShaded.png) | [cpp](Architecture.h#L90-L101) | [txt](Architecture.bitsy.txt#L71-L80) | [p𝟪](architecture.p8.lua#L91-L103) | [lua](Architecture.playdate.lua#L89-L101) | [py](Architecture.thumby.py#L83-L94) |
| BrickRelief | <img width="64" height="32" src="../docs/art/BrickRelief.png" alt=""> | [png](png/BrickRelief.png) | [cpp](Architecture.h#L103-L114) | [txt](Architecture.bitsy.txt#L82-L91) | [p𝟪](architecture.p8.lua#L105-L117) | [lua](Architecture.playdate.lua#L103-L115) | [py](Architecture.thumby.py#L96-L107) |
| BrickSparse | <img width="64" height="32" src="../docs/art/BrickSparse.png" alt=""> | [png](png/BrickSparse.png) | [cpp](Architecture.h#L116-L127) | [txt](Architecture.bitsy.txt#L93-L102) | [p𝟪](architecture.p8.lua#L119-L131) | [lua](Architecture.playdate.lua#L117-L129) | [py](Architecture.thumby.py#L109-L120) |
| BrickSparseShaded | <img width="64" height="32" src="../docs/art/BrickSparseShaded.png" alt=""> | [png](png/BrickSparseShaded.png) | [cpp](Architecture.h#L129-L140) | [txt](Architecture.bitsy.txt#L104-L113) | [p𝟪](architecture.p8.lua#L133-L145) | [lua](Architecture.playdate.lua#L131-L143) | [py](Architecture.thumby.py#L122-L133) |
| BrickHighlights | <img width="64" height="32" src="../docs/art/BrickHighlights.png" alt=""> | [png](png/BrickHighlights.png) | [cpp](Architecture.h#L142-L153) | [txt](Architecture.bitsy.txt#L115-L124) | [p𝟪](architecture.p8.lua#L147-L159) | [lua](Architecture.playdate.lua#L145-L157) | [py](Architecture.thumby.py#L135-L146) |
| Mortar | <img width="64" height="32" src="../docs/art/Mortar.png" alt=""> | [png](png/Mortar.png) | [cpp](Architecture.h#L155-L166) | [txt](Architecture.bitsy.txt#L126-L135) | [p𝟪](architecture.p8.lua#L161-L173) | [lua](Architecture.playdate.lua#L159-L171) | [py](Architecture.thumby.py#L148-L159) |
| MortarLight | <img width="64" height="32" src="../docs/art/MortarLight.png" alt=""> | [png](png/MortarLight.png) | [cpp](Architecture.h#L168-L179) | [txt](Architecture.bitsy.txt#L137-L146) | [p𝟪](architecture.p8.lua#L175-L187) | [lua](Architecture.playdate.lua#L173-L185) | [py](Architecture.thumby.py#L161-L172) |
| MortarAged | <img width="64" height="32" src="../docs/art/MortarAged.png" alt=""> | [png](png/MortarAged.png) | [cpp](Architecture.h#L181-L192) | [txt](Architecture.bitsy.txt#L148-L157) | [p𝟪](architecture.p8.lua#L189-L201) | [lua](Architecture.playdate.lua#L187-L199) | [py](Architecture.thumby.py#L174-L185) |

<br>


| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Playdate | Thumby |
| :------ | :-----: | :----: | :-----: | :---: | :----: | :------: | :----: |
| BrickVertical | <img width="64" height="32" src="../docs/art/BrickVertical.png" alt=""> | [png](png/BrickVertical.png) | [cpp](Architecture.h#L194-L205) | [txt](Architecture.bitsy.txt#L159-L168) | [p𝟪](architecture.p8.lua#L203-L215) | [lua](Architecture.playdate.lua#L201-L213) | [py](Architecture.thumby.py#L187-L198) |
| BrickSinister <sup>o</sup>| <img width="64" height="32" src="../docs/art/BrickSinister.png" alt=""> | [png](png/BrickSinister.png) | [cpp](Architecture.h#L207-L218) | [txt](Architecture.bitsy.txt#L170-L179) | [p𝟪](architecture.p8.lua#L217-L229) | [lua](Architecture.playdate.lua#L215-L227) | [py](Architecture.thumby.py#L200-L211) |
| BrickSinisterRounded | <img width="64" height="32" src="../docs/art/BrickSinisterRounded.png" alt=""> | [png](png/BrickSinisterRounded.png) | [cpp](Architecture.h#L220-L231) | [txt](Architecture.bitsy.txt#L181-L190) | [p𝟪](architecture.p8.lua#L231-L243) | [lua](Architecture.playdate.lua#L229-L241) | [py](Architecture.thumby.py#L213-L224) |
| BrickSinisterMini | <img width="64" height="32" src="../docs/art/BrickSinisterMini.png" alt=""> | [png](png/BrickSinisterMini.png) | [cpp](Architecture.h#L233-L245) | [txt](Architecture.bitsy.txt#L192-L201) | [p𝟪](architecture.p8.lua#L245-L258) | [lua](Architecture.playdate.lua#L243-L255) | [py](Architecture.thumby.py#L226-L237) |
| BrickMini | <img width="64" height="32" src="../docs/art/BrickMini.png" alt=""> | [png](png/BrickMini.png) | [cpp](Architecture.h#L247-L259) | [txt](Architecture.bitsy.txt#L203-L212) | [p𝟪](architecture.p8.lua#L260-L273) | [lua](Architecture.playdate.lua#L257-L269) | [py](Architecture.thumby.py#L239-L250) |
| BrickMiniDamage | <img width="64" height="32" src="../docs/art/BrickMiniDamage.png" alt=""> | [png](png/BrickMiniDamage.png) | [cpp](Architecture.h#L261-L272) | [txt](Architecture.bitsy.txt#L214-L223) | [p𝟪](architecture.p8.lua#L275-L287) | [lua](Architecture.playdate.lua#L271-L283) | [py](Architecture.thumby.py#L252-L263) |
| BrickMiniRuins | <img width="64" height="32" src="../docs/art/BrickMiniRuins.png" alt=""> | [png](png/BrickMiniRuins.png) | [cpp](Architecture.h#L274-L285) | [txt](Architecture.bitsy.txt#L225-L234) | [p𝟪](architecture.p8.lua#L289-L301) | [lua](Architecture.playdate.lua#L285-L297) | [py](Architecture.thumby.py#L265-L276) |

<br>


| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Playdate | Thumby |
| :------ | :-----: | :----: | :-----: | :---: | :----: | :------: | :----: |
| StoneWall | <img width="64" height="32" src="../docs/art/StoneWall.png" alt=""> | [png](png/StoneWall.png) | [cpp](Architecture.h#L287-L298) | [txt](Architecture.bitsy.txt#L236-L245) | [p𝟪](architecture.p8.lua#L303-L315) | [lua](Architecture.playdate.lua#L299-L311) | [py](Architecture.thumby.py#L278-L289) |
| QuarryWall | <img width="64" height="32" src="../docs/art/QuarryWall.png" alt=""> | [png](png/QuarryWall.png) | [cpp](Architecture.h#L300-L311) | [txt](Architecture.bitsy.txt#L247-L256) | [p𝟪](architecture.p8.lua#L317-L329) | [lua](Architecture.playdate.lua#L313-L325) | [py](Architecture.thumby.py#L291-L302) |
| StoneBlock | <img width="64" height="32" src="../docs/art/StoneBlock.png" alt=""> | [png](png/StoneBlock.png) | [cpp](Architecture.h#L313-L324) | [txt](Architecture.bitsy.txt#L258-L267) | [p𝟪](architecture.p8.lua#L331-L343) | [lua](Architecture.playdate.lua#L327-L339) | [py](Architecture.thumby.py#L304-L315) |
| Flagstone | <img width="64" height="32" src="../docs/art/Flagstone.png" alt=""> | [png](png/Flagstone.png) | [cpp](Architecture.h#L326-L337) | [txt](Architecture.bitsy.txt#L269-L278) | [p𝟪](architecture.p8.lua#L345-L357) | [lua](Architecture.playdate.lua#L341-L353) | [py](Architecture.thumby.py#L317-L328) |
| PavingStones | <img width="64" height="32" src="../docs/art/PavingStones.png" alt=""> | [png](png/PavingStones.png) | [cpp](Architecture.h#L339-L350) | [txt](Architecture.bitsy.txt#L280-L289) | [p𝟪](architecture.p8.lua#L359-L371) | [lua](Architecture.playdate.lua#L355-L367) | [py](Architecture.thumby.py#L330-L341) |
| Shingle <sup>o</sup>| <img width="64" height="32" src="../docs/art/Shingle.png" alt=""> | [png](png/Shingle.png) | [cpp](Architecture.h#L352-L363) | [txt](Architecture.bitsy.txt#L291-L300) | [p𝟪](architecture.p8.lua#L373-L385) | [lua](Architecture.playdate.lua#L369-L381) | [py](Architecture.thumby.py#L343-L354) |
| RoofTiles | <img width="64" height="32" src="../docs/art/RoofTiles.png" alt=""> | [png](png/RoofTiles.png) | [cpp](Architecture.h#L365-L376) | [txt](Architecture.bitsy.txt#L302-L311) | [p𝟪](architecture.p8.lua#L387-L399) | [lua](Architecture.playdate.lua#L383-L395) | [py](Architecture.thumby.py#L356-L367) |
| Arbor | <img width="64" height="32" src="../docs/art/Arbor.png" alt=""> | [png](png/Arbor.png)
| Archway | <img width="64" height="32" src="../docs/art/Archway.png" alt=""> | [png](png/Archway.png) | [cpp](Architecture.h#L378-L389) | [txt](Architecture.bitsy.txt#L313-L322) | [p𝟪](architecture.p8.lua#L401-L413) | [lua](Architecture.playdate.lua#L397-L409) | [py](Architecture.thumby.py#L369-L380) |
| Window | <img width="64" height="32" src="../docs/art/Window.png" alt=""> | [png](png/Window.png) | [cpp](Architecture.h#L391-L402) | [txt](Architecture.bitsy.txt#L324-L333) | [p𝟪](architecture.p8.lua#L415-L427) | [lua](Architecture.playdate.lua#L411-L423) | [py](Architecture.thumby.py#L382-L393) |
| Planks | <img width="64" height="32" src="../docs/art/Planks.png" alt=""> | [png](png/Planks.png) | [cpp](Architecture.h#L404-L415) | [txt](Architecture.bitsy.txt#L335-L344) | [p𝟪](architecture.p8.lua#L429-L441) | [lua](Architecture.playdate.lua#L425-L437) | [py](Architecture.thumby.py#L395-L406) |
| Picket | <img width="64" height="32" src="../docs/art/Picket.png" alt=""> | [png](png/Picket.png) | [cpp](Architecture.h#L417-L428) | [txt](Architecture.bitsy.txt#L346-L355) | [p𝟪](architecture.p8.lua#L443-L455) | [lua](Architecture.playdate.lua#L439-L451) | [py](Architecture.thumby.py#L408-L419) |
| House | <img width="64" height="32" src="../docs/art/House.png" alt=""> | [png](png/House.png) | [cpp](Architecture.h#L430-L441) | [txt](Architecture.bitsy.txt#L357-L366) | [p𝟪](architecture.p8.lua#L457-L469) | [lua](Architecture.playdate.lua#L453-L465) | [py](Architecture.thumby.py#L421-L432) |
| HouseMini <sup>p</sup>| <img width="64" height="32" src="../docs/art/HouseMini.png" alt=""> | [png](png/HouseMini.png) | [cpp](Architecture.h#L443-L455) | [txt](Architecture.bitsy.txt#L368-L377) | [p𝟪](architecture.p8.lua#L471-L484) | [lua](Architecture.playdate.lua#L467-L479) | [py](Architecture.thumby.py#L434-L445) |


[`⤴`](#gallery)

---

<sup>o</sup>: Pattern included in the `Office` collection  
<sup>p</sup>: Pattern included in the `PICO-8` collection

<br>
