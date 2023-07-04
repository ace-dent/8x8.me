// Waves - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM ripple[] {
        8, 8,  // 8x8 px image
        0x40,  // ▓░▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
    };
    // Magic: 97^"!cAcAe!e"[i%8]

    constexpr uint8_t PROGMEM wave[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: 99^"'ArrAcA'"[i%8]

    constexpr uint8_t PROGMEM tidalLight[] {
        8, 8,  // 8x8 px image
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
    };
    // Magic: "PH@D@HPP"[i%8]*4

    constexpr uint8_t PROGMEM tidal[] {
        8, 8,  // 8x8 px image
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
    };
    // Magic: "PHDDDHPP"[i%8]*4

    constexpr uint8_t PROGMEM tidalMedium[] {
        8, 8,  // 8x8 px image
        0x60,  // ▓░░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
    };
    // Magic: "XLFFFLXX"[i%8]*4

    constexpr uint8_t PROGMEM oceanicLight[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
    };
    // Magic: "@PJD@H@P"[i%8]*4

    constexpr uint8_t PROGMEM oceanic[] {
        8, 8,  // 8x8 px image
        0x40,  // ▓░▓▓▓▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
    };
    // Magic: "@h8\20  @@"[i%8]

    constexpr uint8_t PROGMEM vairPoint[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x3C,  // ▓▓░░░░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
    };
    // Magic: "<\2\1\2<@\200@"[i%8]

    constexpr uint8_t PROGMEM doubleHelix[] {
        8, 8,  // 8x8 px image
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
    };
    // Magic: "BB$\b\20$BB"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM ripple[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x05,  // ▓▓▓▓▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x82,  // ░▓▓▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM wave[] {
        8, 8,  // 8x8 px image
        0x30,  // ▓▓░░▓▓▓▓
        0x4A,  // ▓░▓▓░▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x4A,  // ▓░▓▓░▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM tidalLight[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x83,  // ░▓▓▓▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM tidal[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x83,  // ░▓▓▓▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM tidalMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0xC7,  // ░░▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM oceanicLight[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x41,  // ▓░▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM oceanic[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x6C,  // ▓░░▓░░▓▓
        0xC3,  // ░░▓▓▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM vairPoint[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x05,  // ▓▓▓▓▓░▓░
        0x02,  // ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM doubleHelix[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xC3,  // ░░▓▓▓▓░░
        0x24,  // ▓▓░▓▓░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0xC3,  // ░░▓▓▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

}
#endif