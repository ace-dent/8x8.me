// Dashes - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM horizontalDenseTrellis[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: "DD\21\21"[i%4]
    // GAMBY: 0x4411

    constexpr uint8_t PROGMEM horizontalDenseDotDash[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x44,  // ▓░▓▓▓░▓▓
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x44,  // ▓░▓▓▓░▓▓
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "UDU"[i%4]
    // GAMBY: 0x5450

    constexpr uint8_t PROGMEM horizontalDash[] {
        8, 8,  // 8x8 px image
        0x40,  // ▓░▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x04,  // ▓▓▓▓▓░▓▓
    };
    // Magic: "@@@@\4\4\4\4"[i%8]

    constexpr uint8_t PROGMEM horizontalDashMini[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "DD\0"[i%4]
    // GAMBY: 0x4400

    constexpr uint8_t PROGMEM verticalDash[] {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\17\0\0\0\360\0\0"[i%8]

    constexpr uint8_t PROGMEM dexterDash[] {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };
    // Magic: "\20 \4\b"[i%4]

    constexpr uint8_t PROGMEM dexterSparseDash[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
    };
    // Magic: "\1\2\4\0\0 @\200"[i%8]

    constexpr uint8_t PROGMEM sinisterDash[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: "\b\4 \20"[i%4]

    constexpr uint8_t PROGMEM sinisterSparseDash[] {
        8, 8,  // 8x8 px image
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
    };
    // Magic: "\200@ \0\0\4\2\1"[i%8]

    constexpr uint8_t PROGMEM alternatingDash[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\1\2\4\0@ \20"[i%8]

    constexpr uint8_t PROGMEM alternatingDashDouble[] {
        8, 8,  // 8x8 px image
        0x19,  // ▓▓▓░░▓▓░
        0x13,  // ▓▓▓░▓▓░░
        0x46,  // ▓░▓▓▓░░▓
        0x64,  // ▓░░▓▓░▓▓
        0x31,  // ▓▓░░▓▓▓░
        0x91,  // ░▓▓░▓▓▓░
        0xC4,  // ░░▓▓▓░▓▓
        0x4C,  // ▓░▓▓░░▓▓
    };
    // Magic: "\31\23Fd1\221\304L"[i%8]

    constexpr uint8_t PROGMEM alternatingDashMini[] {
        8, 8,  // 8x8 px image
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: "\21\"\210D"[i%4]
    // GAMBY: 0x1284

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM horizontalDenseTrellis[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalDenseDotDash[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEE,  // ░░░▓░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEE,  // ░░░▓░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalDash[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalDashMini[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM verticalDash[] {
        8, 8,  // 8x8 px image
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM dexterDash[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM dexterSparseDash[] {
        8, 8,  // 8x8 px image
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
    };

    constexpr uint8_t PROGMEM sinisterDash[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterSparseDash[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM alternatingDash[] {
        8, 8,  // 8x8 px image
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM alternatingDashDouble[] {
        8, 8,  // 8x8 px image
        0xCC,  // ░░▓▓░░▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x06,  // ▓▓▓▓▓░░▓
    };

    constexpr uint8_t PROGMEM alternatingDashMini[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
    };

}
#endif