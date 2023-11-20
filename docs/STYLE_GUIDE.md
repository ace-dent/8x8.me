# Style Guide

## Welcome

~ Work In Progress ~

## Artwork
### Overview
Easy to allow all nice 8x8 bitmaps. But must be repeating, in x & y and look good.  
Would it reasonably be used for (old school purpose):  
- Map legends
- Graph / business graphic legend
- Must be 8x8 independently; not rely on 8x16, etc. for variation.
- Not just a game background!
- No exclusively FOREGROUND sprites. Items, collectibles, weapons (swords), sprites, etc.

Offensive artwork will not be accepted.  
Strive for designs that work within a pattern group, and across all groups.

### Design
Lit pixels represent 'matter'. (Note on colors).  
Light source for 3D is top left.  
Layout (offset / gutters, etc.): Try to leave right column and bottom row empty. Data and helps tiling.  
Scale - items should be scaled fairly consistently. Exceptions for large objects (Tree, House) that break the general scale to fit the pixel grid.  

Tile offset shouldn't matter for a large repeating pattern, but patterns may be useful for background graphics which are discontinuous. So we should design thinking of what is shown at the edge; how a single tile will look; how breaks in tiling will look.


### File formats

## Naming
### Overview
Challenge in naming patterns. Use of heraldic terms (e.g. lines and waves).  
The language for this project is American English. Specific heraldic terms come from British English, many derived from archaic French.  
Meaning behind `mini` suffix for 4x4 patterns.  
Dexter & Sinister prefix.   
Standard pattern will be Horizontal (drop description), and `Vertical` variation should be named.  
First consider how to group your new pattern...  

### Pattern groups

#### 06 – Grid
The substance of the pattern is linear, continuously connected in 2 (or more) directions, often perpendicular. The linear grid elements enclose an area of space, forming 2-dimensional patterns. Grids normally resemble a lattice or network. The substance is represented with lit (or alternating) pixels, the void with unlit pixels. Some decoration is allowable. Grid patterns do not convey particular intent or semantic meaning; they are purely visual designs.

#### 07 – Checked
Alternating, geometric areas of contrast (light and dark), with areas tiling in 2-dimensions. Ideally with a near equal weighting of contrasting areas. Checked patterns often look like a checker board. There is no substance to represent, so lit and unlit pixels indicate light and dark areas. Some decoration is allowable. Checked patterns do not convey particular intent or semantic meaning; they are purely visual designs.

#### 09 – Radial
Features arranged radially from a central point. Will have rotational symmetry. Where chiral, prefer left handed. Designs are weighted left-facing (anti-clockwise) to avoid possibly offensive symbols.May feature linear and round forms.

#### 12 – Architecture
The principle material is shown as lit (e.g. typically a brick is lit, the mortar is unlit). Brick is weighted to bottom, so gap for mortar at top- to ensure looks ok with map layouts.

#### 14 – Symbol
Symbolic of an abstract concept (love) or an iconic representation (anchor) rather than something that exits in the physical world. In general, physical objects should be in Nature, Architecture or Other, unless its form is more significant (tile in rectilinear).

#### 15 – Other


### Terminology
#### Feature direction or angle
- Horizontal (often unwritten)
- Vertical
- Sinister
- Dexter
- Diagonal.
- Steep
- Shallow

#### Feature size
- Small
- Normal (unwritten)
- Large
- XL
- XXL
- XXXL

#### Feature spacing
- Dense
- Normal (unwritten)
- Sparse

#### Fill variations
- Highlight - top-left edges in highlight
- Outline (unwritten)
- Solid (normally unwritten, unless an Outline variation exists)
- Relief - bottom-right edges in shadow
- Shaded - alternate pixels lit to create a dithered tone

#### Line Weight
- Light <1px - not every pixel may be lit
- Normal (unwritten) 1px
- Medium 2px
- Bold 3px
- ExtraBold 4px
- UltraBold 5px

<hr>

## Code
### Overview 
Automated code generation (setup & dependencies).

We like trailing commas, to allow joining arrays.
For compiled languages vs  interpreted we prefer verbosity over compactness. 


### Arduboy (cpp)

Indents 4 spaces.  
camelCase variable names.  
With trailing commas in arrays.  
Name of bracket style...  

All are in the namespace of 'patterns'.  
Each individual pattern has a 'magic' string literal included as a comment.  
Any 4x4 patterns have a GAMBY format pattern code.  
At the end of each file there's an additional horizontal format, disabled by `#if 0`. This is just for syntax highlighting.  

Should also work for Tinyjoypad.  

Start each `.h` file with standard header:
```cpp
#pragma once
#include <stdint.h> // For uint8_t
#include <avr/pgmspace.h> // For PROGMEM
```
Followed by three blank lines.

VLSB sprites data format.

### Bitsy (text)

Indexes: Lower case 0-9,a-z.
HMSB data format.

### PICO-8 (Lua)

Indents 1 space.  
ALL lowercase.  
NO trailing comma in an array (not allowed). https://www.lexaloffle.com/bbs/?tid=49778#comments. 
Comments don't have leading space `--comment`. 
But visual comment blocks have one space.  
One leading blank line before the patterns, no trailing newlines (to save bytes).   

Using decimal values instead of hexadecimal will save 1 character (32768 vs 0x8000). 

NOTE - P8 uses LSB first, so sequence of bits in a byte are reversed. However, the visualization is kept unflipped(!), unlike all other code. i.e. it's shown as will be drawn to screen.  


### Picotron (Lua)
### Playdate (Lua & Pulp)
SDK support based on https://sdk.play.date/inside-playdate/#f-graphics.setPattern

Pulp has no mask (fully opaque).
SDK default is opaque. Different transparency background / foreground selectable for SDK by selecting comment lines.

### Thumby (MicroPython)

Indents are 4x space.  
Names are in camelCase.  
Trailing comma.  
One leading blank line before the patterns, no trailing newlines (to save bytes).  

Each image starts with:
```python
# BITMAP: width: 8, height: 8
imageName = bytearray([
  # ...
])
```
Values are formatted as decimal numbers.  
No magic strings.

### User Defined Graphic (BASIC)
