// Other - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t chain[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x66,  // ▓░░▓▓░░▓
        0x99,  // ░▓▓░░▓▓░
        0x66,  // ▓░░▓▓░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0f\231f\0\0"[i%8]

    constexpr uint8_t chainLarge[] PROGMEM {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0xE7,  // ░░░▓▓░░░
        0x42,  // ▓░▓▓▓▓░▓
        0x3C,  // ▓▓░░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0<B\347B<\0"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t chain[] PROGMEM {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t chainLarge[] PROGMEM {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

}
#endif