// Symbols - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM love[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: 21+"s@\r/\r@s/"[i%8]

    constexpr uint8_t PROGMEM heart[] {
        8, 8,  // 8x8 px image
        0x0C,  // ▓▓▓▓░░▓▓
        0x12,  // ▓▓▓░▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x12,  // ▓▓▓░▓▓░▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 96^"lrB$Brl`"[i%8]

    constexpr uint8_t PROGMEM heartMini[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "3f3"[i%4]
    // GAMBY: 0x3630

    constexpr uint8_t PROGMEM anchor[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0xFA,  // ░░░░░▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: " @D\372D@ "[i%8]

    constexpr uint8_t PROGMEM crossbones[] {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x63,  // ▓░░▓▓▓░░
        0x14,  // ▓▓▓░▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x63,  // ▓░░▓▓▓░░
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 80^"r3DXD3rP"[i%8]

    constexpr uint8_t PROGMEM cross[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x7E,  // ▓░░░░░░▓
        0x7E,  // ▓░░░░░░▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 88^"X@@&&@@X"[i%8]

    constexpr uint8_t PROGMEM crossMini[] {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x77,  // ▓░░░▓░░░
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x77,  // ▓░░░▓░░░
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\"w\""[i%4]
    // GAMBY: 0x2720

    constexpr uint8_t PROGMEM amongi[] {
        8, 8,  // 8x8 px image
        0x06,  // ▓▓▓▓▓░░▓
        0x0F,  // ▓▓▓▓░░░░
        0x05,  // ▓▓▓▓▓░▓░
        0x0D,  // ▓▓▓▓░░▓░
        0x60,  // ▓░░▓▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0xD0,  // ░░▓░▓▓▓▓
    };
    // Magic: 32^"&/%-@\320p\360"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM love[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x82,  // ░▓▓▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x82,  // ░▓▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM heart[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x6C,  // ▓░░▓░░▓▓
        0x92,  // ░▓▓░▓▓░▓
        0x82,  // ░▓▓▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM heartMini[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM anchor[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x92,  // ░▓▓░▓▓░▓
        0x7C,  // ▓░░░░░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM crossbones[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0xC6,  // ░░▓▓▓░░▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0xC6,  // ░░▓▓▓░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM cross[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x7E,  // ▓░░░░░░▓
        0x7E,  // ▓░░░░░░▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM crossMini[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM amongi[] {
        8, 8,  // 8x8 px image
        0x70,  // ▓░░░▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x07,  // ▓▓▓▓▓░░░
        0x0C,  // ▓▓▓▓░░▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x05,  // ▓▓▓▓▓░▓░
    };

}
#endif