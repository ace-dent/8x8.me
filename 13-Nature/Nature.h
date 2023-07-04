// Nature - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM scales[] {
        8, 8,  // 8x8 px image
        0xBD,  // ░▓░░░░▓░
        0xBB,  // ░▓░░░▓░░
        0xDB,  // ░░▓░░▓░░
        0xE3,  // ░░░▓▓▓░░
        0xDB,  // ░░▓░░▓░░
        0xBB,  // ░▓░░░▓░░
        0xBD,  // ░▓░░░░▓░
        0x3E,  // ▓▓░░░░░▓
    };
    // Magic: ~"BD$\34$DB\301"[i%8]

    constexpr uint8_t PROGMEM loam[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@AP@@D"[i%8]*4

    constexpr uint8_t PROGMEM sand[] {
        8, 8,  // 8x8 px image
        0x02,  // ▓▓▓▓▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 97^"cE!aiq\341a"[i%8]

    constexpr uint8_t PROGMEM grass[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: " @ \0\2\4\2"[i%8]

    constexpr uint8_t PROGMEM divot[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x05,  // ▓▓▓▓▓░▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 97^"adcaaA1a"[i%8]

    constexpr uint8_t PROGMEM pasture[] {
        8, 8,  // 8x8 px image
        0x60,  // ▓░░▓▓▓▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x60,  // ▓░░▓▓▓▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x30,  // ▓▓░░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 65^"!G!GqAqA"[i%8]

    constexpr uint8_t PROGMEM daisies[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 99^"kwkcC3Cc"[i%8]

    constexpr uint8_t PROGMEM tuffet[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@HP@XD@"[i%8]*4

    constexpr uint8_t PROGMEM shrub[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@DHFHD@"[i%8]*4

    constexpr uint8_t PROGMEM leaves[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@FL@FC"[i%8]*4

    constexpr uint8_t PROGMEM crop[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x4C,  // ▓░▓▓░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: " `L\30@` "[i%8]

    constexpr uint8_t PROGMEM bush[] {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x66,  // ▓░░▓▓░░▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 72^"Xx.D8PHH"[i%8]

    constexpr uint8_t PROGMEM thicket[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x36,  // ▓▓░░▓░░▓
        0x28,  // ▓▓░▓░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0$(6($\0"[i%8]

    constexpr uint8_t PROGMEM tree[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0xEA,  // ░░░▓░▓░▓
        0x14,  // ▓▓▓░▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 65^"AiU\253UiAA"[i%8]

    constexpr uint8_t PROGMEM rocks[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0 00\0 \0"[i%8]

    constexpr uint8_t PROGMEM mounds[] {
        8, 8,  // 8x8 px image
        0x02,  // ▓▓▓▓▓▓░▓
        0x41,  // ▓░▓▓▓▓▓░
        0x21,  // ▓▓░▓▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x48,  // ▓░▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };
    // Magic: 96^"b!AB(ddh"[i%8]

    constexpr uint8_t PROGMEM skull[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@LJFJ`P"[i%8]*4

    constexpr uint8_t PROGMEM crackedBoulder[] {
        8, 8,  // 8x8 px image
        0x68,  // ▓░░▓░▓▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x90,  // ░▓▓░▓▓▓▓
        0xC6,  // ░░▓▓▓░░▓
        0xDE,  // ░░▓░░░░▓
        0x9C,  // ░▓▓░░░▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "4\26HcoN\30"[i%8]*2

    constexpr uint8_t PROGMEM beanStalk[] {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0xDF,  // ░░▓░░░░░
        0x77,  // ▓░░░▓░░░
        0xFD,  // ░░░░░░▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\20 \337w\375\2\1"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM scales[] {
        8, 8,  // 8x8 px image
        0xFE,  // ░░░░░░░▓
        0x7D,  // ▓░░░░░▓░
        0x83,  // ░▓▓▓▓▓░░
        0xEF,  // ░░░▓░░░░
        0xEF,  // ░░░▓░░░░
        0xD7,  // ░░▓░▓░░░
        0x38,  // ▓▓░░░▓▓▓
        0xFE,  // ░░░░░░░▓
    };

    constexpr uint8_t PROGMEM loam[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM sand[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM grass[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x0A,  // ▓▓▓▓░▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM divot[] {
        8, 8,  // 8x8 px image
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM pasture[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x0A,  // ▓▓▓▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM daisies[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x0A,  // ▓▓▓▓░▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM tuffet[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM shrub[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM leaves[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x26,  // ▓▓░▓▓░░▓
        0x34,  // ▓▓░░▓░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM crop[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0xC6,  // ░░▓▓▓░░▓
        0x6C,  // ▓░░▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM bush[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM thicket[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM tree[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM rocks[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x74,  // ▓░░░▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM mounds[] {
        8, 8,  // 8x8 px image
        0x60,  // ▓░░▓▓▓▓▓
        0x90,  // ░▓▓░▓▓▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x09,  // ▓▓▓▓░▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM skull[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
    };

    constexpr uint8_t PROGMEM crackedBoulder[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x5C,  // ▓░▓░░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x2E,  // ▓▓░▓░░░▓
        0xC2,  // ░░▓▓▓▓░▓
        0x98,  // ░▓▓░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t PROGMEM beanStalk[] {
        8, 8,  // 8x8 px image
        0x3A,  // ▓▓░░░▓░▓
        0x34,  // ▓▓░░▓░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0xB8,  // ░▓░░░▓▓▓
        0x58,  // ▓░▓░░▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
    };

}
#endif