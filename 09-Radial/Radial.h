// Radial - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {
    
    constexpr uint8_t PROGMEM nebula[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x3A,  // ▓▓░░░▓░▓
        0x5C,  // ▓░▓░░░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\20\b:\\\20\b"[i%8]

    constexpr uint8_t PROGMEM pinwheel[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x1E,  // ▓▓▓░░░░▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\b\bx\36\20\20"[i%8]

    constexpr uint8_t PROGMEM pivot[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0xE4,  // ░░░▓▓░▓▓
        0x27,  // ▓▓░▓▓░░░
        0x18,  // ▓▓▓░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: "\b\b\30\344'\30\20\20"[i%8]

    constexpr uint8_t PROGMEM fylfot[] {
        8, 8,  // 8x8 px image
        0x30,  // ▓▓░░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x19,  // ▓▓▓░░▓▓░
        0x27,  // ▓▓░▓▓░░░
        0xE4,  // ░░░▓▓░▓▓
        0x98,  // ░▓▓░░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
    };
    // Magic: "0\20\31'\344\230\b\f"[i%8]

    constexpr uint8_t PROGMEM rotary[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x34,  // ▓▓░░▓░▓▓
        0xC4,  // ░░▓▓▓░▓▓
        0x23,  // ▓▓░▓▓▓░░
        0x2C,  // ▓▓░▓░░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: "\b\b4\304#,\20\20"[i%8]

    constexpr uint8_t PROGMEM starBurst[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0xF4,  // ░░░░▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x2F,  // ▓▓░▓░░░░
        0x30,  // ▓▓░░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
    };
    // Magic: "\4\f\364D\"/0 "[i%8]

    constexpr uint8_t PROGMEM swirl[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x64,  // ▓░░▓▓░▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x26,  // ▓▓░▓▓░░▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: "\b\4d\200\1& \20"[i%8]

    constexpr uint8_t PROGMEM swarm[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0xA4,  // ░▓░▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x25,  // ▓▓░▓▓░▓░
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
    };
    // Magic: "\4\b\244@\2%\20 "[i%8]

    constexpr uint8_t PROGMEM encircled[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x20,  // ▓▓░▓▓▓▓▓
    };
    // Magic: "\4B\200\30\30\1B "[i%8]

    constexpr uint8_t PROGMEM spokes[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x64,  // ▓░░▓▓░▓▓
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0x26,  // ▓▓░▓▓░░▓
        0x30,  // ▓▓░░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: "\b\fd\330\e&0\20"[i%8]

    constexpr uint8_t PROGMEM cartwheel[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0x66,  // ▓░░▓▓░░▓
        0x34,  // ▓▓░░▓░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: "\b,f\330\ef4\20"[i%8]

    constexpr uint8_t PROGMEM cartwheelBold[] {
        8, 8,  // 8x8 px image
        0x2C,  // ▓▓░▓░░▓▓
        0x6E,  // ▓░░▓░░░▓
        0xE7,  // ░░░▓▓░░░
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0xE7,  // ░░░▓▓░░░
        0x76,  // ▓░░░▓░░▓
        0x34,  // ▓▓░░▓░▓▓
    };
    // Magic: ",n\347\330\e\347v4"[i%8]

    constexpr uint8_t PROGMEM cartwheelExtraBold[] {
        8, 8,  // 8x8 px image
        0x6E,  // ▓░░▓░░░▓
        0xEF,  // ░░░▓░░░░
        0xE7,  // ░░░▓▓░░░
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0xE7,  // ░░░▓▓░░░
        0xF7,  // ░░░░▓░░░
        0x76,  // ▓░░░▓░░▓
    };
    // Magic: "n\357\347\330\e\347\367v"[i%8]
    
}



#if 0
namespace patternsHorizontal {
    
    constexpr uint8_t PROGMEM nebula[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x3A,  // ▓▓░░░▓░▓
        0x5C,  // ▓░▓░░░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM pinwheel[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x1E,  // ▓▓▓░░░░▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM pivot[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0xE4,  // ░░░▓▓░▓▓
        0x27,  // ▓▓░▓▓░░░
        0x18,  // ▓▓▓░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM fylfot[] {
        8, 8,  // 8x8 px image
        0x30,  // ▓▓░░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x19,  // ▓▓▓░░▓▓░
        0x27,  // ▓▓░▓▓░░░
        0xE4,  // ░░░▓▓░▓▓
        0x98,  // ░▓▓░░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
    };

    constexpr uint8_t PROGMEM rotary[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x34,  // ▓▓░░▓░▓▓
        0xC4,  // ░░▓▓▓░▓▓
        0x23,  // ▓▓░▓▓▓░░
        0x2C,  // ▓▓░▓░░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM starBurst[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0xF4,  // ░░░░▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x2F,  // ▓▓░▓░░░░
        0x30,  // ▓▓░░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM swirl[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x64,  // ▓░░▓▓░▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x26,  // ▓▓░▓▓░░▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM swarm[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0xA4,  // ░▓░▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x25,  // ▓▓░▓▓░▓░
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM encircled[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x20,  // ▓▓░▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM spokes[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x64,  // ▓░░▓▓░▓▓
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0x26,  // ▓▓░▓▓░░▓
        0x30,  // ▓▓░░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM cartwheel[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0x66,  // ▓░░▓▓░░▓
        0x34,  // ▓▓░░▓░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM cartwheelBold[] {
        8, 8,  // 8x8 px image
        0x2C,  // ▓▓░▓░░▓▓
        0x6E,  // ▓░░▓░░░▓
        0xE7,  // ░░░▓▓░░░
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0xE7,  // ░░░▓▓░░░
        0x76,  // ▓░░░▓░░▓
        0x34,  // ▓▓░░▓░▓▓
    };

    constexpr uint8_t PROGMEM cartwheelExtraBold[] {
        8, 8,  // 8x8 px image
        0x6E,  // ▓░░▓░░░▓
        0xEF,  // ░░░▓░░░░
        0xE7,  // ░░░▓▓░░░
        0xD8,  // ░░▓░░▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0xE7,  // ░░░▓▓░░░
        0xF7,  // ░░░░▓░░░
        0x76,  // ▓░░░▓░░▓
    };
    
}
#endif