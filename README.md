# 8x8.me

1 bit per pixel (monotone)  
8×8 pixels (8 bytes)  
Repeating tile fill patterns  

---
<br>


## Introduction

*Work in progress* ~ a collection of 'retro' fill patterns. Lovingly crafted and translated to convenient code snippets. Please keep the pixel gnomes fed with a [star](https://github.com/ace-dent/8x8.me/stargazers)! ⭐️


<br>


## Gallery

Contents:  
&emsp; [01 – Dither](#01--dither)  
&emsp; [02 – Dots](#02--dots)  
&emsp; [03 – Dashes](#03--dashes)  
&emsp; [04 – Lines](#04--lines)  
&emsp; [05 – Waves](#05--waves)  
&emsp; [06 – Grid](#06--grid)  
&emsp; [07 – Checked](#07--checked)  
&emsp; [08 – Rectilinear](#08--rectilinear)  
&emsp; [09 – Radial](#09--radial)  
&emsp; [10 – Round](#10--round)  
&emsp; [11 – Woven](#11--woven)  
&emsp; [12 – Architecture](#12--architecture)  
&emsp; [13 – Nature](#13--nature)  
&emsp; [14 – Symbols](#14--symbols)  
&emsp; [15 – Other](#15--other)

---

### 01 – Dither
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| BayerDither00 | ![](/previews/BayerDither00.png) | [png](/01-Dither/png/BayerDither00.png) | [cpp](/01-Dither/Dither.h#L12-L24) | [txt](/01-Dither/Dither.bitsy.txt#L5-L14) | [lua](/01-Dither/dither.p8.lua#L7-L20) | [py](/01-Dither/Dither.thumby.py#L5-L16) |
| BayerDither01 | ![](/previews/BayerDither01.png) | [png](/01-Dither/png/BayerDither01.png) | [cpp](/01-Dither/Dither.h#L26-L38) | [txt](/01-Dither/Dither.bitsy.txt#L16-L25) | [lua](/01-Dither/dither.p8.lua#L22-L35) | [py](/01-Dither/Dither.thumby.py#L18-L29) |
| BayerDither02 | ![](/previews/BayerDither02.png) | [png](/01-Dither/png/BayerDither02.png) | [cpp](/01-Dither/Dither.h#L40-L52) | [txt](/01-Dither/Dither.bitsy.txt#L27-L36) | [lua](/01-Dither/dither.p8.lua#L37-L50) | [py](/01-Dither/Dither.thumby.py#L31-L42) |
| BayerDither03 | ![](/previews/BayerDither03.png) | [png](/01-Dither/png/BayerDither03.png) | [cpp](/01-Dither/Dither.h#L54-L66) | [txt](/01-Dither/Dither.bitsy.txt#L38-L47) | [lua](/01-Dither/dither.p8.lua#L52-L65) | [py](/01-Dither/Dither.thumby.py#L44-L55) |
| BayerDither04 | ![](/previews/BayerDither04.png) | [png](/01-Dither/png/BayerDither04.png) | [cpp](/01-Dither/Dither.h#L68-L80) | [txt](/01-Dither/Dither.bitsy.txt#L49-L58) | [lua](/01-Dither/dither.p8.lua#L67-L80) | [py](/01-Dither/Dither.thumby.py#L57-L68) |
| BayerDither05 | ![](/previews/BayerDither05.png) | [png](/01-Dither/png/BayerDither05.png) | [cpp](/01-Dither/Dither.h#L82-L94) | [txt](/01-Dither/Dither.bitsy.txt#L60-L69) | [lua](/01-Dither/dither.p8.lua#L82-L95) | [py](/01-Dither/Dither.thumby.py#L70-L81) |
| BayerDither06 | ![](/previews/BayerDither06.png) | [png](/01-Dither/png/BayerDither06.png) | [cpp](/01-Dither/Dither.h#L96-L108) | [txt](/01-Dither/Dither.bitsy.txt#L71-L80) | [lua](/01-Dither/dither.p8.lua#L97-L110) | [py](/01-Dither/Dither.thumby.py#L83-L94) |
| BayerDither07 | ![](/previews/BayerDither07.png) | [png](/01-Dither/png/BayerDither07.png) | [cpp](/01-Dither/Dither.h#L110-L122) | [txt](/01-Dither/Dither.bitsy.txt#L82-L91) | [lua](/01-Dither/dither.p8.lua#L112-L125) | [py](/01-Dither/Dither.thumby.py#L96-L107) |
| BayerDither08 | ![](/previews/BayerDither08.png) | [png](/01-Dither/png/BayerDither08.png) | [cpp](/01-Dither/Dither.h#L124-L136) | [txt](/01-Dither/Dither.bitsy.txt#L93-L102) | [lua](/01-Dither/dither.p8.lua#L127-L140) | [py](/01-Dither/Dither.thumby.py#L109-L120) |
| BayerDither09 | ![](/previews/BayerDither09.png) | [png](/01-Dither/png/BayerDither09.png) | [cpp](/01-Dither/Dither.h#L138-L150) | [txt](/01-Dither/Dither.bitsy.txt#L104-L113) | [lua](/01-Dither/dither.p8.lua#L142-L155) | [py](/01-Dither/Dither.thumby.py#L122-L133) |
| BayerDither10 | ![](/previews/BayerDither10.png) | [png](/01-Dither/png/BayerDither10.png) | [cpp](/01-Dither/Dither.h#L152-L164) | [txt](/01-Dither/Dither.bitsy.txt#L115-L124) | [lua](/01-Dither/dither.p8.lua#L157-L170) | [py](/01-Dither/Dither.thumby.py#L135-L146) |
| BayerDither11 | ![](/previews/BayerDither11.png) | [png](/01-Dither/png/BayerDither11.png) | [cpp](/01-Dither/Dither.h#L166-L178) | [txt](/01-Dither/Dither.bitsy.txt#L126-L135) | [lua](/01-Dither/dither.p8.lua#L172-L185) | [py](/01-Dither/Dither.thumby.py#L148-L159) |
| BayerDither12 | ![](/previews/BayerDither12.png) | [png](/01-Dither/png/BayerDither12.png) | [cpp](/01-Dither/Dither.h#L180-L192) | [txt](/01-Dither/Dither.bitsy.txt#L137-L146) | [lua](/01-Dither/dither.p8.lua#L187-L200) | [py](/01-Dither/Dither.thumby.py#L161-L172) |
| BayerDither13 | ![](/previews/BayerDither13.png) | [png](/01-Dither/png/BayerDither13.png) | [cpp](/01-Dither/Dither.h#L194-L206) | [txt](/01-Dither/Dither.bitsy.txt#L148-L157) | [lua](/01-Dither/dither.p8.lua#L202-L215) | [py](/01-Dither/Dither.thumby.py#L174-L185) |
| BayerDither14 | ![](/previews/BayerDither14.png) | [png](/01-Dither/png/BayerDither14.png) | [cpp](/01-Dither/Dither.h#L208-L220) | [txt](/01-Dither/Dither.bitsy.txt#L159-L168) | [lua](/01-Dither/dither.p8.lua#L217-L230) | [py](/01-Dither/Dither.thumby.py#L187-L198) |
| BayerDither15 | ![](/previews/BayerDither15.png) | [png](/01-Dither/png/BayerDither15.png) | [cpp](/01-Dither/Dither.h#L222-L234) | [txt](/01-Dither/Dither.bitsy.txt#L170-L179) | [lua](/01-Dither/dither.p8.lua#L232-L245) | [py](/01-Dither/Dither.thumby.py#L200-L211) |
| BayerDither16 | ![](/previews/BayerDither16.png) | [png](/01-Dither/png/BayerDither16.png) | [cpp](/01-Dither/Dither.h#L236-L248) | [txt](/01-Dither/Dither.bitsy.txt#L181-L190) | [lua](/01-Dither/dither.p8.lua#L247-L260) | [py](/01-Dither/Dither.thumby.py#L213-L224) |

<br>

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| OfficeDither05 <sup>o</sup>| ![](/previews/OfficeDither05.png) | [png](/01-Dither/png/OfficeDither05.png) | [cpp](/01-Dither/Dither.h#L250-L261) | [txt](/01-Dither/Dither.bitsy.txt#L192-L201) | [lua](/01-Dither/dither.p8.lua#L262-L274) | [py](/01-Dither/Dither.thumby.py#L226-L237) |
| OfficeDither10 <sup>o</sup>| ![](/previews/OfficeDither10.png) | [png](/01-Dither/png/OfficeDither10.png) | [cpp](/01-Dither/Dither.h#L263-L274) | [txt](/01-Dither/Dither.bitsy.txt#L203-L212) | [lua](/01-Dither/dither.p8.lua#L276-L288) | [py](/01-Dither/Dither.thumby.py#L239-L250) |
| OfficeDither20 <sup>o</sup>| ![](/previews/OfficeDither20.png) | [png](/01-Dither/png/OfficeDither20.png) | [cpp](/01-Dither/Dither.h#L276-L288) | [txt](/01-Dither/Dither.bitsy.txt#L214-L223) | [lua](/01-Dither/dither.p8.lua#L290-L303) | [py](/01-Dither/Dither.thumby.py#L252-L263) |
| OfficeDither25 <sup>o</sup>| ![](/previews/OfficeDither25.png) | [png](/01-Dither/png/OfficeDither25.png) | [cpp](/01-Dither/Dither.h#L290-L302) | [txt](/01-Dither/Dither.bitsy.txt#L225-L234) | [lua](/01-Dither/dither.p8.lua#L305-L318) | [py](/01-Dither/Dither.thumby.py#L265-L276) |
| OfficeDither30 <sup>o</sup>| ![](/previews/OfficeDither30.png) | [png](/01-Dither/png/OfficeDither30.png) | [cpp](/01-Dither/Dither.h#L304-L316) | [txt](/01-Dither/Dither.bitsy.txt#L236-L245) | [lua](/01-Dither/dither.p8.lua#L320-L333) | [py](/01-Dither/Dither.thumby.py#L278-L289) |
| OfficeDither40 <sup>o</sup>| ![](/previews/OfficeDither40.png) | [png](/01-Dither/png/OfficeDither40.png) | [cpp](/01-Dither/Dither.h#L318-L329) | [txt](/01-Dither/Dither.bitsy.txt#L247-L256) | [lua](/01-Dither/dither.p8.lua#L335-L347) | [py](/01-Dither/Dither.thumby.py#L291-L302) |
| OfficeDither50 <sup>o</sup>| ![](/previews/OfficeDither50.png) | [png](/01-Dither/png/OfficeDither50.png) | [cpp](/01-Dither/Dither.h#L331-L343) | [txt](/01-Dither/Dither.bitsy.txt#L258-L267) | [lua](/01-Dither/dither.p8.lua#L349-L362) | [py](/01-Dither/Dither.thumby.py#L304-L315) |
| OfficeDither60 <sup>o</sup>| ![](/previews/OfficeDither60.png) | [png](/01-Dither/png/OfficeDither60.png) | [cpp](/01-Dither/Dither.h#L345-L357) | [txt](/01-Dither/Dither.bitsy.txt#L269-L278) | [lua](/01-Dither/dither.p8.lua#L364-L377) | [py](/01-Dither/Dither.thumby.py#L317-L328) |
| OfficeDither70 <sup>o</sup>| ![](/previews/OfficeDither70.png) | [png](/01-Dither/png/OfficeDither70.png) | [cpp](/01-Dither/Dither.h#L359-L371) | [txt](/01-Dither/Dither.bitsy.txt#L280-L289) | [lua](/01-Dither/dither.p8.lua#L379-L392) | [py](/01-Dither/Dither.thumby.py#L330-L341) |
| OfficeDither75 <sup>o</sup>| ![](/previews/OfficeDither75.png) | [png](/01-Dither/png/OfficeDither75.png) | [cpp](/01-Dither/Dither.h#L373-L385) | [txt](/01-Dither/Dither.bitsy.txt#L291-L300) | [lua](/01-Dither/dither.p8.lua#L394-L407) | [py](/01-Dither/Dither.thumby.py#L343-L354) |
| OfficeDither80 <sup>o</sup>| ![](/previews/OfficeDither80.png) | [png](/01-Dither/png/OfficeDither80.png) | [cpp](/01-Dither/Dither.h#L387-L398) | [txt](/01-Dither/Dither.bitsy.txt#L302-L311) | [lua](/01-Dither/dither.p8.lua#L409-L421) | [py](/01-Dither/Dither.thumby.py#L356-L367) |
| OfficeDither90 <sup>o</sup>| ![](/previews/OfficeDither90.png) | [png](/01-Dither/png/OfficeDither90.png) | [cpp](/01-Dither/Dither.h#L400-L411) | [txt](/01-Dither/Dither.bitsy.txt#L313-L322) | [lua](/01-Dither/dither.p8.lua#L423-L435) | [py](/01-Dither/Dither.thumby.py#L369-L380) |

[`⤴`](#gallery)

---

### 02 – Dots
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Confetti <sup>o</sup>| ![](/previews/Confetti.png) | [png](/02-Dots/png/Confetti.png) | [cpp](/02-Dots/Dots.h#L12-L23) | [txt](/02-Dots/Dots.bitsy.txt#L5-L14) | lua | [py](/02-Dots/Dots.thumby.py#L5-L16) |
| ConfettiLarge <sup>o</sup>| ![](/previews/ConfettiLarge.png) | [png](/02-Dots/png/ConfettiLarge.png) | [cpp](/02-Dots/Dots.h#L25-L36) | [txt](/02-Dots/Dots.bitsy.txt#L16-L25) | lua | [py](/02-Dots/Dots.thumby.py#L18-L29) |

[`⤴`](#gallery)

---

### 03 – Dashes
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| HorizontalDenseTrellis <sup>o</sup>| ![](/previews/HorizontalDenseTrellis.png) | [png](/03-Dashes/png/HorizontalDenseTrellis.png) | cpp | txt | lua | py
| HorizontalDenseDotDash <sup>p</sup>| ![](/previews/HorizontalDenseDotDash.png) | [png](/03-Dashes/png/HorizontalDenseDotDash.png) | cpp | txt | lua | py
| HorizontalDash <sup>o</sup>| ![](/previews/HorizontalDash.png) | [png](/03-Dashes/png/HorizontalDash.png) | cpp | txt | lua | py
| HorizontalDashMini <sup>p</sup>| ![](/previews/HorizontalDashMini.png) | [png](/03-Dashes/png/HorizontalDashMini.png) | cpp | txt | lua | py
| VerticalDash <sup>o</sup>| ![](/previews/VerticalDash.png) | [png](/03-Dashes/png/VerticalDash.png) | cpp | txt | lua | py
| DexterDash <sup>o</sup>| ![](/previews/DexterDash.png) | [png](/03-Dashes/png/DexterDash.png) | cpp | txt | lua | py
| DexterSparseDash | ![](/previews/DexterSparseDash.png) | [png](/03-Dashes/png/DexterSparseDash.png) | cpp | txt | lua | py
| SinisterDash <sup>o</sup>| ![](/previews/SinisterDash.png) | [png](/03-Dashes/png/SinisterDash.png) | cpp | txt | lua | py
| SinisterSparseDash | ![](/previews/SinisterSparseDash.png) | [png](/03-Dashes/png/SinisterSparseDash.png) | cpp | txt | lua | py
| AlternatingDash | ![](/previews/AlternatingDash.png) | [png](/03-Dashes/png/AlternatingDash.png) | cpp | txt | lua | py
| AlternatingDashDouble | ![](/previews/AlternatingDashDouble.png) | [png](/03-Dashes/png/AlternatingDashDouble.png) | cpp | txt | lua | py
| AlternatingDashMini | ![](/previews/AlternatingDashMini.png) | [png](/03-Dashes/png/AlternatingDashMini.png) | cpp | txt | lua | py

[`⤴`](#gallery)

---

### 04 – Lines
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| HorizontalDenseLineDash | ![](/previews/HorizontalDenseLineDash.png) | [png](/04-Lines/png/HorizontalDenseLineDash.png) | [cpp](/04-Lines/Lines.h#L12-L24) | [txt](/04-Lines/Lines.bitsy.txt#L5-L14) | [lua](/04-Lines/lines.p8.lua#L7-L20) | [py](/04-Lines/Lines.thumby.py#L5-L16) |
| HorizontalDenseLineDot | ![](/previews/HorizontalDenseLineDot.png) | [png](/04-Lines/png/HorizontalDenseLineDot.png) | [cpp](/04-Lines/Lines.h#L26-L38) | [txt](/04-Lines/Lines.bitsy.txt#L16-L25) | [lua](/04-Lines/lines.p8.lua#L22-L35) | [py](/04-Lines/Lines.thumby.py#L18-L29) |
| HorizontalDense <sup>o,p</sup>| ![](/previews/HorizontalDense.png) | [png](/04-Lines/png/HorizontalDense.png) | [cpp](/04-Lines/Lines.h#L40-L52) | [txt](/04-Lines/Lines.bitsy.txt#L27-L36) | [lua](/04-Lines/lines.p8.lua#L37-L50) | [py](/04-Lines/Lines.thumby.py#L31-L42) |
| Horizontal | ![](/previews/Horizontal.png) | [png](/04-Lines/png/Horizontal.png) | [cpp](/04-Lines/Lines.h#L54-L66) | [txt](/04-Lines/Lines.bitsy.txt#L38-L47) | [lua](/04-Lines/lines.p8.lua#L52-L65) | [py](/04-Lines/Lines.thumby.py#L44-L55) |
| HorizontalMedium <sup>o</sup>| ![](/previews/HorizontalMedium.png) | [png](/04-Lines/png/HorizontalMedium.png) | [cpp](/04-Lines/Lines.h#L68-L80) | [txt](/04-Lines/Lines.bitsy.txt#L49-L58) | [lua](/04-Lines/lines.p8.lua#L67-L80) | [py](/04-Lines/Lines.thumby.py#L57-L68) |
| HorizontalBold | ![](/previews/HorizontalBold.png) | [png](/04-Lines/png/HorizontalBold.png) | [cpp](/04-Lines/Lines.h#L82-L94) | [txt](/04-Lines/Lines.bitsy.txt#L60-L69) | [lua](/04-Lines/lines.p8.lua#L82-L95) | [py](/04-Lines/Lines.thumby.py#L70-L81) |
| HorizontalSparse | ![](/previews/HorizontalSparse.png) | [png](/04-Lines/png/HorizontalSparse.png) | [cpp](/04-Lines/Lines.h#L96-L107) | [txt](/04-Lines/Lines.bitsy.txt#L71-L80) | [lua](/04-Lines/lines.p8.lua#L97-L109) | [py](/04-Lines/Lines.thumby.py#L83-L94) |
| HorizontalSparseMedium | ![](/previews/HorizontalSparseMedium.png) | [png](/04-Lines/png/HorizontalSparseMedium.png) | [cpp](/04-Lines/Lines.h#L109-L120) | [txt](/04-Lines/Lines.bitsy.txt#L82-L91) | [lua](/04-Lines/lines.p8.lua#L111-L123) | [py](/04-Lines/Lines.thumby.py#L96-L107) |
| HorizontalSparseBold | ![](/previews/HorizontalSparseBold.png) | [png](/04-Lines/png/HorizontalSparseBold.png) | [cpp](/04-Lines/Lines.h#L122-L133) | [txt](/04-Lines/Lines.bitsy.txt#L93-L102) | [lua](/04-Lines/lines.p8.lua#L125-L137) | [py](/04-Lines/Lines.thumby.py#L109-L120) |
| HorizontalSparseExtraBold | ![](/previews/HorizontalSparseExtraBold.png) | [png](/04-Lines/png/HorizontalSparseExtraBold.png) | [cpp](/04-Lines/Lines.h#L135-L146) | [txt](/04-Lines/Lines.bitsy.txt#L104-L113) | [lua](/04-Lines/lines.p8.lua#L139-L151) | [py](/04-Lines/Lines.thumby.py#L122-L133) |
| HorizontalSparseUltraBold | ![](/previews/HorizontalSparseUltraBold.png) | [png](/04-Lines/png/HorizontalSparseUltraBold.png) | [cpp](/04-Lines/Lines.h#L148-L159) | [txt](/04-Lines/Lines.bitsy.txt#L115-L124) | [lua](/04-Lines/lines.p8.lua#L153-L165) | [py](/04-Lines/Lines.thumby.py#L135-L146) |
| HorizontalStripes | ![](/previews/HorizontalStripes.png) | [png](/04-Lines/png/HorizontalStripes.png) | [cpp](/04-Lines/Lines.h#L161-L172) | [txt](/04-Lines/Lines.bitsy.txt#L126-L135) | [lua](/04-Lines/lines.p8.lua#L167-L179) | [py](/04-Lines/Lines.thumby.py#L148-L159) |
| HorizontalPinstripe | ![](/previews/HorizontalPinstripe.png) | [png](/04-Lines/png/HorizontalPinstripe.png) | [cpp](/04-Lines/Lines.h#L174-L185) | [txt](/04-Lines/Lines.bitsy.txt#L137-L146) | [lua](/04-Lines/lines.p8.lua#L181-L193) | [py](/04-Lines/Lines.thumby.py#L161-L172) |
| HorizontalPinstripeMedium | ![](/previews/HorizontalPinstripeMedium.png) | [png](/04-Lines/png/HorizontalPinstripeMedium.png) | [cpp](/04-Lines/Lines.h#L187-L198) | [txt](/04-Lines/Lines.bitsy.txt#L148-L157) | [lua](/04-Lines/lines.p8.lua#L195-L207) | [py](/04-Lines/Lines.thumby.py#L174-L185) |

<br>

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| VerticalDenseLineDash | ![](/previews/VerticalDenseLineDash.png) | [png](/04-Lines/png/VerticalDenseLineDash.png) | [cpp](/04-Lines/Lines.h#L200-L212) | [txt](/04-Lines/Lines.bitsy.txt#L159-L168) | [lua](/04-Lines/lines.p8.lua#L209-L222) | [py](/04-Lines/Lines.thumby.py#L187-L198) |
| VerticalDenseLineDot | ![](/previews/VerticalDenseLineDot.png) | [png](/04-Lines/png/VerticalDenseLineDot.png) | [cpp](/04-Lines/Lines.h#L214-L226) | [txt](/04-Lines/Lines.bitsy.txt#L170-L179) | [lua](/04-Lines/lines.p8.lua#L224-L237) | [py](/04-Lines/Lines.thumby.py#L200-L211) |
| VerticalDense <sup>o,p</sup>| ![](/previews/VerticalDense.png) | [png](/04-Lines/png/VerticalDense.png) | [cpp](/04-Lines/Lines.h#L228-L240) | [txt](/04-Lines/Lines.bitsy.txt#L181-L190) | [lua](/04-Lines/lines.p8.lua#L239-L252) | [py](/04-Lines/Lines.thumby.py#L213-L224) |
| Vertical | ![](/previews/Vertical.png) | [png](/04-Lines/png/Vertical.png) | [cpp](/04-Lines/Lines.h#L242-L254) | [txt](/04-Lines/Lines.bitsy.txt#L192-L201) | [lua](/04-Lines/lines.p8.lua#L254-L267) | [py](/04-Lines/Lines.thumby.py#L226-L237) |
| VerticalMedium <sup>o</sup>| ![](/previews/VerticalMedium.png) | [png](/04-Lines/png/VerticalMedium.png) | [cpp](/04-Lines/Lines.h#L256-L268) | [txt](/04-Lines/Lines.bitsy.txt#L203-L212) | [lua](/04-Lines/lines.p8.lua#L269-L282) | [py](/04-Lines/Lines.thumby.py#L239-L250) |
| VerticalBold | ![](/previews/VerticalBold.png) | [png](/04-Lines/png/VerticalBold.png) | [cpp](/04-Lines/Lines.h#L270-L282) | [txt](/04-Lines/Lines.bitsy.txt#L214-L223) | [lua](/04-Lines/lines.p8.lua#L284-L297) | [py](/04-Lines/Lines.thumby.py#L252-L263) |
| VerticalSparse | ![](/previews/VerticalSparse.png) | [png](/04-Lines/png/VerticalSparse.png) | [cpp](/04-Lines/Lines.h#L284-L295) | [txt](/04-Lines/Lines.bitsy.txt#L225-L234) | [lua](/04-Lines/lines.p8.lua#L299-L311) | [py](/04-Lines/Lines.thumby.py#L265-L276) |
| VerticalSparseMedium | ![](/previews/VerticalSparseMedium.png) | [png](/04-Lines/png/VerticalSparseMedium.png) | [cpp](/04-Lines/Lines.h#L297-L308) | [txt](/04-Lines/Lines.bitsy.txt#L236-L245) | [lua](/04-Lines/lines.p8.lua#L313-L325) | [py](/04-Lines/Lines.thumby.py#L278-L289) |
| VerticalSparseBold | ![](/previews/VerticalSparseBold.png) | [png](/04-Lines/png/VerticalSparseBold.png) | [cpp](/04-Lines/Lines.h#L310-L321) | [txt](/04-Lines/Lines.bitsy.txt#L247-L256) | [lua](/04-Lines/lines.p8.lua#L327-L339) | [py](/04-Lines/Lines.thumby.py#L291-L302) |
| VerticalSparseExtraBold | ![](/previews/VerticalSparseExtraBold.png) | [png](/04-Lines/png/VerticalSparseExtraBold.png) | [cpp](/04-Lines/Lines.h#L323-L334) | [txt](/04-Lines/Lines.bitsy.txt#L258-L267) | [lua](/04-Lines/lines.p8.lua#L341-L353) | [py](/04-Lines/Lines.thumby.py#L304-L315) |
| VerticalSparseUltraBold | ![](/previews/VerticalSparseUltraBold.png) | [png](/04-Lines/png/VerticalSparseUltraBold.png) | [cpp](/04-Lines/Lines.h#L336-L347) | [txt](/04-Lines/Lines.bitsy.txt#L269-L278) | [lua](/04-Lines/lines.p8.lua#L355-L367) | [py](/04-Lines/Lines.thumby.py#L317-L328) |
| VerticalStripes | ![](/previews/VerticalStripes.png) | [png](/04-Lines/png/VerticalStripes.png) | [cpp](/04-Lines/Lines.h#L349-L360) | [txt](/04-Lines/Lines.bitsy.txt#L280-L289) | [lua](/04-Lines/lines.p8.lua#L369-L381) | [py](/04-Lines/Lines.thumby.py#L330-L341) |
| VerticalPinstripe | ![](/previews/VerticalPinstripe.png) | [png](/04-Lines/png/VerticalPinstripe.png) | [cpp](/04-Lines/Lines.h#L362-L373) | [txt](/04-Lines/Lines.bitsy.txt#L291-L300) | [lua](/04-Lines/lines.p8.lua#L383-L395) | [py](/04-Lines/Lines.thumby.py#L343-L354) |
| VerticalPinstripeMedium | ![](/previews/VerticalPinstripeMedium.png) | [png](/04-Lines/png/VerticalPinstripeMedium.png) | [cpp](/04-Lines/Lines.h#L375-L386) | [txt](/04-Lines/Lines.bitsy.txt#L302-L311) | [lua](/04-Lines/lines.p8.lua#L397-L409) | [py](/04-Lines/Lines.thumby.py#L356-L367) |

<br>

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Dexter | ![](/previews/Dexter.png) | [png](/04-Lines/png/Dexter.png) | [cpp](/04-Lines/Lines.h#L388-L400) | [txt](/04-Lines/Lines.bitsy.txt#L313-L322) | [lua](/04-Lines/lines.p8.lua#L411-L424) | [py](/04-Lines/Lines.thumby.py#L369-L380) |
| DexterMedium <sup>o</sup>| ![](/previews/DexterMedium.png) | [png](/04-Lines/png/DexterMedium.png) | [cpp](/04-Lines/Lines.h#L402-L414) | [txt](/04-Lines/Lines.bitsy.txt#L324-L333) | [lua](/04-Lines/lines.p8.lua#L426-L439) | [py](/04-Lines/Lines.thumby.py#L382-L393) |
| DexterBold <sup>o</sup>| ![](/previews/DexterBold.png) | [png](/04-Lines/png/DexterBold.png) | [cpp](/04-Lines/Lines.h#L416-L428) | [txt](/04-Lines/Lines.bitsy.txt#L335-L344) | [lua](/04-Lines/lines.p8.lua#L441-L454) | [py](/04-Lines/Lines.thumby.py#L395-L406) |
| DexterSparse | ![](/previews/DexterSparse.png) | [png](/04-Lines/png/DexterSparse.png) | [cpp](/04-Lines/Lines.h#L430-L441) | [txt](/04-Lines/Lines.bitsy.txt#L346-L355) | [lua](/04-Lines/lines.p8.lua#L456-L468) | [py](/04-Lines/Lines.thumby.py#L408-L419) |
| DexterSparseMedium | ![](/previews/DexterSparseMedium.png) | [png](/04-Lines/png/DexterSparseMedium.png) | [cpp](/04-Lines/Lines.h#L443-L454) | [txt](/04-Lines/Lines.bitsy.txt#L357-L366) | [lua](/04-Lines/lines.p8.lua#L470-L482) | [py](/04-Lines/Lines.thumby.py#L421-L432) |
| DexterSparseBold | ![](/previews/DexterSparseBold.png) | [png](/04-Lines/png/DexterSparseBold.png) | [cpp](/04-Lines/Lines.h#L456-L467) | [txt](/04-Lines/Lines.bitsy.txt#L368-L377) | [lua](/04-Lines/lines.p8.lua#L484-L496) | [py](/04-Lines/Lines.thumby.py#L434-L445) |
| DexterSparseExtraBold | ![](/previews/DexterSparseExtraBold.png) | [png](/04-Lines/png/DexterSparseExtraBold.png) | [cpp](/04-Lines/Lines.h#L469-L480) | [txt](/04-Lines/Lines.bitsy.txt#L379-L388) | [lua](/04-Lines/lines.p8.lua#L498-L510) | [py](/04-Lines/Lines.thumby.py#L447-L458) |
| DexterSparseUltraBold <sup>o</sup>| ![](/previews/DexterSparseUltraBold.png) | [png](/04-Lines/png/DexterSparseUltraBold.png) | [cpp](/04-Lines/Lines.h#L482-L493) | [txt](/04-Lines/Lines.bitsy.txt#L390-L399) | [lua](/04-Lines/lines.p8.lua#L512-L524) | [py](/04-Lines/Lines.thumby.py#L460-L471) |
| DexterStripes | ![](/previews/DexterStripes.png) | [png](/04-Lines/png/DexterStripes.png) | [cpp](/04-Lines/Lines.h#L495-L506) | [txt](/04-Lines/Lines.bitsy.txt#L401-L410) | [lua](/04-Lines/lines.p8.lua#L526-L538) | [py](/04-Lines/Lines.thumby.py#L473-L484) |
| DexterPinstripe | ![](/previews/DexterPinstripe.png) | [png](/04-Lines/png/DexterPinstripe.png) | [cpp](/04-Lines/Lines.h#L508-L519) | [txt](/04-Lines/Lines.bitsy.txt#L412-L421) | [lua](/04-Lines/lines.p8.lua#L540-L552) | [py](/04-Lines/Lines.thumby.py#L486-L497) |
| DexterPinstripeMedium | ![](/previews/DexterPinstripeMedium.png) | [png](/04-Lines/png/DexterPinstripeMedium.png) | [cpp](/04-Lines/Lines.h#L521-L532) | [txt](/04-Lines/Lines.bitsy.txt#L423-L432) | [lua](/04-Lines/lines.p8.lua#L554-L566) | [py](/04-Lines/Lines.thumby.py#L499-L510) |
| DexterSteep | ![](/previews/DexterSteep.png) | [png](/04-Lines/png/DexterSteep.png) | [cpp](/04-Lines/Lines.h#L534-L545) | [txt](/04-Lines/Lines.bitsy.txt#L434-L443) | [lua](/04-Lines/lines.p8.lua#L568-L580) | [py](/04-Lines/Lines.thumby.py#L512-L523) |
| DexterSteepMedium | ![](/previews/DexterSteepMedium.png) | [png](/04-Lines/png/DexterSteepMedium.png) | [cpp](/04-Lines/Lines.h#L547-L558) | [txt](/04-Lines/Lines.bitsy.txt#L445-L454) | [lua](/04-Lines/lines.p8.lua#L582-L594) | [py](/04-Lines/Lines.thumby.py#L525-L536) |
| DexterShallow | ![](/previews/DexterShallow.png) | [png](/04-Lines/png/DexterShallow.png) | [cpp](/04-Lines/Lines.h#L560-L571) | [txt](/04-Lines/Lines.bitsy.txt#L456-L465) | [lua](/04-Lines/lines.p8.lua#L596-L608) | [py](/04-Lines/Lines.thumby.py#L538-L549) |
| DexterShallowMedium | ![](/previews/DexterShallowMedium.png) | [png](/04-Lines/png/DexterShallowMedium.png) | [cpp](/04-Lines/Lines.h#L573-L584) | [txt](/04-Lines/Lines.bitsy.txt#L467-L476) | [lua](/04-Lines/lines.p8.lua#L610-L622) | [py](/04-Lines/Lines.thumby.py#L551-L562) |

<br>

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Sinister | ![](/previews/Sinister.png) | [png](/04-Lines/png/Sinister.png) | [cpp](/04-Lines/Lines.h#L586-L598) | [txt](/04-Lines/Lines.bitsy.txt#L478-L487) | [lua](/04-Lines/lines.p8.lua#L624-L637) | [py](/04-Lines/Lines.thumby.py#L564-L575) |
| SinisterMedium <sup>o</sup>| ![](/previews/SinisterMedium.png) | [png](/04-Lines/png/SinisterMedium.png) | [cpp](/04-Lines/Lines.h#L600-L612) | [txt](/04-Lines/Lines.bitsy.txt#L489-L498) | [lua](/04-Lines/lines.p8.lua#L639-L652) | [py](/04-Lines/Lines.thumby.py#L577-L588) |
| SinisterBold <sup>o</sup>| ![](/previews/SinisterBold.png) | [png](/04-Lines/png/SinisterBold.png) | [cpp](/04-Lines/Lines.h#L614-L626) | [txt](/04-Lines/Lines.bitsy.txt#L500-L509) | [lua](/04-Lines/lines.p8.lua#L654-L667) | [py](/04-Lines/Lines.thumby.py#L590-L601) |
| SinisterSparse | ![](/previews/SinisterSparse.png) | [png](/04-Lines/png/SinisterSparse.png) | [cpp](/04-Lines/Lines.h#L628-L639) | [txt](/04-Lines/Lines.bitsy.txt#L511-L520) | [lua](/04-Lines/lines.p8.lua#L669-L681) | [py](/04-Lines/Lines.thumby.py#L603-L614) |
| SinisterSparseMedium | ![](/previews/SinisterSparseMedium.png) | [png](/04-Lines/png/SinisterSparseMedium.png) | [cpp](/04-Lines/Lines.h#L641-L652) | [txt](/04-Lines/Lines.bitsy.txt#L522-L531) | [lua](/04-Lines/lines.p8.lua#L683-L695) | [py](/04-Lines/Lines.thumby.py#L616-L627) |
| SinisterSparseBold | ![](/previews/SinisterSparseBold.png) | [png](/04-Lines/png/SinisterSparseBold.png) | [cpp](/04-Lines/Lines.h#L654-L665) | [txt](/04-Lines/Lines.bitsy.txt#L533-L542) | [lua](/04-Lines/lines.p8.lua#L697-L709) | [py](/04-Lines/Lines.thumby.py#L629-L640) |
| SinisterSparseExtraBold | ![](/previews/SinisterSparseExtraBold.png) | [png](/04-Lines/png/SinisterSparseExtraBold.png) | [cpp](/04-Lines/Lines.h#L667-L678) | [txt](/04-Lines/Lines.bitsy.txt#L544-L553) | [lua](/04-Lines/lines.p8.lua#L711-L723) | [py](/04-Lines/Lines.thumby.py#L642-L653) |
| SinisterSparseUltraBold <sup>o</sup>| ![](/previews/SinisterSparseUltraBold.png) | [png](/04-Lines/png/SinisterSparseUltraBold.png) | [cpp](/04-Lines/Lines.h#L680-L691) | [txt](/04-Lines/Lines.bitsy.txt#L555-L564) | [lua](/04-Lines/lines.p8.lua#L725-L737) | [py](/04-Lines/Lines.thumby.py#L655-L666) |
| SinisterStripes | ![](/previews/SinisterStripes.png) | [png](/04-Lines/png/SinisterStripes.png) | [cpp](/04-Lines/Lines.h#L693-L704) | [txt](/04-Lines/Lines.bitsy.txt#L566-L575) | [lua](/04-Lines/lines.p8.lua#L739-L751) | [py](/04-Lines/Lines.thumby.py#L668-L679) |
| SinisterPinstripe | ![](/previews/SinisterPinstripe.png) | [png](/04-Lines/png/SinisterPinstripe.png) | [cpp](/04-Lines/Lines.h#L706-L717) | [txt](/04-Lines/Lines.bitsy.txt#L577-L586) | [lua](/04-Lines/lines.p8.lua#L753-L765) | [py](/04-Lines/Lines.thumby.py#L681-L692) |
| SinisterPinstripeMedium | ![](/previews/SinisterPinstripeMedium.png) | [png](/04-Lines/png/SinisterPinstripeMedium.png) | [cpp](/04-Lines/Lines.h#L719-L730) | [txt](/04-Lines/Lines.bitsy.txt#L588-L597) | [lua](/04-Lines/lines.p8.lua#L767-L779) | [py](/04-Lines/Lines.thumby.py#L694-L705) |
| SinisterSteep | ![](/previews/SinisterSteep.png) | [png](/04-Lines/png/SinisterSteep.png) | [cpp](/04-Lines/Lines.h#L732-L743) | [txt](/04-Lines/Lines.bitsy.txt#L599-L608) | [lua](/04-Lines/lines.p8.lua#L781-L793) | [py](/04-Lines/Lines.thumby.py#L707-L718) |
| SinisterSteepMedium | ![](/previews/SinisterSteepMedium.png) | [png](/04-Lines/png/SinisterSteepMedium.png) | [cpp](/04-Lines/Lines.h#L745-L756) | [txt](/04-Lines/Lines.bitsy.txt#L610-L619) | [lua](/04-Lines/lines.p8.lua#L795-L807) | [py](/04-Lines/Lines.thumby.py#L720-L731) |
| SinisterShallow | ![](/previews/SinisterShallow.png) | [png](/04-Lines/png/SinisterShallow.png) | [cpp](/04-Lines/Lines.h#L758-L769) | [txt](/04-Lines/Lines.bitsy.txt#L621-L630) | [lua](/04-Lines/lines.p8.lua#L809-L821) | [py](/04-Lines/Lines.thumby.py#L733-L744) |
| SinisterShallowMedium | ![](/previews/SinisterShallowMedium.png) | [png](/04-Lines/png/SinisterShallowMedium.png) | [cpp](/04-Lines/Lines.h#L771-L782) | [txt](/04-Lines/Lines.bitsy.txt#L632-L641) | [lua](/04-Lines/lines.p8.lua#L823-L835) | [py](/04-Lines/Lines.thumby.py#L746-L757) |

[`⤴`](#gallery)

---

### 05 – Waves
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Ripple | ![](/previews/Ripple.png) | [png](/05-Waves/png/Ripple.png) | cpp | txt | lua | py
| Wave <sup>o</sup>| ![](/previews/Wave.png) | [png](/05-Waves/png/Wave.png) | cpp | txt | lua | py
| TidalLight | ![](/previews/TidalLight.png) | [png](/05-Waves/png/TidalLight.png) | cpp | txt | lua | py
| Tidal | ![](/previews/Tidal.png) | [png](/05-Waves/png/Tidal.png) | cpp | txt | lua | py
| TidalMedium | ![](/previews/TidalMedium.png) | [png](/05-Waves/png/TidalMedium.png) | cpp | txt | lua | py
| OceanicLight | ![](/previews/OceanicLight.png) | [png](/05-Waves/png/OceanicLight.png) | cpp | txt | lua | py
| Oceanic | ![](/previews/Oceanic.png) | [png](/05-Waves/png/Oceanic.png) | cpp | txt | lua | py
| VairPoint | ![](/previews/VairPoint.png) | [png](/05-Waves/png/VairPoint.png) | cpp | txt | lua | py
| DoubleHelix | ![](/previews/DoubleHelix.png) | [png](/05-Waves/png/DoubleHelix.png) | cpp | txt | lua | py

[`⤴`](#gallery)

---

### 06 – Grid
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| GridDots <sup>o</sup>| ![](/previews/GridDots.png) | [png](/06-Grid/png/GridDots.png) | cpp | txt | lua | py |
| GridDotsCentre | ![](/previews/GridDotsCentre.png) | [png](/06-Grid/png/GridDotsCentre.png) | cpp | txt | lua | py |
| Grid <sup>o</sup>| ![](/previews/Grid.png) | [png](/06-Grid/png/Grid.png) | cpp | txt | lua | py |
| GridMedium | ![](/previews/GridMedium.png) | [png](/06-Grid/png/GridMedium.png) | cpp | txt | lua | py |
| GridBold | ![](/previews/GridBold.png) | [png](/06-Grid/png/GridBold.png) | cpp | txt | lua | py |
| GridMiniDots | ![](/previews/GridMiniDots.png) | [png](/06-Grid/png/GridMiniDots.png) | cpp | txt | lua | py |
| GridMini <sup>o</sup>| ![](/previews/GridMini.png) | [png](/06-Grid/png/GridMini.png) | cpp | txt | lua | py |
| GridMiniMedium | ![](/previews/GridMiniMedium.png) | [png](/06-Grid/png/GridMiniMedium.png) | cpp | txt | lua | py |
| GridDense | ![](/previews/GridDense.png) | [png](/06-Grid/png/GridDense.png) | cpp | txt | lua | py |
| GridDiagonalDots <sup>o</sup>| ![](/previews/GridDiagonalDots.png) | [png](/06-Grid/png/GridDiagonalDots.png) | cpp | txt | lua | py |
| GridDiagonal <sup>o</sup>| ![](/previews/GridDiagonal.png) | [png](/06-Grid/png/GridDiagonal.png) | cpp | txt | lua | py |
| GridDiagonalMedium | ![](/previews/GridDiagonalMedium.png) | [png](/06-Grid/png/GridDiagonalMedium.png) | cpp | txt | lua | py |
| GridDiagonalMini | ![](/previews/GridDiagonalMini.png) | [png](/06-Grid/png/GridDiagonalMini.png) | cpp | txt | lua | py |
| Honeycomb | ![](/previews/Honeycomb.png) | [png](/06-Grid/png/Honeycomb.png) | cpp | txt | lua | py |
| Trapezoid | ![](/previews/Trapezoid.png) | [png](/06-Grid/png/Trapezoid.png) | cpp | txt | lua | py |

[`⤴`](#gallery)

---

### 07 – Checked
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| CheckMicro <sup>p</sup>| ![](/previews/CheckMicro.png) | [png](/07-Checked/png/CheckMicro.png) | cpp | txt | lua | py
| CheckMini <sup>o</sup>| ![](/previews/CheckMini.png) | [png](/07-Checked/png/CheckMini.png) | cpp | txt | lua | py
| Check <sup>o</sup>| ![](/previews/Check.png) | [png](/07-Checked/png/Check.png) | cpp | txt | lua | py
| CheckShaded | ![](/previews/CheckShaded.png) | [png](/07-Checked/png/CheckShaded.png) | cpp | txt | lua | py
| CheckBox | ![](/previews/CheckBox.png) | [png](/07-Checked/png/CheckBox.png) | cpp | txt | lua | py
| CheckSquare | ![](/previews/CheckSquare.png) | [png](/07-Checked/png/CheckSquare.png) | cpp | txt | lua | py
| CheckHorizontalMini | ![](/previews/CheckHorizontalMini.png) | [png](/07-Checked/png/CheckHorizontalMini.png) | cpp | txt | lua | py
| CheckHorizontal | ![](/previews/CheckHorizontal.png) | [png](/07-Checked/png/CheckHorizontal.png) | cpp | txt | lua | py
| CheckVerticalMini | ![](/previews/CheckVerticalMini.png) | [png](/07-Checked/png/CheckVerticalMini.png) | cpp | txt | lua | py
| CheckVertical | ![](/previews/CheckVertical.png) | [png](/07-Checked/png/CheckVertical.png) | cpp | txt | lua | py
| Diamond <sup>o</sup>| ![](/previews/Diamond.png) | [png](/07-Checked/png/Diamond.png) | cpp | txt | lua | py
| DiamondShaded | ![](/previews/DiamondShaded.png) | [png](/07-Checked/png/DiamondShaded.png) | cpp | txt | lua | py
| DiamondLined | ![](/previews/DiamondLined.png) | [png](/07-Checked/png/DiamondLined.png) | cpp | txt | lua | py
| DiamondBold | ![](/previews/DiamondBold.png) | [png](/07-Checked/png/DiamondBold.png) | cpp | txt | lua | py
| CheckDiagonalMini | ![](/previews/CheckDiagonalMini.png) | [png](/07-Checked/png/CheckDiagonalMini.png) | cpp | txt | lua | py
| CheckDiagonal | ![](/previews/CheckDiagonal.png) | [png](/07-Checked/png/CheckDiagonal.png) | cpp | txt | lua | py
| CheckDiagonalShaded | ![](/previews/CheckDiagonalShaded.png) | [png](/07-Checked/png/CheckDiagonalShaded.png) | cpp | txt | lua | py
| TernaryMini | ![](/previews/TernaryMini.png) | [png](/07-Checked/png/TernaryMini.png) | cpp | txt | lua | py
| Ternary | ![](/previews/Ternary.png) | [png](/07-Checked/png/Ternary.png) | cpp | txt | lua | py
| TernaryVerticalMini | ![](/previews/TernaryVerticalMini.png) | [png](/07-Checked/png/TernaryVerticalMini.png) | cpp | txt | lua | py
| TernaryVertical | ![](/previews/TernaryVertical.png) | [png](/07-Checked/png/TernaryVertical.png) | cpp | txt | lua | py
| Gyron | ![](/previews/Gyron.png) | [png](/07-Checked/png/Gyron.png) | cpp | txt | lua | py
| TriangleMini | ![](/previews/TriangleMini.png) | [png](/07-Checked/png/TriangleMini.png) | cpp | txt | lua | py
| Triangle | ![](/previews/Triangle.png) | [png](/07-Checked/png/Triangle.png) | cpp | txt | lua | py
| TriangleShaded | ![](/previews/TriangleShaded.png) | [png](/07-Checked/png/TriangleShaded.png) | cpp | txt | lua | py
| ChevronCheckMini | ![](/previews/ChevronCheckMini.png) | [png](/07-Checked/png/ChevronCheckMini.png) | cpp | txt | lua | py
| ChevronCheckDense | ![](/previews/ChevronCheckDense.png) | [png](/07-Checked/png/ChevronCheckDense.png) | cpp | txt | lua | py
| ChevronCheck | ![](/previews/ChevronCheck.png) | [png](/07-Checked/png/ChevronCheck.png) | cpp | txt | lua | py

[`⤴`](#gallery) 

---

### 08 – Rectilinear
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| SquareMini <sup>p</sup>| ![](/previews/SquareMini.png) | [png](/08-Rectilinear/png/SquareMini.png) | cpp | txt | lua | py |
| BilletMini <sup>p</sup>| ![](/previews/BilletMini.png) | [png](/08-Rectilinear/png/BilletMini.png) | cpp | txt | lua | py |
| Box | ![](/previews/Box.png) | [png](/08-Rectilinear/png/Box.png) | cpp | txt | lua | py |
| BoxMedium | ![](/previews/BoxMedium.png) | [png](/08-Rectilinear/png/BoxMedium.png) | cpp | txt | lua | py |
| Waffle | ![](/previews/Waffle.png) | [png](/08-Rectilinear/png/Waffle.png) | cpp | txt | lua | py |
| Tile | ![](/previews/Tile.png) | [png](/08-Rectilinear/png/Tile.png) | cpp | txt | lua | py
| TileShaded | ![](/previews/TileShaded.png) | [png](/08-Rectilinear/png/TileShaded.png) | cpp | txt | lua | py
| Illuminated | ![](/previews/Illuminated.png) | [png](/08-Rectilinear/png/Illuminated.png) | cpp | txt | lua | py |
| Block | ![](/previews/Block.png) | [png](/08-Rectilinear/png/Block.png) | cpp | txt | lua | py
| BlockPyramid | ![](/previews/BlockPyramid.png) | [png](/08-Rectilinear/png/BlockPyramid.png) | cpp | txt | lua | py

[`⤴`](#gallery)

---

### 09 – Radial
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Nebula | ![](/previews/Nebula.png) | [png](/09-Radial/png/Nebula.png) | [cpp](/09-Radial/Radial.h#L12-L23) | [txt](/09-Radial/Radial.bitsy.txt#L5-L14) | [lua](/09-Radial/radial.p8.lua#L7-L19) | [py](/09-Radial/Radial.thumby.py#L5-L16) |
| Pinwheel | ![](/previews/Pinwheel.png) | [png](/09-Radial/png/Pinwheel.png) | [cpp](/09-Radial/Radial.h#L25-L36) | [txt](/09-Radial/Radial.bitsy.txt#L16-L25) | [lua](/09-Radial/radial.p8.lua#L21-L33) | [py](/09-Radial/Radial.thumby.py#L18-L29) |
| Pivot | ![](/previews/Pivot.png) | [png](/09-Radial/png/Pivot.png) | [cpp](/09-Radial/Radial.h#L38-L49) | [txt](/09-Radial/Radial.bitsy.txt#L27-L36) | [lua](/09-Radial/radial.p8.lua#L35-L47) | [py](/09-Radial/Radial.thumby.py#L31-L42) |
| Fylfot | ![](/previews/Fylfot.png) | [png](/09-Radial/png/Fylfot.png) | [cpp](/09-Radial/Radial.h#L51-L62) | [txt](/09-Radial/Radial.bitsy.txt#L38-L47) | [lua](/09-Radial/radial.p8.lua#L49-L61) | [py](/09-Radial/Radial.thumby.py#L44-L55) |
| Rotary | ![](/previews/Rotary.png) | [png](/09-Radial/png/Rotary.png) | [cpp](/09-Radial/Radial.h#L64-L75) | [txt](/09-Radial/Radial.bitsy.txt#L49-L58) | [lua](/09-Radial/radial.p8.lua#L63-L75) | [py](/09-Radial/Radial.thumby.py#L57-L68) |
| StarBurst | ![](/previews/StarBurst.png) | [png](/09-Radial/png/StarBurst.png) | [cpp](/09-Radial/Radial.h#L77-L88) | [txt](/09-Radial/Radial.bitsy.txt#L60-L69) | [lua](/09-Radial/radial.p8.lua#L77-L89) | [py](/09-Radial/Radial.thumby.py#L70-L81) |
| Swirl | ![](/previews/Swirl.png) | [png](/09-Radial/png/Swirl.png) | [cpp](/09-Radial/Radial.h#L90-L101) | [txt](/09-Radial/Radial.bitsy.txt#L71-L80) | [lua](/09-Radial/radial.p8.lua#L91-L103) | [py](/09-Radial/Radial.thumby.py#L83-L94) |
| Swarm | ![](/previews/Swarm.png) | [png](/09-Radial/png/Swarm.png) | [cpp](/09-Radial/Radial.h#L103-L114) | [txt](/09-Radial/Radial.bitsy.txt#L82-L91) | [lua](/09-Radial/radial.p8.lua#L105-L117) | [py](/09-Radial/Radial.thumby.py#L96-L107) |
| Encircled | ![](/previews/Encircled.png) | [png](/09-Radial/png/Encircled.png) | [cpp](/09-Radial/Radial.h#L116-L127) | [txt](/09-Radial/Radial.bitsy.txt#L93-L102) | [lua](/09-Radial/radial.p8.lua#L119-L131) | [py](/09-Radial/Radial.thumby.py#L109-L120) |
| Spokes | ![](/previews/Spokes.png) | [png](/09-Radial/png/Spokes.png) | [cpp](/09-Radial/Radial.h#L129-L140) | [txt](/09-Radial/Radial.bitsy.txt#L104-L113) | [lua](/09-Radial/radial.p8.lua#L133-L145) | [py](/09-Radial/Radial.thumby.py#L122-L133) |
| Cartwheel | ![](/previews/Cartwheel.png) | [png](/09-Radial/png/Cartwheel.png) | [cpp](/09-Radial/Radial.h#L142-L153) | [txt](/09-Radial/Radial.bitsy.txt#L115-L124) | [lua](/09-Radial/radial.p8.lua#L147-L159) | [py](/09-Radial/Radial.thumby.py#L135-L146) |
| CartwheelBold | ![](/previews/CartwheelBold.png) | [png](/09-Radial/png/CartwheelBold.png) | [cpp](/09-Radial/Radial.h#L155-L166) | [txt](/09-Radial/Radial.bitsy.txt#L126-L135) | [lua](/09-Radial/radial.p8.lua#L161-L173) | [py](/09-Radial/Radial.thumby.py#L148-L159) |
| CartwheelExtraBold | ![](/previews/CartwheelExtraBold.png) | [png](/09-Radial/png/CartwheelExtraBold.png) | [cpp](/09-Radial/Radial.h#L168-L179) | [txt](/09-Radial/Radial.bitsy.txt#L137-L146) | [lua](/09-Radial/radial.p8.lua#L175-L187) | [py](/09-Radial/Radial.thumby.py#L161-L172) |

[`⤴`](#gallery)

---

### 10 – Round
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Sphere <sup>o</sup>| ![](/previews/Sphere.png) | [png](/10-Round/png/Sphere.png) | cpp | txt | lua | py
| SphereMini <sup>p</sup>| ![](/previews/SphereMini.png) | [png](/10-Round/png/SphereMini.png) | cpp | txt | lua | py

[`⤴`](#gallery)

---

### 11 – Woven
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Interlinked <sup>o</sup>| ![](/previews/Interlinked.png) | [png](/11-Woven/png/Interlinked.png) | [cpp](/11-Woven/Woven.h#L12-L23) | [txt](/11-Woven/Woven.bitsy.txt#L5-L14) | [lua](/11-Woven/woven.p8.lua#L7-L19) | [py](/11-Woven/Woven.thumby.py#L5-L16) |
| WeaveDense | ![](/previews/WeaveDense.png) | [png](/11-Woven/png/WeaveDense.png) | [cpp](/11-Woven/Woven.h#L25-L36) | [txt](/11-Woven/Woven.bitsy.txt#L16-L25) | [lua](/11-Woven/woven.p8.lua#L21-L33) | [py](/11-Woven/Woven.thumby.py#L18-L29) |
| Weave | ![](/previews/Weave.png) | [png](/11-Woven/png/Weave.png) | [cpp](/11-Woven/Woven.h#L38-L49) | [txt](/11-Woven/Woven.bitsy.txt#L27-L36) | [lua](/11-Woven/woven.p8.lua#L35-L47) | [py](/11-Woven/Woven.thumby.py#L31-L42) |
| WeaveMedium | ![](/previews/WeaveMedium.png) | [png](/11-Woven/png/WeaveMedium.png) | [cpp](/11-Woven/Woven.h#L51-L62) | [txt](/11-Woven/Woven.bitsy.txt#L38-L47) | [lua](/11-Woven/woven.p8.lua#L49-L61) | [py](/11-Woven/Woven.thumby.py#L44-L55) |
| WeaveBold | ![](/previews/WeaveBold.png) | [png](/11-Woven/png/WeaveBold.png) | [cpp](/11-Woven/Woven.h#L64-L75) | [txt](/11-Woven/Woven.bitsy.txt#L49-L58) | [lua](/11-Woven/woven.p8.lua#L63-L75) | [py](/11-Woven/Woven.thumby.py#L57-L68) |
| Net | ![](/previews/Net.png) | [png](/11-Woven/png/Net.png) | [cpp](/11-Woven/Woven.h#L77-L88) | [txt](/11-Woven/Woven.bitsy.txt#L60-L69) | [lua](/11-Woven/woven.p8.lua#L77-L89) | [py](/11-Woven/Woven.thumby.py#L70-L81) |
| Wicker | ![](/previews/Wicker.png) | [png](/11-Woven/png/Wicker.png) | [cpp](/11-Woven/Woven.h#L90-L101) | [txt](/11-Woven/Woven.bitsy.txt#L71-L80) | [lua](/11-Woven/woven.p8.lua#L91-L103) | [py](/11-Woven/Woven.thumby.py#L83-L94) |
| Laced | ![](/previews/Laced.png) | [png](/11-Woven/png/Laced.png) | [cpp](/11-Woven/Woven.h#L103-L114) | [txt](/11-Woven/Woven.bitsy.txt#L82-L91) | [lua](/11-Woven/woven.p8.lua#L105-L117) | [py](/11-Woven/Woven.thumby.py#L96-L107) |
| SquareBasket | ![](/previews/SquareBasket.png) | [png](/11-Woven/png/SquareBasket.png) | [cpp](/11-Woven/Woven.h#L116-L127) | [txt](/11-Woven/Woven.bitsy.txt#L93-L102) | [lua](/11-Woven/woven.p8.lua#L119-L131) | [py](/11-Woven/Woven.thumby.py#L109-L120) |
| Puppytooth <sup>p</sup>| ![](/previews/Puppytooth.png) | [png](/11-Woven/png/Puppytooth.png) | [cpp](/11-Woven/Woven.h#L129-L141) | [txt](/11-Woven/Woven.bitsy.txt#L104-L113) | [lua](/11-Woven/woven.p8.lua#L133-L146) | [py](/11-Woven/Woven.thumby.py#L122-L133) |
| Houndstooth | ![](/previews/Houndstooth.png) | [png](/11-Woven/png/Houndstooth.png) | [cpp](/11-Woven/Woven.h#L143-L154) | [txt](/11-Woven/Woven.bitsy.txt#L115-L124) | [lua](/11-Woven/woven.p8.lua#L148-L160) | [py](/11-Woven/Woven.thumby.py#L135-L146) |
| Gingham | ![](/previews/Gingham.png) | [png](/11-Woven/png/Gingham.png) | [cpp](/11-Woven/Woven.h#L156-L167) | [txt](/11-Woven/Woven.bitsy.txt#L126-L135) | [lua](/11-Woven/woven.p8.lua#L162-L174) | [py](/11-Woven/Woven.thumby.py#L148-L159) |
| Plaid | ![](/previews/Plaid.png) | [png](/11-Woven/png/Plaid.png) | [cpp](/11-Woven/Woven.h#L169-L180) | [txt](/11-Woven/Woven.bitsy.txt#L137-L146) | [lua](/11-Woven/woven.p8.lua#L176-L188) | [py](/11-Woven/Woven.thumby.py#L161-L172) |
| Tartan | ![](/previews/Tartan.png) | [png](/11-Woven/png/Tartan.png) | [cpp](/11-Woven/Woven.h#L182-L193) | [txt](/11-Woven/Woven.bitsy.txt#L148-L157) | [lua](/11-Woven/woven.p8.lua#L190-L202) | [py](/11-Woven/Woven.thumby.py#L174-L185) |

[`⤴`](#gallery)

---

### 12 – Architecture
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Shingle <sup>o</sup>| ![](/previews/Shingle.png) | [png](/12-Architecture/png/Shingle.png) | cpp | txt | lua | py
| Brick <sup>o</sup>| ![](/previews/Brick.png) | [png](/12-Architecture/png/Brick.png) | cpp | txt | lua | py
| BrickVertical | ![](/previews/BrickVertical.png) | [png](/12-Architecture/png/BrickVertical.png) | cpp | txt | lua | py
| BrickSinister <sup>o</sup>| ![](/previews/BrickSinister.png) | [png](/12-Architecture/png/BrickSinister.png) | cpp | txt | lua | py
| BrickSinisterRounded| ![](/previews/BrickSinisterRounded.png) | [png](/12-Architecture/png/BrickSinisterRounded.png) | cpp | txt | lua | py
| BrickSinisterMini | ![](/previews/BrickSinisterMini.png) | [png](/12-Architecture/png/BrickSinisterMini.png) | cpp | txt | lua | py
| BrickMini | ![](/previews/BrickMini.png) | [png](/12-Architecture/png/BrickMini.png) | cpp | txt | lua | py
| BrickMiniDamage | ![](/previews/BrickMiniDamage.png) | [png](/12-Architecture/png/BrickMiniDamage.png) | cpp | txt | lua | py
| BrickMiniRuins | ![](/previews/BrickMiniRuins.png) | [png](/12-Architecture/png/BrickMiniRuins.png) | cpp | txt | lua | py
| StoneWall | ![](/previews/StoneWall.png) | [png](/12-Architecture/png/StoneWall.png) | cpp | txt | lua | py
| QuarryWall | ![](/previews/QuarryWall.png) | [png](/12-Architecture/png/QuarryWall.png) | cpp | txt | lua | py
| StoneBlock | ![](/previews/StoneBlock.png) | [png](/12-Architecture/png/StoneBlock.png) | cpp | txt | lua | py
| Flagstone | ![](/previews/Flagstone.png) | [png](/12-Architecture/png/Flagstone.png) | cpp | txt | lua | py
| PavingStones | ![](/previews/PavingStones.png) | [png](/12-Architecture/png/PavingStones.png) | cpp | txt | lua | py
| Archway | ![](/previews/Archway.png) | [png](/12-Architecture/png/Archway.png) | cpp | txt | lua | py
| Window | ![](/previews/Window.png) | [png](/12-Architecture/png/Window.png) | cpp | txt | lua | py
| Picket | ![](/previews/Picket.png) | [png](/12-Architecture/png/Picket.png) | cpp | txt | lua | py

[`⤴`](#gallery)

---

### 13 – Nature
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Scales | ![](/previews/Scales.png) | [png](/13-Nature/png/Scales.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L5-L14) | lua | [py](/13-Nature/Nature.thumby.py#L5-L16)
| Loam | ![](/previews/Loam.png) | [png](/13-Nature/png/Loam.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L16-L25) | lua | [py](/13-Nature/Nature.thumby.py#L18-L29)
| Sand | ![](/previews/Sand.png) | [png](/13-Nature/png/Sand.png) | cpp | txt | lua | py
| Grass | ![](/previews/Grass.png) | [png](/13-Nature/png/Grass.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L27-L36) | lua | [py](/13-Nature/Nature.thumby.py#L31-L42)
| Divot <sup>o</sup>| ![](/previews/Divot.png) | [png](/13-Nature/png/Divot.png) | cpp | txt | lua | py
| Pasture | ![](/previews/Pasture.png) | [png](/13-Nature/png/Pasture.png) | cpp | txt | lua | py
| Daisies | ![](/previews/Daisies.png) | [png](/13-Nature/png/Daisies.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L60-L69) | lua | [py](/13-Nature/Nature.thumby.py#L70-L81)
| Tuffet | ![](/previews/Tuffet.png) | [png](/13-Nature/png/Tuffet.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L38-L47) | lua | [py](/13-Nature/Nature.thumby.py#L44-L55)
| Shrub | ![](/previews/Shrub.png) | [png](/13-Nature/png/Shrub.png) | cpp | txt | lua | py
| Leaves | ![](/previews/Leaves.png) | [png](/13-Nature/png/Leaves.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L49-L58) | lua | [py](/13-Nature/Nature.thumby.py#L57-L68)
| Crop | ![](/previews/Crop.png) | [png](/13-Nature/png/Crop.png) | cpp | txt | lua | py
| Bush | ![](/previews/Bush.png) | [png](/13-Nature/png/Bush.png) | cpp | txt | lua | py
| Thicket | ![](/previews/Thicket.png) | [png](/13-Nature/png/Thicket.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L82-L91) | lua | [py](/13-Nature/Nature.thumby.py#L96-L107)
| Tree | ![](/previews/Tree.png) | [png](/13-Nature/png/Tree.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L71-L80) | lua | [py](/13-Nature/Nature.thumby.py#L83-L94)
| Rocks | ![](/previews/Rocks.png) | [png](/13-Nature/png/Rocks.png) | cpp | txt | lua | py
| Mounds | ![](/previews/Mounds.png) | [png](/13-Nature/png/Mounds.png) | cpp | txt | lua | py
| Skull | ![](/previews/Skull.png) | [png](/13-Nature/png/Skull.png) | cpp | txt | lua | py
| CrackedBoulder | ![](/previews/CrackedBoulder.png) | [png](/13-Nature/png/CrackedBoulder.png) | cpp | [txt](/13-Nature/Nature.bitsy.txt#L93-L102) | lua | [py](/13-Nature/Nature.thumby.py#L109-L120)
| BeanStalk | ![](/previews/BeanStalk.png) | [png](/13-Nature/png/BeanStalk.png) | cpp | txt | lua | py

[`⤴`](#gallery)

---

### 14 – Symbols
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Love | ![](/previews/Love.png) | [png](/14-Symbols/png/Love.png) | [cpp](/14-Symbols/Symbols.h#L12-L23) | [txt](/14-Symbols/Symbols.bitsy.txt#L5-L14) | [lua](/14-Symbols/symbols.p8.lua#L7-L19) | [py](/14-Symbols/Symbols.thumby.py#L5-L16)
| Heart | ![](/previews/Heart.png) | [png](/14-Symbols/png/Heart.png) | [cpp](/14-Symbols/Symbols.h#L25-L36) | [txt](/14-Symbols/Symbols.bitsy.txt#L16-L25) | [lua](/14-Symbols/symbols.p8.lua#L21-L33) | [py](/14-Symbols/Symbols.thumby.py#L18-L29) |
| HeartMini <sup>p</sup>| ![](/previews/HeartMini.png) | [png](/14-Symbols/png/HeartMini.png) | [cpp](/14-Symbols/Symbols.h#L38-L50) | [txt](/14-Symbols/Symbols.bitsy.txt#L27-L36) | [lua](/14-Symbols/symbols.p8.lua#L35-L48) | [py](/14-Symbols/Symbols.thumby.py#L31-L42) |
| Anchor | ![](/previews/Anchor.png) | [png](/14-Symbols/png/Anchor.png) | [cpp](/14-Symbols/Symbols.h#L52-L63) | [txt](/14-Symbols/Symbols.bitsy.txt#L38-L47) | [lua](/14-Symbols/symbols.p8.lua#L50-L62) | [py](/14-Symbols/Symbols.thumby.py#L44-L55) |
| Crossbones | ![](/previews/Crossbones.png) | [png](/14-Symbols/png/Crossbones.png) | [cpp](/14-Symbols/Symbols.h#L65-L76) | [txt](/14-Symbols/Symbols.bitsy.txt#L49-L58) | [lua](/14-Symbols/symbols.p8.lua#L64-L76) | [py](/14-Symbols/Symbols.thumby.py#L57-L68)
| Cross | ![](/previews/Cross.png) | [png](/14-Symbols/png/Cross.png) | [cpp](/14-Symbols/Symbols.h#L78-L89) | [txt](/14-Symbols/Symbols.bitsy.txt#L60-L69) |[lua](/14-Symbols/symbols.p8.lua#L78-L90)  | [py](/14-Symbols/Symbols.thumby.py#L70-L81)
| CrossMini <sup>p</sup>| ![](/previews/CrossMini.png) | [png](/14-Symbols/png/CrossMini.png) | [cpp](/14-Symbols/Symbols.h#L91-L103) | [txt](/14-Symbols/Symbols.bitsy.txt#L71-L80) | [lua](/14-Symbols/symbols.p8.lua#L92-L105) | [py](/14-Symbols/Symbols.thumby.py#L83-L94)
| Amongi | ![](/previews/Amongi.png) | [png](/14-Symbols/png/Amongi.png) | [cpp](/14-Symbols/Symbols.h#L105-L116) | [txt](/14-Symbols/Symbols.bitsy.txt#L82-L91) | [lua](/14-Symbols/symbols.p8.lua#L107-L119) | [py](/14-Symbols/Symbols.thumby.py#L96-L107)

[`⤴`](#gallery)

---

### 15 – Other
| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Chain | ![](/previews/Chain.png) | [png](/15-Other/png/Chain.png) | cpp | txt | lua | py
| ChainLarge | ![](/previews/ChainLarge.png) | [png](/15-Other/png/ChainLarge.png) | cpp | txt | lua | py

[`⤴`](#gallery)

---

<sup>o</sup>: Pattern included in the `Office` collection  
<sup>p</sup>: Pattern included in the `PICO-8` collection

<br>


## Acknowledgements

Inspired by studying software from the mid 1980's, to video games of the early 1990's. Influenced by the wonderful pixel artists of today. All artwork is drawn *tabula rasa*. Please let me know if any designs resemble the work of others.

Artwork and files created using [ABSpriteEditor](https://github.com/Pharap/ABSpriteEditor). Patterns tested and refined using [ASE](https://github.com/pmwasson/ASE) and [Bitsy](https://ledoux.itch.io/bitsy).  Additional file wrangling with [image2cpp](https://javl.github.io/image2cpp/). Data tweaking in LibreOffice, image conversions by ImageMagick, compressed with `pngslim` and metadata added with ExifTool.

Special thanks to @castpixel, @dw817, @felipemanga, @javl, @le-doux, @lexaloffle, @Pharap, @pmwasson.

## Legal
Produced by Andrew C.E. Dent and dedicated to the Public Domain (CC0 – free to use). Giving attribution is not required but always appreciated! Please read the separate `LICENSE` file.

All trademarks are the property of their respective owners.  
&emsp; *Arduboy*® is a registered trademark of [Arduboy, Inc., USA](https://www.arduboy.com).  
&emsp; *Bitsy* is produced by [Adam Le Doux](https://bitsy.org).  
&emsp; *GAMBY* was produced by [Logicalzero](http://logicalzero.com/gamby/) (David Stokes).  
&emsp; *LibreOffice* is a trademark of [The Document Foundation](https://www.libreoffice.org).  
&emsp; *PICO-8* and *Picotron* are trademarks of [Lexaloffle Games LLP](https://www.lexaloffle.com).  
&emsp; *Thumby* is a trademark of AkroSense LLC, USA / [TinyCircuits](https://thumby.us).
