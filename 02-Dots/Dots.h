// Dots - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t pixel[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: i%8==4?8:0

    constexpr uint8_t pixelMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: i%4==2?34:0
    // GAMBY: 0x0020

    constexpr uint8_t glisten[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 99^"g#cAcbsc"[i%8]

    constexpr uint8_t fairyRing[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x42, //  ▓░▓▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x21, //  ▓▓░▓▓▓▓░
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 97^"aq#aa@ea"[i%8]

    constexpr uint8_t noise[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x48, //  ▓░▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 99^"kbc+casc"[i%8]

    constexpr uint8_t confetti[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x08, //  ▓▓▓▓░▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: 99^"g#bkCa\343s"[i%8]

    constexpr uint8_t static[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x10, //  ▓▓▓░▓▓▓▓
        0xA2, //  ░▓░▓▓▓░▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x09, //  ▓▓▓▓░▓▓░
    };
    // Magic: 96^" tap\302h i"[i%8]

    constexpr uint8_t diamondSpeckled[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x0A, //  ▓▓▓▓░▓░▓
        0xA0, //  ░▓░▓▓▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x50, //  ▓░▓░▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: 96^"h@j\300e0dp"[i%8]

    constexpr uint8_t confettiLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x0C, //  ▓▓▓▓░░▓▓
        0x6C, //  ▓░░▓░░▓▓
        0x63, //  ▓░░▓▓▓░░
        0x03, //  ▓▓▓▓▓▓░░
        0x30, //  ▓▓░░▓▓▓▓
        0x36, //  ▓▓░░▓░░▓
        0xC6, //  ░░▓▓▓░░▓
        0xC0, //  ░░▓▓▓▓▓▓
    };
    // Magic: 66^"N.!Art\204\202"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t pixel[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t pixelMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t glisten[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t fairyRing[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t noise[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x90, //  ░▓▓░▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t confetti[] PROGMEM {
        8, 8, //  8x8 px image
        0x20, //  ▓▓░▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x08, //  ▓▓▓▓░▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t static[] PROGMEM {
        8, 8, //  8x8 px image
        0x21, //  ▓▓░▓▓▓▓░
        0x08, //  ▓▓▓▓░▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x50, //  ▓░▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x82, //  ░▓▓▓▓▓░▓
        0x08, //  ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t diamondSpeckled[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x0A, //  ▓▓▓▓░▓░▓
        0xA0, //  ░▓░▓▓▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x50, //  ▓░▓░▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t confettiLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x30, //  ▓▓░░▓▓▓▓
        0x36, //  ▓▓░░▓░░▓
        0xC6, //  ░░▓▓▓░░▓
        0xC0, //  ░░▓▓▓▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x6C, //  ▓░░▓░░▓▓
        0x63, //  ▓░░▓▓▓░░
        0x03, //  ▓▓▓▓▓▓░░
    };

}
#endif
