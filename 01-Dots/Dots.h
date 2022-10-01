// Dots - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM confetti[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x08,  // ▓▓▓▓░▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: "\4@\1\b \2\200\20"[i%8]

    constexpr uint8_t PROGMEM confettiLarge[] {
        8, 8,  // 8x8 px image
        0x0C,  // ▓▓▓▓░░▓▓
        0x6C,  // ▓░░▓░░▓▓
        0x63,  // ▓░░▓▓▓░░
        0x03,  // ▓▓▓▓▓▓░░
        0x30,  // ▓▓░░▓▓▓▓
        0x36,  // ▓▓░░▓░░▓
        0xC6,  // ░░▓▓▓░░▓
        0xC0,  // ░░▓▓▓▓▓▓
    };
    // Magic: "\flc\00306\306\300"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM confetti[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x08,  // ▓▓▓▓░▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM confettiLarge[] {
        8, 8,  // 8x8 px image
        0x30,  // ▓▓░░▓▓▓▓
        0x36,  // ▓▓░░▓░░▓
        0xC6,  // ░░▓▓▓░░▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x6C,  // ▓░░▓░░▓▓
        0x63,  // ▓░░▓▓▓░░
        0x03,  // ▓▓▓▓▓▓░░
    };
}
#endif