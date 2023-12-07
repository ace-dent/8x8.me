// Rectilinear - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t squareMicro[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0ff"[i%4]
    // GAMBY: 0x0660

    constexpr uint8_t billetVerticalMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x77, //  ▓░░░▓░░░
        0x77, //  ▓░░░▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x77, //  ▓░░░▓░░░
        0x77, //  ▓░░░▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0ww"[i%4]
    // GAMBY: 0x0770

    constexpr uint8_t square[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@OIIO@"[i%8]*4

    constexpr uint8_t squareLargeMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0~~ff~~"[i%8]

    constexpr uint8_t waffle[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0x01, //  ▓▓▓▓▓▓▓░
        0x01, //  ▓▓▓▓▓▓▓░
        0x79, //  ▓░░░░▓▓░
        0x79, //  ▓░░░░▓▓░
        0x79, //  ▓░░░░▓▓░
        0x79, //  ▓░░░░▓▓░
        0x01, //  ▓▓▓▓▓▓▓░
    };
    // Magic: "\377\1\1yyyy\1"[i%8]

    constexpr uint8_t tile[] PROGMEM {
        8, 8, //  8x8 px image
        0x7F, //  ▓░░░░░░░
        0x41, //  ▓░▓▓▓▓▓░
        0x7D, //  ▓░░░░░▓░
        0x7D, //  ▓░░░░░▓░
        0x7D, //  ▓░░░░░▓░
        0x7D, //  ▓░░░░░▓░
        0x7F, //  ▓░░░░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\177A}}}}\177"[i%8]

    constexpr uint8_t tileShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x7F, //  ▓░░░░░░░
        0x55, //  ▓░▓░▓░▓░
        0x6B, //  ▓░░▓░▓░░
        0x55, //  ▓░▓░▓░▓░
        0x6B, //  ▓░░▓░▓░░
        0x55, //  ▓░▓░▓░▓░
        0x7F, //  ▓░░░░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\177UkUkU\177"[i%8]

    constexpr uint8_t illuminated[] PROGMEM {
        8, 8, //  8x8 px image
        0x1F, //  ▓▓▓░░░░░
        0x3F, //  ▓▓░░░░░░
        0x5F, //  ▓░▓░░░░░
        0x3F, //  ▓▓░░░░░░
        0x5F, //  ▓░▓░░░░░
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\37?_?_*T"[i%8]

    constexpr uint8_t block[] PROGMEM {
        8, 8, //  8x8 px image
        0x7E, //  ▓░░░░░░▓
        0x3D, //  ▓▓░░░░▓░
        0x03, //  ▓▓▓▓▓▓░░
        0x1B, //  ▓▓▓░░▓░░
        0x1B, //  ▓▓▓░░▓░░
        0x03, //  ▓▓▓▓▓▓░░
        0x01, //  ▓▓▓▓▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 72^"6uKSSKIH"[i%8]

    constexpr uint8_t blockPyramid[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x2B, //  ▓▓░▓░▓░░
        0x17, //  ▓▓▓░▓░░░
        0x0F, //  ▓▓▓▓░░░░
        0x17, //  ▓▓▓░▓░░░
        0x23, //  ▓▓░▓▓▓░░
        0x41, //  ▓░▓▓▓▓▓░
        0x80, //  ░▓▓▓▓▓▓▓
    };
    // Magic: 96^"5KwowC!\340"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t squareMicro[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetVerticalMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t square[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareLargeMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t waffle[] PROGMEM {
        8, 8, //  8x8 px image
        0xFF, //  ░░░░░░░░
        0x80, //  ░▓▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x9E, //  ░▓▓░░░░▓
        0x9E, //  ░▓▓░░░░▓
        0x9E, //  ░▓▓░░░░▓
        0x9E, //  ░▓▓░░░░▓
        0x80, //  ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t tile[] PROGMEM {
        8, 8, //  8x8 px image
        0xFE, //  ░░░░░░░▓
        0x82, //  ░▓▓▓▓▓░▓
        0xBE, //  ░▓░░░░░▓
        0xBE, //  ░▓░░░░░▓
        0xBE, //  ░▓░░░░░▓
        0xBE, //  ░▓░░░░░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t tileShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0xFE, //  ░░░░░░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xD6, //  ░░▓░▓░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xD6, //  ░░▓░▓░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t illuminated[] PROGMEM {
        8, 8, //  8x8 px image
        0xF8, //  ░░░░░▓▓▓
        0xFC, //  ░░░░░░▓▓
        0xFA, //  ░░░░░▓░▓
        0xFC, //  ░░░░░░▓▓
        0xFA, //  ░░░░░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t block[] PROGMEM {
        8, 8, //  8x8 px image
        0x7E, //  ▓░░░░░░▓
        0xBC, //  ░▓░░░░▓▓
        0xC0, //  ░░▓▓▓▓▓▓
        0xD8, //  ░░▓░░▓▓▓
        0xD8, //  ░░▓░░▓▓▓
        0xC0, //  ░░▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t blockPyramid[] PROGMEM {
        8, 8, //  8x8 px image
        0xFE, //  ░░░░░░░▓
        0x7C, //  ▓░░░░░▓▓
        0xB8, //  ░▓░░░▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0xA8, //  ░▓░▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x82, //  ░▓▓▓▓▓░▓
        0x01, //  ▓▓▓▓▓▓▓░
    };

}
#endif
