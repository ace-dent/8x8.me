// Other - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t chain[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x99, //  ░▓▓░░▓▓░
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0f\231f\0\0"[i%8]

    constexpr uint8_t chainLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x42, //  ▓░▓▓▓▓░▓
        0xE7, //  ░░░▓▓░░░
        0x42, //  ▓░▓▓▓▓░▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0<B\347B<\0"[i%8]

    constexpr uint8_t rosette[] PROGMEM {
        8, 8, //  8x8 px image
        0xCD, //  ░░▓▓░░▓░
        0x81, //  ░▓▓▓▓▓▓░
        0x18, //  ▓▓▓░░▓▓▓
        0x3B, //  ▓▓░░░▓░░
        0xB3, //  ░▓░░▓▓░░
        0x81, //  ░▓▓▓▓▓▓░
        0x18, //  ▓▓▓░░▓▓▓
        0xDC, //  ░░▓░░░▓▓
    };
    // Magic: ~"2~\347\304L~\347#"[i%8]

    constexpr uint8_t snowflake[] PROGMEM {
        8, 8, //  8x8 px image
        0x22, //  ▓▓░▓▓▓░▓
        0x36, //  ▓▓░░▓░░▓
        0x14, //  ▓▓▓░▓░▓▓
        0x6B, //  ▓░░▓░▓░░
        0x14, //  ▓▓▓░▓░▓▓
        0x36, //  ▓▓░░▓░░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 64^"bvT+Tvb@"[i%8]

    constexpr uint8_t festive[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x82, //  ░▓▓▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x6C, //  ▓░░▓░░▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x6C, //  ▓░░▓░░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x82, //  ░▓▓▓▓▓░▓
    };
    // Magic: 4+"\f~@h\rh@~"[i%8]

    constexpr uint8_t yuletide[] PROGMEM {
        8, 8, //  8x8 px image
        0x51, //  ▓░▓░▓▓▓░
        0x02, //  ▓▓▓▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x51, //  ▓░▓░▓▓▓░
        0x08, //  ▓▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x02, //  ▓▓▓▓▓▓░▓
    };
    // Magic: 37^"t'a-t-a'"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t chain[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t chainLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x54, //  ▓░▓░▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x54, //  ▓░▓░▓░▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t rosette[] PROGMEM {
        8, 8, //  8x8 px image
        0xDC, //  ░░▓░░░▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x81, //  ░▓▓▓▓▓▓░
        0xB3, //  ░▓░░▓▓░░
        0x3B, //  ▓▓░░░▓░░
        0x18, //  ▓▓▓░░▓▓▓
        0x81, //  ░▓▓▓▓▓▓░
        0xCD, //  ░░▓▓░░▓░
    };

    constexpr uint8_t snowflake[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0xD6, //  ░░▓░▓░░▓
        0x6C, //  ▓░░▓░░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x6C, //  ▓░░▓░░▓▓
        0xD6, //  ░░▓░▓░░▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t festive[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x41, //  ▓░▓▓▓▓▓░
        0x36, //  ▓▓░░▓░░▓
        0x14, //  ▓▓▓░▓░▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x36, //  ▓▓░░▓░░▓
        0x41, //  ▓░▓▓▓▓▓░
    };

    constexpr uint8_t yuletide[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x41, //  ▓░▓▓▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x14, //  ▓▓▓░▓░▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

}
#endif
