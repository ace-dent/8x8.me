// Radial - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t nebula[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x3A, //  ▓▓░░░▓░▓
        0x5C, //  ▓░▓░░░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 97^"aqi[=qia"[i%8]

    constexpr uint8_t pinwheel[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x78, //  ▓░░░░▓▓▓
        0x1E, //  ▓▓▓░░░░▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 65^"AII9_QQA"[i%8]

    constexpr uint8_t pivot[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0xE4, //  ░░░▓▓░▓▓
        0x27, //  ▓▓░▓▓░░░
        0x18, //  ▓▓▓░░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: 64^"HHX\244gXPP"[i%8]

    constexpr uint8_t fylfot[] PROGMEM {
        8, 8, //  8x8 px image
        0x30, //  ▓▓░░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x19, //  ▓▓▓░░▓▓░
        0x27, //  ▓▓░▓▓░░░
        0xE4, //  ░░░▓▓░▓▓
        0x98, //  ░▓▓░░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
    };
    // Magic: 64^"pPYg\244\330HL"[i%8]

    constexpr uint8_t rotary[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x34, //  ▓▓░░▓░▓▓
        0xC4, //  ░░▓▓▓░▓▓
        0x23, //  ▓▓░▓▓▓░░
        0x2C, //  ▓▓░▓░░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: 64^"HHt\204clPP"[i%8]

    constexpr uint8_t starBurst[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0xF4, //  ░░░░▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x2F, //  ▓▓░▓░░░░
        0x30, //  ▓▓░░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
    };
    // Magic: "\4\f\364D\"/0 "[i%8]

    constexpr uint8_t swirl[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x64, //  ▓░░▓▓░▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x26, //  ▓▓░▓▓░░▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: 67^"KG'\303BecS"[i%8]

    constexpr uint8_t swarm[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0xA4, //  ░▓░▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x25, //  ▓▓░▓▓░▓░
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
    };
    // Magic: 99^"gk\307#aFsC"[i%8]

    constexpr uint8_t encircled[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x42, //  ▓░▓▓▓▓░▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x42, //  ▓░▓▓▓▓░▓
        0x20, //  ▓▓░▓▓▓▓▓
    };
    // Magic: 99^"g!\343{{b!C"[i%8]

    constexpr uint8_t spokes[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x64, //  ▓░░▓▓░▓▓
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0x26, //  ▓▓░▓▓░░▓
        0x30, //  ▓▓░░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: 67^"KO'\233XesS"[i%8]

    constexpr uint8_t cartwheel[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x2C, //  ▓▓░▓░░▓▓
        0x66, //  ▓░░▓▓░░▓
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0x66, //  ▓░░▓▓░░▓
        0x34, //  ▓▓░░▓░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: 65^"Im'\231Z'uQ"[i%8]

    constexpr uint8_t cartwheelBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x2C, //  ▓▓░▓░░▓▓
        0x6E, //  ▓░░▓░░░▓
        0xE7, //  ░░░▓▓░░░
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0xE7, //  ░░░▓▓░░░
        0x76, //  ▓░░░▓░░▓
        0x34, //  ▓▓░░▓░▓▓
    };
    // Magic: ",n\347\330\e\347v4"[i%8]

    constexpr uint8_t cartwheelExtraBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x6E, //  ▓░░▓░░░▓
        0xEF, //  ░░░▓░░░░
        0xE7, //  ░░░▓▓░░░
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0xE7, //  ░░░▓▓░░░
        0xF7, //  ░░░░▓░░░
        0x76, //  ▓░░░▓░░▓
    };
    // Magic: 130^"\354meZ\231eu\364"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t nebula[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x3A, //  ▓▓░░░▓░▓
        0x5C, //  ▓░▓░░░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t pinwheel[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x78, //  ▓░░░░▓▓▓
        0x1E, //  ▓▓▓░░░░▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t pivot[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0xE4, //  ░░░▓▓░▓▓
        0x27, //  ▓▓░▓▓░░░
        0x18, //  ▓▓▓░░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t fylfot[] PROGMEM {
        8, 8, //  8x8 px image
        0x30, //  ▓▓░░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x19, //  ▓▓▓░░▓▓░
        0x27, //  ▓▓░▓▓░░░
        0xE4, //  ░░░▓▓░▓▓
        0x98, //  ░▓▓░░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
    };

    constexpr uint8_t rotary[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x34, //  ▓▓░░▓░▓▓
        0xC4, //  ░░▓▓▓░▓▓
        0x23, //  ▓▓░▓▓▓░░
        0x2C, //  ▓▓░▓░░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t starBurst[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0xF4, //  ░░░░▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x2F, //  ▓▓░▓░░░░
        0x30, //  ▓▓░░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
    };

    constexpr uint8_t swirl[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x64, //  ▓░░▓▓░▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x26, //  ▓▓░▓▓░░▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t swarm[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0xA4, //  ░▓░▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x25, //  ▓▓░▓▓░▓░
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
    };

    constexpr uint8_t encircled[] PROGMEM {
        8, 8, //  8x8 px image
        0x04, //  ▓▓▓▓▓░▓▓
        0x42, //  ▓░▓▓▓▓░▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x42, //  ▓░▓▓▓▓░▓
        0x20, //  ▓▓░▓▓▓▓▓
    };

    constexpr uint8_t spokes[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x64, //  ▓░░▓▓░▓▓
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0x26, //  ▓▓░▓▓░░▓
        0x30, //  ▓▓░░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t cartwheel[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x2C, //  ▓▓░▓░░▓▓
        0x66, //  ▓░░▓▓░░▓
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0x66, //  ▓░░▓▓░░▓
        0x34, //  ▓▓░░▓░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t cartwheelBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x2C, //  ▓▓░▓░░▓▓
        0x6E, //  ▓░░▓░░░▓
        0xE7, //  ░░░▓▓░░░
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0xE7, //  ░░░▓▓░░░
        0x76, //  ▓░░░▓░░▓
        0x34, //  ▓▓░░▓░▓▓
    };

    constexpr uint8_t cartwheelExtraBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x6E, //  ▓░░▓░░░▓
        0xEF, //  ░░░▓░░░░
        0xE7, //  ░░░▓▓░░░
        0xD8, //  ░░▓░░▓▓▓
        0x1B, //  ▓▓▓░░▓░░
        0xE7, //  ░░░▓▓░░░
        0xF7, //  ░░░░▓░░░
        0x76, //  ▓░░░▓░░▓
    };

}
#endif
