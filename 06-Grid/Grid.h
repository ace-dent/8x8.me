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
    // Magic: "U\0\1\0\1\0\1"[i%8]

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
    // Magic: "U\0\1\0\21\0\1"[i%8]

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
    // Magic: "\377\1\1\1\1\1\1\1"[i%8]

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
    // Magic: "\377\377\3\3\3\3\3\3"[i%8]

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
    // Magic: ~"\0\0|||||"[i%8]

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
    // Magic: "\377\21\21\21"[i%4]
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
    // Magic: "\377\37733"[i%4]
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
    // Magic: i&1?~0:85
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
    // Magic: "\"\0\b\0\"\0\200"[i%8]

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
    // Magic: "\"\24\b\24\"A\200A"[i%8]

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
    // Magic: "c6\34\0346c\301\301"[i%8]

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
    // Magic: "DD\252\21\21\21\252D"[i%8]

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