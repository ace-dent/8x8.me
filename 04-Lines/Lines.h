// Lines - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM horizontalDenseLineDash[] {
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
    // Magic: "UU\21\21"[i%4]
    // GAMBY: 0x5511

    constexpr uint8_t PROGMEM horizontalDenseLineDot[] {
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
    // Magic: i&1?85:17
    // GAMBY: 0x5151

    constexpr uint8_t PROGMEM horizontalDense[] {
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

    constexpr uint8_t PROGMEM horizontal[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: 68
    // GAMBY: 0x4444

    constexpr uint8_t PROGMEM horizontalMedium[] {
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

    constexpr uint8_t PROGMEM horizontalBold[] {
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

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM horizontalDenseLineDash[] {
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

    constexpr uint8_t PROGMEM horizontalDenseLineDot[] {
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

    constexpr uint8_t PROGMEM horizontalDense[] {
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

    constexpr uint8_t PROGMEM horizontal[] {
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

    constexpr uint8_t PROGMEM horizontalMedium[] {
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

    constexpr uint8_t PROGMEM horizontalBold[] {
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

}
#endif