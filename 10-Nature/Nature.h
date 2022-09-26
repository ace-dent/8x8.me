// Nature - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {
    
    constexpr uint8_t PROGMEM grass[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00   // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0000`\0000\30\0"[i%8]
    
    constexpr uint8_t PROGMEM scales[] {
        8, 8,  // 8x8 px image
        0xBD,  // ░▓░░░░▓░
        0xBB,  // ░▓░░░▓░░
        0xDB,  // ░░▓░░▓░░
        0xE3,  // ░░░▓▓▓░░
        0xDB,  // ░░▓░░▓░░
        0xBB,  // ░▓░░░▓░░
        0xBD,  // ░▓░░░░▓░
        0x3E   // ▓▓░░░░░▓
    };
    // Magic: ~"BD$\34$DB\301"[i%8]
    
    constexpr uint8_t PROGMEM shrub[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x36,  // ▓▓░░▓░░▓
        0x28,  // ▓▓░▓░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00   // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0$(6($\0"[i%8]
    
}



#if 0
namespace patternsHorizontal {
    
    constexpr uint8_t PROGMEM grass[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x4C,  // ▓░▓▓░░▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00   // ▓▓▓▓▓▓▓▓
    };
    
    constexpr uint8_t PROGMEM scales[] {
        8, 8,  // 8x8 px image
        0xFE,  // ░░░░░░░▓
        0x7D,  // ▓░░░░░▓░
        0x83,  // ░▓▓▓▓▓░░
        0xEF,  // ░░░▓░░░░
        0xEF,  // ░░░▓░░░░
        0xD7,  // ░░▓░▓░░░
        0x38,  // ▓▓░░░▓▓▓
        0xFE   // ░░░░░░░▓
    };
    
    constexpr uint8_t PROGMEM shrub[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00   // ▓▓▓▓▓▓▓▓
    };
    
}
#endif