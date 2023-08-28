// Lines - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t horizontal[] PROGMEM {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
    };
    // Magic: 34
    // GAMBY: 0x2222

    constexpr uint8_t horizontalMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
    };
    // Magic: 102
    // GAMBY: 0x6666

    constexpr uint8_t horizontalBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
    };
    // Magic: 119
    // GAMBY: 0x7777

    constexpr uint8_t horizontalSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };
    // Magic: 8

    constexpr uint8_t horizontalSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
    };
    // Magic: 24

    constexpr uint8_t horizontalSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
    };
    // Magic: 28

    constexpr uint8_t horizontalSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
    };
    // Magic: 60

    constexpr uint8_t horizontalSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
    };
    // Magic: 62

    constexpr uint8_t horizontalStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
    };
    // Magic: 42

    constexpr uint8_t horizontalPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
    };
    // Magic: 20

    constexpr uint8_t horizontalPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
    };
    // Magic: 52

    constexpr uint8_t horizontalDense[] PROGMEM {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
    };
    // Magic: 85
    // GAMBY: 0x5555

    constexpr uint8_t horizontalDenseLineDot[] PROGMEM {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: i&1?17:85
    // GAMBY: 0x5151

    constexpr uint8_t horizontalDenseLineDash[] PROGMEM {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: i%4<2?85:17
    // GAMBY: 0x5511

    constexpr uint8_t vertical[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: i%4==2?~0:0
    // GAMBY: 0x00F0

    constexpr uint8_t verticalMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: (i+3)%4<2?~0:0
    // GAMBY: 0x0FF0

    constexpr uint8_t verticalBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
    };
    // Magic: i%4?~0:0
    // GAMBY: 0x0FFF

    constexpr uint8_t verticalSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: i%8==4?~0:0

    constexpr uint8_t verticalSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: (i+5)%8<2?~0:0

    constexpr uint8_t verticalSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: (i+5)%8<3?~0:0

    constexpr uint8_t verticalSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: (i+6)%8<4?~0:0

    constexpr uint8_t verticalSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: (i+6)%8<5?~0:0

    constexpr uint8_t verticalStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\377\0\377\0\377"[i%8]

    constexpr uint8_t verticalPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 97^"aaa\236a\236aa"[i%8]

    constexpr uint8_t verticalPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\377\377\0\377\0"[i%8]

    constexpr uint8_t verticalDense[] PROGMEM {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: i&1?0:~0
    // GAMBY: 0xF0F0

    constexpr uint8_t verticalDenseLineDot[] PROGMEM {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\377\0U"[i%4]
    // GAMBY: 0xF050

    constexpr uint8_t verticalDenseLineDash[] PROGMEM {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\377\0003"[i%4]
    // GAMBY: 0xF030

    constexpr uint8_t dexter[] PROGMEM {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: 17+"\0213w"[i%4]
    // GAMBY: 0x2481

    constexpr uint8_t dexterMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
    };
    // Magic: "f\314\2313"[i%4]
    // GAMBY: 0x6C93

    constexpr uint8_t dexterBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
    };
    // Magic: ~"\210\21\"D"[i%4]
    // GAMBY: 0x7EDB

    constexpr uint8_t dexterSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
    };
    // Magic: 96^"hp@ \340abd"[i%8]

    constexpr uint8_t dexterSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x18,  // ▓▓▓░░▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x03,  // ▓▓▓▓▓▓░░
        0x06,  // ▓▓▓▓▓░░▓
        0x0C,  // ▓▓▓▓░░▓▓
    };
    // Magic: 72^"Px(\210\311KND"[i%8]

    constexpr uint8_t dexterSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0xE0,  // ░░░▓▓▓▓▓
        0xC1,  // ░░▓▓▓▓▓░
        0x83,  // ░▓▓▓▓▓░░
        0x07,  // ▓▓▓▓▓░░░
        0x0E,  // ▓▓▓▓░░░▓
    };
    // Magic: 83^"Ok#\263\222\320T]"[i%8]

    constexpr uint8_t dexterSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x78,  // ▓░░░░▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xE1,  // ░░░▓▓▓▓░
        0xC3,  // ░░▓▓▓▓░░
        0x87,  // ░▓▓▓▓░░░
        0x0F,  // ▓▓▓▓░░░░
        0x1E,  // ▓▓▓░░░░▓
    };
    // Magic: 9+"3o\347\330\272~\6\25"[i%8]

    constexpr uint8_t dexterSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3E,  // ▓▓░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0xF8,  // ░░░░░▓▓▓
        0xF1,  // ░░░░▓▓▓░
        0xE3,  // ░░░▓▓▓░░
        0xC7,  // ░░▓▓▓░░░
        0x8F,  // ░▓▓▓░░░░
        0x1F,  // ▓▓▓░░░░░
    };
    // Magic: 176^"\216\314HASw?\257"[i%8]

    constexpr uint8_t dexterStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x2A,  // ▓▓░▓░▓░▓
        0x54,  // ▓░▓░▓░▓▓
        0xA8,  // ░▓░▓░▓▓▓
        0x51,  // ▓░▓░▓▓▓░
        0xA2,  // ░▓░▓▓▓░▓
        0x45,  // ▓░▓▓▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
    };
    // Magic: 21+"\25?\223<\2150u"[i%8]

    constexpr uint8_t dexterPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x90,  // ░▓▓░▓▓▓▓
        0x21,  // ▓▓░▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x84,  // ░▓▓▓▓░▓▓
        0x09,  // ▓▓▓▓░▓▓░
        0x12,  // ▓▓▓░▓▓░▓
    };
    // Magic: "$H\220!B\204\t\22"[i%8]

    constexpr uint8_t dexterPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x64,  // ▓░░▓▓░▓▓
        0xC8,  // ░░▓▓░▓▓▓
        0x91,  // ░▓▓░▓▓▓░
        0x23,  // ▓▓░▓▓▓░░
        0x46,  // ▓░▓▓▓░░▓
        0x8C,  // ░▓▓▓░░▓▓
        0x19,  // ▓▓▓░░▓▓░
        0x32,  // ▓▓░░▓▓░▓
    };
    // Magic: 23+"M\261z\f/u\2\e"[i%8]

    constexpr uint8_t dexterSteep[] PROGMEM {
        8, 8,  // 8x8 px image
        0x60,  // ▓░░▓▓▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x06,  // ▓▓▓▓▓░░▓
        0x18,  // ▓▓▓░░▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x06,  // ▓▓▓▓▓░░▓
        0x18,  // ▓▓▓░░▓▓▓
    };
    // Magic: "`\201\6\30"[i%4]

    constexpr uint8_t dexterSteepMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x78,  // ▓░░░░▓▓▓
        0xE1,  // ░░░▓▓▓▓░
        0x87,  // ░▓▓▓▓░░░
        0x1E,  // ▓▓▓░░░░▓
        0x78,  // ▓░░░░▓▓▓
        0xE1,  // ░░░▓▓▓▓░
        0x87,  // ░▓▓▓▓░░░
        0x1E,  // ▓▓▓░░░░▓
    };
    // Magic: 30+"Z\303i"[i%4]

    constexpr uint8_t dexterShallow[] PROGMEM {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: 17+"\21\02133ww\0"[i%8]

    constexpr uint8_t dexterShallowMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
    };
    // Magic: 51+"33\231\231ff\0"[i%8]

    constexpr uint8_t sinister[] PROGMEM {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: "\"\21\210D"[i%4]
    // GAMBY: 0x2184

    constexpr uint8_t sinisterMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
    };
    // Magic: "f3\231\314"[i%4]
    // GAMBY: 0x639C

    constexpr uint8_t sinisterBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
    };
    // Magic: ~"\210D\"\21"[i%4]
    // GAMBY: 0x7BDE

    constexpr uint8_t sinisterSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: 99^"kgab\343#Cs"[i%8]

    constexpr uint8_t sinisterSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x18,  // ▓▓▓░░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x03,  // ▓▓▓▓▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0xC0,  // ░░▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
    };
    // Magic: 65^"YMGB\300\201!q"[i%8]

    constexpr uint8_t sinisterSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x0E,  // ▓▓▓▓░░░▓
        0x07,  // ▓▓▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
        0xC1,  // ░░▓▓▓▓▓░
        0xE0,  // ░░░▓▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
    };
    // Magic: 93^"ASZ\336\234\275-e"[i%8]

    constexpr uint8_t sinisterSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x1E,  // ▓▓▓░░░░▓
        0x0F,  // ▓▓▓▓░░░░
        0x87,  // ░▓▓▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0xE1,  // ░░░▓▓▓▓░
        0xF0,  // ░░░░▓▓▓▓
        0x78,  // ▓░░░░▓▓▓
    };
    // Magic: 9+"3\25\6~\272\330\347o"[i%8]

    constexpr uint8_t sinisterSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3E,  // ▓▓░░░░░▓
        0x1F,  // ▓▓▓░░░░░
        0x8F,  // ░▓▓▓░░░░
        0xC7,  // ░░▓▓▓░░░
        0xE3,  // ░░░▓▓▓░░
        0xF1,  // ░░░░▓▓▓░
        0xF8,  // ░░░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
    };
    // Magic: 162^"\234\275-eASZ\336"[i%8]

    constexpr uint8_t sinisterStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x2A,  // ▓▓░▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x45,  // ▓░▓▓▓░▓░
        0xA2,  // ░▓░▓▓▓░▓
        0x51,  // ▓░▓░▓▓▓░
        0xA8,  // ░▓░▓░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
    };
    // Magic: "*\25\212E\242Q\250T"[i%8]

    constexpr uint8_t sinisterPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x12,  // ▓▓▓░▓▓░▓
        0x09,  // ▓▓▓▓░▓▓░
        0x84,  // ░▓▓▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x21,  // ▓▓░▓▓▓▓░
        0x90,  // ░▓▓░▓▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
    };
    // Magic: "$\22\t\204B!\220H"[i%8]

    constexpr uint8_t sinisterPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x26,  // ▓▓░▓▓░░▓
        0x13,  // ▓▓▓░▓▓░░
        0x89,  // ░▓▓▓░▓▓░
        0xC4,  // ░░▓▓▓░▓▓
        0x62,  // ▓░░▓▓▓░▓
        0x31,  // ▓▓░░▓▓▓░
        0x98,  // ░▓▓░░▓▓▓
        0x4C,  // ▓░▓▓░░▓▓
    };
    // Magic: "&\23\211\304b1\230L"[i%8]

    constexpr uint8_t sinisterSteep[] PROGMEM {
        8, 8,  // 8x8 px image
        0x06,  // ▓▓▓▓▓░░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x60,  // ▓░░▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x60,  // ▓░░▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
    };
    // Magic: 6+"\0{Z\22"[i%4]

    constexpr uint8_t sinisterSteepMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x1E,  // ▓▓▓░░░░▓
        0x87,  // ░▓▓▓▓░░░
        0xE1,  // ░░░▓▓▓▓░
        0x78,  // ▓░░░░▓▓▓
        0x1E,  // ▓▓▓░░░░▓
        0x87,  // ░▓▓▓▓░░░
        0xE1,  // ░░░▓▓▓▓░
        0x78,  // ▓░░░░▓▓▓
    };
    // Magic: 30+"\0i\303Z"[i%4]

    constexpr uint8_t sinisterShallow[] PROGMEM {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: 99^"AArr\353\353''"[i%8]

    constexpr uint8_t sinisterShallowMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
    };
    // Magic: 51+"33\0\0ff\231\231"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t horizontal[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalDense[] PROGMEM {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalDenseLineDot[] PROGMEM {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalDenseLineDash[] PROGMEM {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t vertical[] PROGMEM {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
    };

    constexpr uint8_t verticalMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
    };

    constexpr uint8_t verticalBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
    };

    constexpr uint8_t verticalSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t verticalSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
    };

    constexpr uint8_t verticalSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
    };

    constexpr uint8_t verticalSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t verticalSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
    };

    constexpr uint8_t verticalStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
    };

    constexpr uint8_t verticalPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x14,  // ▓▓▓░▓░▓▓
    };

    constexpr uint8_t verticalPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x34,  // ▓▓░░▓░▓▓
    };

    constexpr uint8_t verticalDense[] PROGMEM {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
    };

    constexpr uint8_t verticalDenseLineDot[] PROGMEM {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t verticalDenseLineDash[] PROGMEM {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t dexter[] PROGMEM {
        8, 8,  // 8x8 px image
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
    };

    constexpr uint8_t dexterMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
    };

    constexpr uint8_t dexterBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
    };

    constexpr uint8_t dexterSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t dexterSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x0C,  // ▓▓▓▓░░▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x03,  // ▓▓▓▓▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0xC0,  // ░░▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
    };

    constexpr uint8_t dexterSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x0E,  // ▓▓▓▓░░░▓
        0x07,  // ▓▓▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
        0xC1,  // ░░▓▓▓▓▓░
        0xE0,  // ░░░▓▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
    };

    constexpr uint8_t dexterSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x1E,  // ▓▓▓░░░░▓
        0x0F,  // ▓▓▓▓░░░░
        0x87,  // ░▓▓▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0xE1,  // ░░░▓▓▓▓░
        0xF0,  // ░░░░▓▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t dexterSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x1F,  // ▓▓▓░░░░░
        0x8F,  // ░▓▓▓░░░░
        0xC7,  // ░░▓▓▓░░░
        0xE3,  // ░░░▓▓▓░░
        0xF1,  // ░░░░▓▓▓░
        0xF8,  // ░░░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0x3E,  // ▓▓░░░░░▓
    };

    constexpr uint8_t dexterStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x15,  // ▓▓▓░▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x45,  // ▓░▓▓▓░▓░
        0xA2,  // ░▓░▓▓▓░▓
        0x51,  // ▓░▓░▓▓▓░
        0xA8,  // ░▓░▓░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x2A,  // ▓▓░▓░▓░▓
    };

    constexpr uint8_t dexterPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x12,  // ▓▓▓░▓▓░▓
        0x09,  // ▓▓▓▓░▓▓░
        0x84,  // ░▓▓▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x21,  // ▓▓░▓▓▓▓░
        0x90,  // ░▓▓░▓▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
    };

    constexpr uint8_t dexterPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x32,  // ▓▓░░▓▓░▓
        0x19,  // ▓▓▓░░▓▓░
        0x8C,  // ░▓▓▓░░▓▓
        0x46,  // ▓░▓▓▓░░▓
        0x23,  // ▓▓░▓▓▓░░
        0x91,  // ░▓▓░▓▓▓░
        0xC8,  // ░░▓▓░▓▓▓
        0x64,  // ▓░░▓▓░▓▓
    };

    constexpr uint8_t dexterSteep[] PROGMEM {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
    };

    constexpr uint8_t dexterSteepMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
    };

    constexpr uint8_t dexterShallow[] PROGMEM {
        8, 8,  // 8x8 px image
        0x03,  // ▓▓▓▓▓▓░░
        0xC0,  // ░░▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x03,  // ▓▓▓▓▓▓░░
        0xC0,  // ░░▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
    };

    constexpr uint8_t dexterShallowMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0xC3,  // ░░▓▓▓▓░░
        0xF0,  // ░░░░▓▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x0F,  // ▓▓▓▓░░░░
        0xC3,  // ░░▓▓▓▓░░
        0xF0,  // ░░░░▓▓▓▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t sinister[] PROGMEM {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
    };

    constexpr uint8_t sinisterMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t sinisterBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
    };

    constexpr uint8_t sinisterSparse[] PROGMEM {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t sinisterSparseMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x18,  // ▓▓▓░░▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x03,  // ▓▓▓▓▓▓░░
        0x06,  // ▓▓▓▓▓░░▓
        0x0C,  // ▓▓▓▓░░▓▓
    };

    constexpr uint8_t sinisterSparseBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x38,  // ▓▓░░░▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0xE0,  // ░░░▓▓▓▓▓
        0xC1,  // ░░▓▓▓▓▓░
        0x83,  // ░▓▓▓▓▓░░
        0x07,  // ▓▓▓▓▓░░░
        0x0E,  // ▓▓▓▓░░░▓
        0x1C,  // ▓▓▓░░░▓▓
    };

    constexpr uint8_t sinisterSparseExtraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x78,  // ▓░░░░▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xE1,  // ░░░▓▓▓▓░
        0xC3,  // ░░▓▓▓▓░░
        0x87,  // ░▓▓▓▓░░░
        0x0F,  // ▓▓▓▓░░░░
        0x1E,  // ▓▓▓░░░░▓
    };

    constexpr uint8_t sinisterSparseUltraBold[] PROGMEM {
        8, 8,  // 8x8 px image
        0x7C,  // ▓░░░░░▓▓
        0xF8,  // ░░░░░▓▓▓
        0xF1,  // ░░░░▓▓▓░
        0xE3,  // ░░░▓▓▓░░
        0xC7,  // ░░▓▓▓░░░
        0x8F,  // ░▓▓▓░░░░
        0x1F,  // ▓▓▓░░░░░
        0x3E,  // ▓▓░░░░░▓
    };

    constexpr uint8_t sinisterStripes[] PROGMEM {
        8, 8,  // 8x8 px image
        0x54,  // ▓░▓░▓░▓▓
        0xA8,  // ░▓░▓░▓▓▓
        0x51,  // ▓░▓░▓▓▓░
        0xA2,  // ░▓░▓▓▓░▓
        0x45,  // ▓░▓▓▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
        0x2A,  // ▓▓░▓░▓░▓
    };

    constexpr uint8_t sinisterPinstripe[] PROGMEM {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x90,  // ░▓▓░▓▓▓▓
        0x21,  // ▓▓░▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x84,  // ░▓▓▓▓░▓▓
        0x09,  // ▓▓▓▓░▓▓░
        0x12,  // ▓▓▓░▓▓░▓
    };

    constexpr uint8_t sinisterPinstripeMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x64,  // ▓░░▓▓░▓▓
        0xC8,  // ░░▓▓░▓▓▓
        0x91,  // ░▓▓░▓▓▓░
        0x23,  // ▓▓░▓▓▓░░
        0x46,  // ▓░▓▓▓░░▓
        0x8C,  // ░▓▓▓░░▓▓
        0x19,  // ▓▓▓░░▓▓░
        0x32,  // ▓▓░░▓▓░▓
    };

    constexpr uint8_t sinisterSteep[] PROGMEM {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
    };

    constexpr uint8_t sinisterSteepMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
    };

    constexpr uint8_t sinisterShallow[] PROGMEM {
        8, 8,  // 8x8 px image
        0x30,  // ▓▓░░▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x03,  // ▓▓▓▓▓▓░░
        0x0C,  // ▓▓▓▓░░▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x03,  // ▓▓▓▓▓▓░░
        0x0C,  // ▓▓▓▓░░▓▓
    };

    constexpr uint8_t sinisterShallowMedium[] PROGMEM {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xC3,  // ░░▓▓▓▓░░
        0x0F,  // ▓▓▓▓░░░░
        0x3C,  // ▓▓░░░░▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xC3,  // ░░▓▓▓▓░░
        0x0F,  // ▓▓▓▓░░░░
    };

}
#endif