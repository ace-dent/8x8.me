// Dither - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t bayerDither00[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 0
    // GAMBY: 0x0000

    constexpr uint8_t bayerDither01[] PROGMEM {
        8, 8, //  8x8 px image
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: i%4?0:17
    // GAMBY: 0x1000

    constexpr uint8_t bayerDither02[] PROGMEM {
        8, 8, //  8x8 px image
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\21\0D"[i%4]
    // GAMBY: 0x1040

    constexpr uint8_t bayerDither03[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "U\0D"[i%4]
    // GAMBY: 0x5040

    constexpr uint8_t bayerDither04[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: i&1?0:85
    // GAMBY: 0x5050

    constexpr uint8_t bayerDither05[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "U\"U"[i%4]
    // GAMBY: 0x5250

    constexpr uint8_t bayerDither06[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
    };
    // Magic: "U\"U\210"[i%4]
    // GAMBY: 0x5258

    constexpr uint8_t bayerDither07[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
    };
    // Magic: 45+"(}(["[i%4]
    // GAMBY: 0x5A58

    constexpr uint8_t bayerDither08[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
    };
    // Magic: 85<<i%2
    // GAMBY: 0x5A5A

    constexpr uint8_t bayerDither09[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x77, //  ▓░░░▓░░░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
    };
    // Magic: 53+"Bu u"[i%4]
    // GAMBY: 0x7A5A

    constexpr uint8_t bayerDither10[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x77, //  ▓░░░▓░░░
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
    };
    // Magic: 106+"\r@s@"[i%4]
    // GAMBY: 0x7ADA

    constexpr uint8_t bayerDither11[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
    };
    // Magic: ~"\0U\"U"[i%4]
    // GAMBY: 0xFADA

    constexpr uint8_t bayerDither12[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
    };
    // Magic: i&1?170:~0
    // GAMBY: 0xFAFA

    constexpr uint8_t bayerDither13[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
    };
    // Magic: ~"\0D\0U"[i%4]
    // GAMBY: 0xFBFA

    constexpr uint8_t bayerDither14[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
    };
    // Magic: 194^"=y=,"[i%4]
    // GAMBY: 0xFBFE

    constexpr uint8_t bayerDither15[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
    };
    // Magic: i%4==3?238:~0
    // GAMBY: 0xFFFE

    constexpr uint8_t bayerDither16[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
    };
    // Magic: ~0
    // GAMBY: 0xFFFF

    constexpr uint8_t officeDither05[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "@A@@@P@"[i%8]*4

    constexpr uint8_t officeDither10[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 98^"bsbbb&bb"[i%8]

    constexpr uint8_t officeDither20[] PROGMEM {
        8, 8, //  8x8 px image
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\21\0D"[i%4]
    // GAMBY: 0x1040

    constexpr uint8_t officeDither25[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "U\0\252"[i%4]
    // GAMBY: 0x50A0

    constexpr uint8_t officeDither30[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
    };
    // Magic: "U\"U\210"[i%4]
    // GAMBY: 0x5258

    constexpr uint8_t officeDither40[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x8A, //  ░▓▓▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xA8, //  ░▓░▓░▓▓▓
    };
    // Magic: 45+"(}(](}({"[i%8]

    constexpr uint8_t officeDither50[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
    };
    // Magic: 85<<i%2
    // GAMBY: 0x5A5A

    constexpr uint8_t officeDither60[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0xBB, //  ░▓░░░▓░░
        0x55, //  ▓░▓░▓░▓░
        0xEE, //  ░░░▓░░░▓
        0x55, //  ▓░▓░▓░▓░
        0xBB, //  ░▓░░░▓░░
        0x55, //  ▓░▓░▓░▓░
        0xEE, //  ░░░▓░░░▓
    };
    // Magic: "U\273U\356"[i%4]
    // GAMBY: 0x5B5E

    constexpr uint8_t officeDither70[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0x55, //  ▓░▓░▓░▓░
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
    };
    // Magic: ~"\252\0U"[i%4]
    // GAMBY: 0x5FAF

    constexpr uint8_t officeDither75[] PROGMEM {
        8, 8, //  8x8 px image
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
    };
    // Magic: ~"D\0\21"[i%4]
    // GAMBY: 0xBFEF

    constexpr uint8_t officeDither80[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
    };
    // Magic: 144^"o+ooo~oo"[i%8]

    constexpr uint8_t officeDither90[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xDF, //  ░░▓░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFD, //  ░░░░░░▓░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
    };
    // Magic: 144^"oOooomoo"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t bayerDither00[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t bayerDither01[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t bayerDither02[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t bayerDither03[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t bayerDither04[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t bayerDither05[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t bayerDither06[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x11, //  ▓▓▓░▓▓▓░
    };

    constexpr uint8_t bayerDither07[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
    };

    constexpr uint8_t bayerDither08[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
    };

    constexpr uint8_t bayerDither09[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
    };

    constexpr uint8_t bayerDither10[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x77, //  ▓░░░▓░░░
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x77, //  ▓░░░▓░░░
    };

    constexpr uint8_t bayerDither11[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xDD, //  ░░▓░░░▓░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t bayerDither12[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t bayerDither13[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xAA, //  ░▓░▓░▓░▓
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t bayerDither14[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xBB, //  ░▓░░░▓░░
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t bayerDither15[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xEE, //  ░░░▓░░░▓
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t bayerDither16[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t officeDither05[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t officeDither10[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t officeDither20[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t officeDither25[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
    };

    constexpr uint8_t officeDither30[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0xAA, //  ░▓░▓░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x11, //  ▓▓▓░▓▓▓░
    };

    constexpr uint8_t officeDither40[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x45, //  ▓░▓▓▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
    };

    constexpr uint8_t officeDither50[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0xAA, //  ░▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
    };

    constexpr uint8_t officeDither60[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0x55, //  ▓░▓░▓░▓░
        0xBB, //  ░▓░░░▓░░
        0x55, //  ▓░▓░▓░▓░
        0xEE, //  ░░░▓░░░▓
        0x55, //  ▓░▓░▓░▓░
        0xBB, //  ░▓░░░▓░░
        0x55, //  ▓░▓░▓░▓░
    };

    constexpr uint8_t officeDither70[] PROGMEM {
        8, 8, //  8x8 px image
        0xDD, //  ░░▓░░░▓░
        0x77, //  ▓░░░▓░░░
        0xDD, //  ░░▓░░░▓░
        0x77, //  ▓░░░▓░░░
        0xDD, //  ░░▓░░░▓░
        0x77, //  ▓░░░▓░░░
        0xDD, //  ░░▓░░░▓░
        0x77, //  ▓░░░▓░░░
    };

    constexpr uint8_t officeDither75[] PROGMEM {
        8, 8, //  8x8 px image
        0xDD, //  ░░▓░░░▓░
        0xFF, //  ░░░░░░░░
        0x77, //  ▓░░░▓░░░
        0xFF, //  ░░░░░░░░
        0xDD, //  ░░▓░░░▓░
        0xFF, //  ░░░░░░░░
        0x77, //  ▓░░░▓░░░
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t officeDither80[] PROGMEM {
        8, 8, //  8x8 px image
        0xFB, //  ░░░░░▓░░
        0xFF, //  ░░░░░░░░
        0xBF, //  ░▓░░░░░░
        0xFF, //  ░░░░░░░░
        0xFB, //  ░░░░░▓░░
        0xFF, //  ░░░░░░░░
        0xBF, //  ░▓░░░░░░
        0xFF, //  ░░░░░░░░
    };

    constexpr uint8_t officeDither90[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0xFB, //  ░░░░░▓░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
        0xBF, //  ░▓░░░░░░
        0xFF, //  ░░░░░░░░
        0xFF, //  ░░░░░░░░
    };

}
#endif
