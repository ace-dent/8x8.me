// Symbols - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t love[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: 21+"s@\r/\r@s/"[i%8]

    constexpr uint8_t heart[] PROGMEM {
        8, 8, //  8x8 px image
        0x0C, //  ▓▓▓▓░░▓▓
        0x12, //  ▓▓▓░▓▓░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x12, //  ▓▓▓░▓▓░▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 96^"lrB$Brl`"[i%8]

    constexpr uint8_t heartSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x0C, //  ▓▓▓▓░░▓▓
        0x1E, //  ▓▓▓░░░░▓
        0x3E, //  ▓▓░░░░░▓
        0x7C, //  ▓░░░░░▓▓
        0x3E, //  ▓▓░░░░░▓
        0x1E, //  ▓▓▓░░░░▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 64^"L^~<~^L@"[i%8]

    constexpr uint8_t heartMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x33, //  ▓▓░░▓▓░░
        0x66, //  ▓░░▓▓░░▓
        0x33, //  ▓▓░░▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x33, //  ▓▓░░▓▓░░
        0x66, //  ▓░░▓▓░░▓
        0x33, //  ▓▓░░▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "3f3"[i%4]
    // GAMBY: 0x3630

    constexpr uint8_t quaver[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x70, //  ▓░░░▓▓▓▓
        0x70, //  ▓░░░▓▓▓▓
        0x3F, //  ▓▓░░░░░░
        0x02, //  ▓▓▓▓▓▓░▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0 pp?\2\4"[i%8]

    constexpr uint8_t quaverMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x77, //  ▓░░░▓░░░
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x77, //  ▓░░░▓░░░
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "Dw\21"[i%4]
    // GAMBY: 0x4710

    constexpr uint8_t anchor[] PROGMEM {
        8, 8, //  8x8 px image
        0x20, //  ▓▓░▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0xFA, //  ░░░░░▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: " @D\372D@ "[i%8]

    constexpr uint8_t crossbones[] PROGMEM {
        8, 8, //  8x8 px image
        0x22, //  ▓▓░▓▓▓░▓
        0x63, //  ▓░░▓▓▓░░
        0x14, //  ▓▓▓░▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x63, //  ▓░░▓▓▓░░
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 80^"r3DXD3rP"[i%8]

    constexpr uint8_t octothorp[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x7E, //  ▓░░░░░░▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x7E, //  ▓░░░░░░▓
        0x24, //  ▓▓░▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0$~$$~$"[i%8]

    constexpr uint8_t cross[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 88^"X@@&&@@X"[i%8]

    constexpr uint8_t crossMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x22, //  ▓▓░▓▓▓░▓
        0x77, //  ▓░░░▓░░░
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x77, //  ▓░░░▓░░░
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\"w\""[i%4]
    // GAMBY: 0x2720

    constexpr uint8_t atto[] PROGMEM {
        8, 8, //  8x8 px image
        0x1C, //  ▓▓▓░░░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x59, //  ▓░▓░░▓▓░
        0x55, //  ▓░▓░▓░▓░
        0x0D, //  ▓▓▓▓░░▓░
        0x12, //  ▓▓▓░▓▓░▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 98^"~@;7opnb"[i%8]

    constexpr uint8_t amongi[] PROGMEM {
        8, 8, //  8x8 px image
        0x06, //  ▓▓▓▓▓░░▓
        0x0F, //  ▓▓▓▓░░░░
        0x05, //  ▓▓▓▓▓░▓░
        0x0D, //  ▓▓▓▓░░▓░
        0x60, //  ▓░░▓▓▓▓▓
        0xF0, //  ░░░░▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0xD0, //  ░░▓░▓▓▓▓
    };
    // Magic: 32^"&/%-@\320p\360"[i%8]

    constexpr uint8_t invadingBug[] PROGMEM {
        8, 8, //  8x8 px image
        0x68, //  ▓░░▓░▓▓▓
        0x1D, //  ▓▓▓░░░▓░
        0x36, //  ▓▓░░▓░░▓
        0x1C, //  ▓▓▓░░░▓▓
        0x36, //  ▓▓░░▓░░▓
        0x1D, //  ▓▓▓░░░▓░
        0x68, //  ▓░░▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 67^"+^u_u^+C"[i%8]

    constexpr uint8_t invadingCrab[] PROGMEM {
        8, 8, //  8x8 px image
        0x34, //  ▓▓░░▓░▓▓
        0x4E, //  ▓░▓▓░░░▓
        0x16, //  ▓▓▓░▓░░▓
        0x0F, //  ▓▓▓▓░░░░
        0x16, //  ▓▓▓░▓░░▓
        0x4E, //  ▓░▓▓░░░▓
        0x34, //  ▓▓░░▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 96^"T.vov.T`"[i%8]

    constexpr uint8_t invadingSquid[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x5C, //  ▓░▓░░░▓▓
        0x36, //  ▓▓░░▓░░▓
        0x1F, //  ▓▓▓░░░░░
        0x36, //  ▓▓░░▓░░▓
        0x5C, //  ▓░▓░░░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: ")}W@W})!"[i%8]-33

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t love[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x82, //  ░▓▓▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x82, //  ░▓▓▓▓▓░▓
    };

    constexpr uint8_t heart[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x6C, //  ▓░░▓░░▓▓
        0x92, //  ░▓▓░▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t heartSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x6C, //  ▓░░▓░░▓▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0x7C, //  ▓░░░░░▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t heartMini[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0xEE, //  ░░░▓░░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xAA, //  ░▓░▓░▓░▓
        0xEE, //  ░░░▓░░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t quaver[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x0A, //  ▓▓▓▓░▓░▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x78, //  ▓░░░░▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t quaverMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x66, //  ▓░░▓▓░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xCC, //  ░░▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xCC, //  ░░▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t anchor[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x92, //  ░▓▓░▓▓░▓
        0x7C, //  ▓░░░░░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t crossbones[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0xC6, //  ░░▓▓▓░░▓
        0x28, //  ▓▓░▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0xC6, //  ░░▓▓▓░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t octothorp[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x7E, //  ▓░░░░░░▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x7E, //  ▓░░░░░░▓
        0x24, //  ▓▓░▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t cross[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t crossMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0xEE, //  ░░░▓░░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0xEE, //  ░░░▓░░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t atto[] PROGMEM {
        8, 8, //  8x8 px image
        0x38, //  ▓▓░░░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x9A, //  ░▓▓░░▓░▓
        0xAA, //  ░▓░▓░▓░▓
        0xB4, //  ░▓░░▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t amongi[] PROGMEM {
        8, 8, //  8x8 px image
        0x70, //  ▓░░░▓▓▓▓
        0xC0, //  ░░▓▓▓▓▓▓
        0xF0, //  ░░░░▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0x07, //  ▓▓▓▓▓░░░
        0x0C, //  ▓▓▓▓░░▓▓
        0x0F, //  ▓▓▓▓░░░░
        0x05, //  ▓▓▓▓▓░▓░
    };

    constexpr uint8_t invadingBug[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0xD6, //  ░░▓░▓░░▓
        0x7C, //  ▓░░░░░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t invadingCrab[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0xFE, //  ░░░░░░░▓
        0x54, //  ▓░▓░▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t invadingSquid[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0xD6, //  ░░▓░▓░░▓
        0x7C, //  ▓░░░░░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

}
#endif
