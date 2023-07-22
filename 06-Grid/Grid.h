// Grid - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM gridDots[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 48^"e0101010"[i%8]

    constexpr uint8_t PROGMEM gridDotsCentre[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 48^"e010!010"[i%8]

    constexpr uint8_t PROGMEM grid[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x01,  // ▓▓▓▓▓▓▓░
        0x01,  // ▓▓▓▓▓▓▓░
        0x01,  // ▓▓▓▓▓▓▓░
        0x01,  // ▓▓▓▓▓▓▓░
        0x01,  // ▓▓▓▓▓▓▓░
        0x01,  // ▓▓▓▓▓▓▓░
        0x01,  // ▓▓▓▓▓▓▓░
    };
    // Magic: i%8?1:~0

    constexpr uint8_t PROGMEM gridMedium[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x03,  // ▓▓▓▓▓▓░░
        0x03,  // ▓▓▓▓▓▓░░
        0x03,  // ▓▓▓▓▓▓░░
        0x03,  // ▓▓▓▓▓▓░░
        0x03,  // ▓▓▓▓▓▓░░
        0x03,  // ▓▓▓▓▓▓░░
    };
    // Magic: i%8<2?~0:3

    constexpr uint8_t PROGMEM gridBold[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x83,  // ░▓▓▓▓▓░░
        0x83,  // ░▓▓▓▓▓░░
        0x83,  // ░▓▓▓▓▓░░
        0x83,  // ░▓▓▓▓▓░░
        0x83,  // ░▓▓▓▓▓░░
        0xFF,  // ░░░░░░░░
    };
    // Magic: (i+6)%8<5?131:~0

    constexpr uint8_t PROGMEM gridMiniDots[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "U\0\21"[i%4]
    // GAMBY: 0x5010

    constexpr uint8_t PROGMEM gridMini[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0xFF,  // ░░░░░░░░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: i%4?17:~0
    // GAMBY: 0xF111

    constexpr uint8_t PROGMEM gridMiniMedium[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
    };
    // Magic: i%4<2?~0:51
    // GAMBY: 0xFF33

    constexpr uint8_t PROGMEM gridDense[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x55,  // ▓░▓░▓░▓░
        0xFF,  // ░░░░░░░░
        0x55,  // ▓░▓░▓░▓░
        0xFF,  // ░░░░░░░░
        0x55,  // ▓░▓░▓░▓░
        0xFF,  // ░░░░░░░░
        0x55,  // ▓░▓░▓░▓░
    };
    // Magic: i&1?85:~0
    // GAMBY: 0xF5F5

    constexpr uint8_t PROGMEM gridDiagonalDots[] {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 97^"CaiaCa\341a"[i%8]

    constexpr uint8_t PROGMEM gridDiagonal[] {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x14,  // ▓▓▓░▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x41,  // ▓░▓▓▓▓▓░
        0x80,  // ░▓▓▓▓▓▓▓
        0x41,  // ▓░▓▓▓▓▓░
    };
    // Magic: 96^"BthtB!\340!"[i%8]

    constexpr uint8_t PROGMEM gridDiagonalMedium[] {
        8, 8,  // 8x8 px image
        0x63,  // ▓░░▓▓▓░░
        0x36,  // ▓▓░░▓░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x36,  // ▓▓░░▓░░▓
        0x63,  // ▓░░▓▓▓░░
        0xC1,  // ░░▓▓▓▓▓░
        0xC1,  // ░░▓▓▓▓▓░
    };
    // Magic: 66^"!t^^t!\203\203"[i%8]

    constexpr uint8_t PROGMEM gridDiagonalMini[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x88,  // ░▓▓▓░▓▓▓
    };
    // Magic: "U\"U\210"[i%4]
    // GAMBY: 0x5258

    constexpr uint8_t PROGMEM honeycomb[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0xAA,  // ░▓░▓░▓░▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: 43^"oo\201:::\201o"[i%8]

    constexpr uint8_t PROGMEM trapezoid[] {
        8, 8,  // 8x8 px image
        0x40,  // ▓░▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x41,  // ▓░▓▓▓▓▓░
        0xC0,  // ░░▓▓▓▓▓▓
    };
    // Magic: "@`PHDBA\300"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM gridDots[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM gridDotsCentre[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM grid[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM gridMedium[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xC0,  // ░░▓▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM gridBold[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xC1,  // ░░▓▓▓▓▓░
        0xC1,  // ░░▓▓▓▓▓░
        0xC1,  // ░░▓▓▓▓▓░
        0xC1,  // ░░▓▓▓▓▓░
        0xC1,  // ░░▓▓▓▓▓░
        0xFF,  // ░░░░░░░░
    };

    constexpr uint8_t PROGMEM gridMiniDots[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM gridMini[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0xFF,  // ░░░░░░░░
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM gridMiniMedium[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
    };

    constexpr uint8_t PROGMEM gridDense[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xAA,  // ░▓░▓░▓░▓
        0xFF,  // ░░░░░░░░
        0xAA,  // ░▓░▓░▓░▓
        0xFF,  // ░░░░░░░░
        0xAA,  // ░▓░▓░▓░▓
        0xFF,  // ░░░░░░░░
        0xAA,  // ░▓░▓░▓░▓
    };

    constexpr uint8_t PROGMEM gridDiagonalDots[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM gridDiagonal[] {
        8, 8,  // 8x8 px image
        0x05,  // ▓▓▓▓▓░▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x05,  // ▓▓▓▓▓░▓░
        0x02,  // ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM gridDiagonalMedium[] {
        8, 8,  // 8x8 px image
        0x87,  // ░▓▓▓▓░░░
        0xCC,  // ░░▓▓░░▓▓
        0x78,  // ▓░░░░▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x87,  // ░▓▓▓▓░░░
        0x03,  // ▓▓▓▓▓▓░░
    };

    constexpr uint8_t PROGMEM gridDiagonalMini[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0xAA,  // ░▓░▓░▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x11,  // ▓▓▓░▓▓▓░
    };

    constexpr uint8_t PROGMEM honeycomb[] {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0xC1,  // ░░▓▓▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0xC1,  // ░░▓▓▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
    };

    constexpr uint8_t PROGMEM trapezoid[] {
        8, 8,  // 8x8 px image
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x01,  // ▓▓▓▓▓▓▓░
    };

}
#endif