// SPDX-License-Identifier: CC0-1.0

// Dashes - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t horizontalDenseTrellis[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x11, //  ▓▓▓░▓▓▓░
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x11, //  ▓▓▓░▓▓▓░
    };
    // Magic: i%4<2?68:17
    // GAMBY: 0x4411

    constexpr uint8_t horizontalDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x04, //  ▓▓▓▓▓░▓▓
    };
    // Magic: i%8<4?64:4

    constexpr uint8_t horizontalDashMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: i%4<2?68:0
    // GAMBY: 0x4400

    constexpr uint8_t verticalDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x0F, //  ▓▓▓▓░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xF0, //  ░░░░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 46^"!...\336..."[i%8]

    constexpr uint8_t dexterDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
    };
    // Magic: "DHAB"[i%4]*4

    constexpr uint8_t dexterSparseDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x01, //  ▓▓▓▓▓▓▓░
        0x02, //  ▓▓▓▓▓▓░▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
    };
    // Magic: 99^"bagccC#\343"[i%8]

    constexpr uint8_t sinisterDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x08, //  ▓▓▓▓░▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
    };
    // Magic: "BAHD"[i%4]*4

    constexpr uint8_t sinisterSparseDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x80, //  ░▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x01, //  ▓▓▓▓▓▓▓░
    };
    // Magic: 99^"\343#Cccgab"[i%8]

    constexpr uint8_t alternatingDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x01, //  ▓▓▓▓▓▓▓░
        0x02, //  ▓▓▓▓▓▓░▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: 99^"bagc#Csc"[i%8]

    constexpr uint8_t alternatingDashDouble[] PROGMEM {
        8, 8, //  8x8 px image
        0x19, //  ▓▓▓░░▓▓░
        0x13, //  ▓▓▓░▓▓░░
        0x46, //  ▓░▓▓▓░░▓
        0x64, //  ▓░░▓▓░▓▓
        0x31, //  ▓▓░░▓▓▓░
        0x91, //  ░▓▓░▓▓▓░
        0xC4, //  ░░▓▓▓░▓▓
        0x4C, //  ▓░▓▓░░▓▓
    };
    // Magic: "+%XvC\243\326^"[i%8]-18

    constexpr uint8_t alternatingDashMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: "\21\"\210D"[i%4]
    // GAMBY: 0x1284

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t horizontalDenseTrellis[] PROGMEM {
        8, 8, //  8x8 px image
        0x33, //  ▓▓░░▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0xCC, //  ░░▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x33, //  ▓▓░░▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0xCC, //  ░░▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x0F, //  ▓▓▓▓░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xF0, //  ░░░░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t horizontalDashMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xCC, //  ░░▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xCC, //  ░░▓▓░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t verticalDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x80, //  ░▓▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t dexterDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t dexterSparseDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x80, //  ░▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x01, //  ▓▓▓▓▓▓▓░
    };

    constexpr uint8_t sinisterDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t sinisterSparseDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x01, //  ▓▓▓▓▓▓▓░
        0x02, //  ▓▓▓▓▓▓░▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t alternatingDash[] PROGMEM {
        8, 8, //  8x8 px image
        0x80, //  ░▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t alternatingDashDouble[] PROGMEM {
        8, 8, //  8x8 px image
        0xCC, //  ░░▓▓░░▓▓
        0x60, //  ▓░░▓▓▓▓▓
        0x33, //  ▓▓░░▓▓░░
        0x81, //  ░▓▓▓▓▓▓░
        0xCC, //  ░░▓▓░░▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x33, //  ▓▓░░▓▓░░
        0x06, //  ▓▓▓▓▓░░▓
    };

    constexpr uint8_t alternatingDashMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
    };

}
#endif
