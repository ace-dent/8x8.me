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
| HorizontalDenseLineDash | ![](/previews/HorizontalDenseLineDash.png) | [png](/04-Lines/png/HorizontalDenseLineDash.png) | [cpp](/04-Lines/Lines.h#L12-L24) | txt | lua | py
| HorizontalDenseLineDot | ![](/previews/HorizontalDenseLineDot.png) | [png](/04-Lines/png/HorizontalDenseLineDot.png) | [cpp](/04-Lines/Lines.h#L26-L38) | txt | lua | py
| HorizontalDense <sup>o,p</sup>| ![](/previews/HorizontalDense.png) | [png](/04-Lines/png/HorizontalDense.png) | [cpp](/04-Lines/Lines.h#L40-L52) | txt | lua | py
| Horizontal | ![](/previews/Horizontal.png) | [png](/04-Lines/png/Horizontal.png) | [cpp](/04-Lines/Lines.h#L54-L66) | txt | lua | py
| HorizontalMedium <sup>o</sup>| ![](/previews/HorizontalMedium.png) | [png](/04-Lines/png/HorizontalMedium.png) | [cpp](/04-Lines/Lines.h#L68-L80) | txt | lua | py
| HorizontalBold | ![](/previews/HorizontalBold.png) | [png](/04-Lines/png/HorizontalBold.png) | [cpp](/04-Lines/Lines.h#L82-L94) | txt | lua | py
| HorizontalSparse | ![](/previews/HorizontalSparse.png) | [png](/04-Lines/png/HorizontalSparse.png) | [cpp](/04-Lines/Lines.h#L96-L107) | txt | lua | py
| HorizontalSparseMedium | ![](/previews/HorizontalSparseMedium.png) | [png](/04-Lines/png/HorizontalSparseMedium.png) | [cpp](/04-Lines/Lines.h#L109-L120) | txt | lua | py
| HorizontalSparseBold | ![](/previews/HorizontalSparseBold.png) | [png](/04-Lines/png/HorizontalSparseBold.png) | [cpp](/04-Lines/Lines.h#L122-L133) | txt | lua | py
| HorizontalSparseExtraBold | ![](/previews/HorizontalSparseExtraBold.png) | [png](/04-Lines/png/HorizontalSparseExtraBold.png) | [cpp](/04-Lines/Lines.h#L135-L146) | txt | lua | py
| HorizontalSparseUltraBold | ![](/previews/HorizontalSparseUltraBold.png) | [png](/04-Lines/png/HorizontalSparseUltraBold.png) | [cpp](/04-Lines/Lines.h#L148-L159) | txt | lua | py
| HorizontalStripes | ![](/previews/HorizontalStripes.png) | [png](/04-Lines/png/HorizontalStripes.png) | [cpp](/04-Lines/Lines.h#L161-L172) | txt | lua | py
| HorizontalPinstripe | ![](/previews/HorizontalPinstripe.png) | [png](/04-Lines/png/HorizontalPinstripe.png) | [cpp](/04-Lines/Lines.h#L174-L185) | txt | lua | py
| HorizontalPinstripeMedium | ![](/previews/HorizontalPinstripeMedium.png) | [png](/04-Lines/png/HorizontalPinstripeMedium.png) | [cpp](/04-Lines/Lines.h#L187-L198) | txt | lua | py

<br>

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| VerticalDenseLineDash | ![](/previews/VerticalDenseLineDash.png) | [png](/04-Lines/png/VerticalDenseLineDash.png) | cpp | txt | lua | py
| VerticalDenseLineDot | ![](/previews/VerticalDenseLineDot.png) | [png](/04-Lines/png/VerticalDenseLineDot.png) | cpp | txt | lua | py
| VerticalDense <sup>o,p</sup>| ![](/previews/VerticalDense.png) | [png](/04-Lines/png/VerticalDense.png) | cpp | txt | lua | py
| Vertical | ![](/previews/Vertical.png) | [png](/04-Lines/png/Vertical.png) | cpp | txt | lua | py
| VerticalMedium <sup>o</sup>| ![](/previews/VerticalMedium.png) | [png](/04-Lines/png/VerticalMedium.png) | cpp | txt | lua | py
| VerticalBold | ![](/previews/VerticalBold.png) | [png](/04-Lines/png/VerticalBold.png) | cpp | txt | lua | py
| VerticalSparse | ![](/previews/VerticalSparse.png) | [png](/04-Lines/png/VerticalSparse.png) | cpp | txt | lua | py
| VerticalSparseMedium | ![](/previews/VerticalSparseMedium.png) | [png](/04-Lines/png/VerticalSparseMedium.png) | cpp | txt | lua | py
| VerticalSparseBold | ![](/previews/VerticalSparseBold.png) | [png](/04-Lines/png/VerticalSparseBold.png) | cpp | txt | lua | py
| VerticalSparseExtraBold | ![](/previews/VerticalSparseExtraBold.png) | [png](/04-Lines/png/VerticalSparseExtraBold.png) | cpp | txt | lua | py
| VerticalSparseUltraBold | ![](/previews/VerticalSparseUltraBold.png) | [png](/04-Lines/png/VerticalSparseUltraBold.png) | cpp | txt | lua | py
| VerticalStripes | ![](/previews/VerticalStripes.png) | [png](/04-Lines/png/VerticalStripes.png) | cpp | txt | lua | py
| VerticalPinstripe | ![](/previews/VerticalPinstripe.png) | [png](/04-Lines/png/VerticalPinstripe.png) | cpp | txt | lua | py
| VerticalPinstripeMedium | ![](/previews/VerticalPinstripeMedium.png) | [png](/04-Lines/png/VerticalPinstripeMedium.png) | cpp | txt | lua | py

<br>

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Dexter | ![](/previews/Dexter.png) | [png](/04-Lines/png/Dexter.png) | cpp | txt | lua | py
| DexterMedium <sup>o</sup>| ![](/previews/DexterMedium.png) | [png](/04-Lines/png/DexterMedium.png) | cpp | txt | lua | py
| DexterBold <sup>o</sup>| ![](/previews/DexterBold.png) | [png](/04-Lines/png/DexterBold.png) | cpp | txt | lua | py
| DexterSparse | ![](/previews/DexterSparse.png) | [png](/04-Lines/png/DexterSparse.png) | cpp | txt | lua | py
| DexterSparseMedium | ![](/previews/DexterSparseMedium.png) | [png](/04-Lines/png/DexterSparseMedium.png) | cpp | txt | lua | py
| DexterSparseBold | ![](/previews/DexterSparseBold.png) | [png](/04-Lines/png/DexterSparseBold.png) | cpp | txt | lua | py
| DexterSparseExtraBold | ![](/previews/DexterSparseExtraBold.png) | [png](/04-Lines/png/DexterSparseExtraBold.png) | cpp | txt | lua | py
| DexterSparseUltraBold <sup>o</sup>| ![](/previews/DexterSparseUltraBold.png) | [png](/04-Lines/png/DexterSparseUltraBold.png) | cpp | txt | lua | py
| DexterStripes | ![](/previews/DexterStripes.png) | [png](/04-Lines/png/DexterStripes.png) | cpp | txt | lua | py
| DexterPinstripe | ![](/previews/DexterPinstripe.png) | [png](/04-Lines/png/DexterPinstripe.png) | cpp | txt | lua | py
| DexterPinstripeMedium | ![](/previews/DexterPinstripeMedium.png) | [png](/04-Lines/png/DexterPinstripeMedium.png) | cpp | txt | lua | py
| DexterSteep | ![](/previews/DexterSteep.png) | [png](/04-Lines/png/DexterSteep.png) | cpp | txt | lua | py
| DexterSteepMedium | ![](/previews/DexterSteepMedium.png) | [png](/04-Lines/png/DexterSteepMedium.png) | cpp | txt | lua | py
| DexterShallow | ![](/previews/DexterShallow.png) | [png](/04-Lines/png/DexterShallow.png) | cpp | txt | lua | py
| DexterShallowMedium | ![](/previews/DexterShallowMedium.png) | [png](/04-Lines/png/DexterShallowMedium.png) | cpp | txt | lua | py

<br>

| Pattern | Preview | Bitmap | Arduboy | Bitsy | PICO-8 | Thumby |
| :--- | :---: | :---: | :---: | :---: | :---: | :---: |
| Sinister | ![](/previews/Sinister.png) | [png](/04-Lines/png/Sinister.png) | cpp | txt | lua | py
| SinisterMedium <sup>o</sup>| ![](/previews/SinisterMedium.png) | [png](/04-Lines/png/SinisterMedium.png) | cpp | txt | lua | py
| SinisterBold <sup>o</sup>| ![](/previews/SinisterBold.png) | [png](/04-Lines/png/SinisterBold.png) | cpp | txt | lua | py
| SinisterSparse | ![](/previews/SinisterSparse.png) | [png](/04-Lines/png/SinisterSparse.png) | cpp | txt | lua | py
| SinisterSparseMedium | ![](/previews/SinisterSparseMedium.png) | [png](/04-Lines/png/SinisterSparseMedium.png) | cpp | txt | lua | py
| SinisterSparseBold | ![](/previews/SinisterSparseBold.png) | [png](/04-Lines/png/SinisterSparseBold.png) | cpp | txt | lua | py
| SinisterSparseExtraBold | ![](/previews/SinisterSparseExtraBold.png) | [png](/04-Lines/png/SinisterSparseExtraBold.png) | cpp | txt | lua | py
| SinisterSparseUltraBold <sup>o</sup>| ![](/previews/SinisterSparseUltraBold.png) | [png](/04-Lines/png/SinisterSparseUltraBold.png) | cpp | txt | lua | py
| SinisterStripes | ![](/previews/SinisterStripes.png) | [png](/04-Lines/png/SinisterStripes.png) | cpp | txt | lua | py
| SinisterPinstripe | ![](/previews/SinisterPinstripe.png) | [png](/04-Lines/png/SinisterPinstripe.png) | cpp | txt | lua | py
| SinisterPinstripeMedium | ![](/previews/SinisterPinstripeMedium.png) | [png](/04-Lines/png/SinisterPinstripeMedium.png) | cpp | txt | lua | py
| SinisterSteep | ![](/previews/SinisterSteep.png) | [png](/04-Lines/png/SinisterSteep.png) | cpp | txt | lua | py
| SinisterSteepMedium | ![](/previews/SinisterSteepMedium.png) | [png](/04-Lines/png/SinisterSteepMedium.png) | cpp | txt | lua | py
| SinisterShallow | ![](/previews/SinisterShallow.png) | [png](/04-Lines/png/SinisterShallow.png) | cpp | txt | lua | py
| SinisterShallowMedium | ![](/previews/SinisterShallowMedium.png) | [png](/04-Lines/png/SinisterShallowMedium.png) | cpp | txt | lua | py

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
| Window | ![](/previews/Window.png) | [png](/08-Rectilinear/png/Window.png) | cpp | txt | lua | py |
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
| Interlinked <sup>o</sup>| ![](/previews/Interlinked.png) | [png](/11-Woven/png/Interlinked.png) | [cpp](/11-Woven/Woven.h#L12-L23) | [txt](/11-Woven/Woven.bitsy.txt#L5-L14) | [lua](/11-Woven/woven.p8.lua#L7-L19) | [py](/11-Woven/Woven.thumby.py#L6-L17)
| WeaveDense | ![](/previews/WeaveDense.png) | [png](/11-Woven/png/WeaveDense.png) | [cpp](/11-Woven/Woven.h#L25-L36) | [txt](/11-Woven/Woven.bitsy.txt#L16-L25) | [lua](/11-Woven/woven.p8.lua#L21-L33) | [py](/11-Woven/Woven.thumby.py#L19-L30)
| Weave | ![](/previews/Weave.png) | [png](/11-Woven/png/Weave.png) | [cpp](/11-Woven/Woven.h#L38-L49)  | [txt](/11-Woven/Woven.bitsy.txt#L27-L36) | [lua](/11-Woven/woven.p8.lua#L35-L47) | [py](/11-Woven/Woven.thumby.py#L32-L43)
| WeaveMedium | ![](/previews/WeaveMedium.png) | [png](/11-Woven/png/WeaveMedium.png) | [cpp](/11-Woven/Woven.h#L51-L62)  | [txt](/11-Woven/Woven.bitsy.txt#L38-L47) | [lua](/11-Woven/woven.p8.lua#L49-L61) | [py](/11-Woven/Woven.thumby.py#L45-L56)
| WeaveBold | ![](/previews/WeaveBold.png) | [png](/11-Woven/png/WeaveBold.png) | [cpp](/11-Woven/Woven.h#L64-L75)  | [txt](/11-Woven/Woven.bitsy.txt#L49-L58) | [lua](/11-Woven/woven.p8.lua#L63-L75) | [py](/11-Woven/Woven.thumby.py#L58-L69)
| Net | ![](/previews/Net.png) | [png](/11-Woven/png/Net.png) | [cpp](/11-Woven/Woven.h#L77-L88)  | [txt](/11-Woven/Woven.bitsy.txt#L60-L69) | [lua](/11-Woven/woven.p8.lua#L77-L89) | [py](/11-Woven/Woven.thumby.py#L71-L82)
| Wicker | ![](/previews/Wicker.png) | [png](/11-Woven/png/Wicker.png) | [cpp](/11-Woven/Woven.h#L90-L101)  | [txt](/11-Woven/Woven.bitsy.txt#L71-L80) | [lua](/11-Woven/woven.p8.lua#L91-L103) | [py](/11-Woven/Woven.thumby.py#L84-L95)
| Laced | ![](/previews/Laced.png) | [png](/11-Woven/png/Laced.png) | [cpp](/11-Woven/Woven.h#L103-L114)  | [txt](/11-Woven/Woven.bitsy.txt#L82-L91) | [lua](/11-Woven/woven.p8.lua#L105-L117) | [py](/11-Woven/Woven.thumby.py#L97-L108)
| Puppytooth <sup>p</sup>| ![](/previews/Puppytooth.png) | [png](/11-Woven/png/Puppytooth.png) | [cpp](/11-Woven/Woven.h#L116-L128)  | [txt](/11-Woven/Woven.bitsy.txt#L93-L102) | [lua](/11-Woven/woven.p8.lua#L119-L132) | [py](/11-Woven/Woven.thumby.py#L110-L121)
| Houndstooth | ![](/previews/Houndstooth.png) | [png](/11-Woven/png/Houndstooth.png) | [cpp](/11-Woven/Woven.h#L130-L141)  | [txt](/11-Woven/Woven.bitsy.txt#L104-L113) | [lua](/11-Woven/woven.p8.lua#L134-L146) | [py](/11-Woven/Woven.thumby.py#L123-L134)
| Gingham | ![](/previews/Gingham.png) | [png](/11-Woven/png/Gingham.png) | [cpp](/11-Woven/Woven.h#L143-L154)  | [txt](/11-Woven/Woven.bitsy.txt#L115-L124) | [lua](/11-Woven/woven.p8.lua#L148-L160) | [py](/11-Woven/Woven.thumby.py#L136-L147)
| Plaid <sup>o</sup>| ![](/previews/Plaid.png) | [png](/11-Woven/png/Plaid.png) | [cpp](/11-Woven/Woven.h#L156-L167)  | [txt](/11-Woven/Woven.bitsy.txt#L126-L135) | [lua](/11-Woven/woven.p8.lua#L162-L174) | [py](/11-Woven/Woven.thumby.py#L149-L160)
| Tartan | ![](/previews/Tartan.png) | [png](/11-Woven/png/Tartan.png) | [cpp](/11-Woven/Woven.h#L169-L180)  | [txt](/11-Woven/Woven.bitsy.txt#L137-L146) | [lua](/11-Woven/woven.p8.lua#L176-L188) | [py](/11-Woven/Woven.thumby.py#L162-L173)

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
| SquareBasket | ![](/previews/SquareBasket.png) | [png](/12-Architecture/png/SquareBasket.png) | cpp | txt | lua | py
| StoneWall | ![](/previews/StoneWall.png) | [png](/12-Architecture/png/StoneWall.png) | cpp | txt | lua | py
| Flagstone | ![](/previews/Flagstone.png) | [png](/12-Architecture/png/Flagstone.png) | cpp | txt | lua | py
| PavingStones | ![](/previews/PavingStones.png) | [png](/12-Architecture/png/PavingStones.png) | cpp | txt | lua | py
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
