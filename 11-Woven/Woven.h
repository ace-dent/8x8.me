// Woven - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM interlinked[] {
        8, 8,  // 8x8 px image
        0xBA,  // ░▓░░░▓░▓
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEA,  // ░░░▓░▓░▓
        0x77,  // ▓░░░▓░░░
        0xAE,  // ░▓░▓░░░▓
        0xDD,  // ░░▓░░░▓░
    };
    // Magic: ~"E\210D\"\25\210Q\""[i%8]

    constexpr uint8_t PROGMEM weaveDense[] {
        8, 8,  // 8x8 px image
        0xBA,  // ░▓░░░▓░▓
        0x77,  // ▓░░░▓░░░
        0xAB,  // ░▓░▓░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEA,  // ░░░▓░▓░▓
        0x77,  // ▓░░░▓░░░
        0xAE,  // ░▓░▓░░░▓
        0xDD,  // ░░▓░░░▓░
    };
    // Magic: ~"E\210T\"\25\210Q\""[i%8]

    constexpr uint8_t PROGMEM weave[] {
        8, 8,  // 8x8 px image
        0x3A,  // ▓▓░░░▓░▓
        0x77,  // ▓░░░▓░░░
        0xA3,  // ░▓░▓▓▓░░
        0xC1,  // ░░▓▓▓▓▓░
        0xE2,  // ░░░▓▓▓░▓
        0x77,  // ▓░░░▓░░░
        0x2E,  // ▓▓░▓░░░▓
        0x1C,  // ▓▓▓░░░▓▓
    };
    // Magic: ":w\243\301\342w.\34"[i%8]

    constexpr uint8_t PROGMEM weaveMedium[] {
        8, 8,  // 8x8 px image
        0x7A,  // ▓░░░░▓░▓
        0x77,  // ▓░░░▓░░░
        0xA7,  // ░▓░▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0xE5,  // ░░░▓▓░▓░
        0xEE,  // ░░░▓░░░▓
        0x5E,  // ▓░▓░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };
    // Magic: "zw\247\303\345\356^<"[i%8]

    constexpr uint8_t PROGMEM weaveBold[] {
        8, 8,  // 8x8 px image
        0x7D,  // ▓░░░░░▓░
        0xBB,  // ░▓░░░▓░░
        0xD7,  // ░░▓░▓░░░
        0xE3,  // ░░░▓▓▓░░
        0xF5,  // ░░░░▓░▓░
        0xEE,  // ░░░▓░░░▓
        0x5F,  // ▓░▓░░░░░
        0x3E,  // ▓▓░░░░░▓
    };
    // Magic: "}\273\327\343\365\356_>"[i%8]

    constexpr uint8_t PROGMEM net[] {
        8, 8,  // 8x8 px image
        0x83,  // ░▓▓▓▓▓░░
        0xC6,  // ░░▓▓▓░░▓
        0x6C,  // ▓░░▓░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x36,  // ▓▓░░▓░░▓
        0x63,  // ▓░░▓▓▓░░
        0xC1,  // ░░▓▓▓▓▓░
    };
    // Magic: "\203\306l8\0346c\301"[i%8]

    constexpr uint8_t PROGMEM wicker[] {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0xAF,  // ░▓░▓░░░░
        0x20,  // ▓▓░▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0xF5,  // ░░░░▓░▓░
        0x04,  // ▓▓▓▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
    };
    // Magic: "$ \257 \4\365\4$"[i%8]

    constexpr uint8_t PROGMEM laced[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x40,  // ▓░▓▓▓▓▓▓
        0x5F,  // ▓░▓░░░░░
        0x40,  // ▓░▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x04,  // ▓▓▓▓▓░▓▓
        0xF5,  // ░░░░▓░▓░
        0x04,  // ▓▓▓▓▓░▓▓
    };
    // Magic: "U@_@U\4\365\4"[i%8]

    constexpr uint8_t PROGMEM squareBasket[] {
        8, 8,  // 8x8 px image
        0x57,  // ▓░▓░▓░░░
        0x50,  // ▓░▓░▓▓▓▓
        0x57,  // ▓░▓░▓░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x75,  // ▓░░░▓░▓░
        0x05,  // ▓▓▓▓▓░▓░
        0x75,  // ▓░░░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "WPW\0u\5u"[i%8]

    constexpr uint8_t PROGMEM puppytooth[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0x22,  // ▓▓░▓▓▓░▓
    };
    // Magic: "Dw\356\""[i%4]
    // GAMBY: 0x47E2

    constexpr uint8_t PROGMEM houndstooth[] {
        8, 8,  // 8x8 px image
        0x18,  // ▓▓▓░░▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0xFC,  // ░░░░░░▓▓
        0x7E,  // ▓░░░░░░▓
        0x7B,  // ▓░░░░▓░░
        0xF9,  // ░░░░░▓▓░
        0x30,  // ▓▓░░▓▓▓▓
    };
    // Magic: "\30H`\374~{\3710"[i%8]

    constexpr uint8_t PROGMEM gingham[] {
        8, 8,  // 8x8 px image
        0x28,  // ▓▓░▓░▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0xFA,  // ░░░░░▓░▓
        0x7D,  // ▓░░░░░▓░
        0xFA,  // ░░░░░▓░▓
        0x7D,  // ▓░░░░░▓░
    };
    // Magic: "(P(P\372}\372}"[i%8]

    constexpr uint8_t PROGMEM plaid[] {
        8, 8,  // 8x8 px image
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
    };
    // Magic: "xxxx\252U\252U"[i%8]

    constexpr uint8_t PROGMEM tartan[] {
        8, 8,  // 8x8 px image
        0x58,  // ▓░▓░░▓▓▓
        0x58,  // ▓░▓░░▓▓▓
        0x58,  // ▓░▓░░▓▓▓
        0x58,  // ▓░▓░░▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x58,  // ▓░▓░░▓▓▓
        0xFF,  // ░░░░░░░░
    };
    // Magic: "XXXX\377\377X\377"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM interlinked[] {
        8, 8,  // 8x8 px image
        0x75,  // ▓░░░▓░▓░
        0xEE,  // ░░░▓░░░▓
        0x57,  // ▓░▓░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xF5,  // ░░░░▓░▓░
        0xEE,  // ░░░▓░░░▓
        0x5D,  // ▓░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
    };

    constexpr uint8_t PROGMEM weaveDense[] {
        8, 8,  // 8x8 px image
        0x75,  // ▓░░░▓░▓░
        0xEE,  // ░░░▓░░░▓
        0x57,  // ▓░▓░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xD5,  // ░░▓░▓░▓░
        0xEE,  // ░░░▓░░░▓
        0x5D,  // ▓░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
    };

    constexpr uint8_t PROGMEM weave[] {
        8, 8,  // 8x8 px image
        0x74,  // ▓░░░▓░▓▓
        0xEE,  // ░░░▓░░░▓
        0x47,  // ▓░▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
        0xC5,  // ░░▓▓▓░▓░
        0xEE,  // ░░░▓░░░▓
        0x5C,  // ▓░▓░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
    };

    constexpr uint8_t PROGMEM weaveMedium[] {
        8, 8,  // 8x8 px image
        0x78,  // ▓░░░░▓▓▓
        0xF6,  // ░░░░▓░░▓
        0x6F,  // ▓░░▓░░░░
        0x87,  // ░▓▓▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0xED,  // ░░░▓░░▓░
        0xDE,  // ░░▓░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t PROGMEM weaveBold[] {
        8, 8,  // 8x8 px image
        0xFA,  // ░░░░░▓░▓
        0x77,  // ▓░░░▓░░░
        0xAF,  // ░▓░▓░░░░
        0xC7,  // ░░▓▓▓░░░
        0xEB,  // ░░░▓░▓░░
        0xDD,  // ░░▓░░░▓░
        0xBE,  // ░▓░░░░░▓
        0x7C,  // ▓░░░░░▓▓
    };

    constexpr uint8_t PROGMEM net[] {
        8, 8,  // 8x8 px image
        0x83,  // ░▓▓▓▓▓░░
        0xC6,  // ░░▓▓▓░░▓
        0x6C,  // ▓░░▓░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x36,  // ▓▓░░▓░░▓
        0x63,  // ▓░░▓▓▓░░
        0xC1,  // ░░▓▓▓▓▓░
    };

    constexpr uint8_t PROGMEM wicker[] {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0xAF,  // ░▓░▓░░░░
        0x20,  // ▓▓░▓▓▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0xF5,  // ░░░░▓░▓░
        0x04,  // ▓▓▓▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
    };

    constexpr uint8_t PROGMEM laced[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x20,  // ▓▓░▓▓▓▓▓
        0xAF,  // ░▓░▓░░░░
        0x20,  // ▓▓░▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x02,  // ▓▓▓▓▓▓░▓
        0xFA,  // ░░░░░▓░▓
        0x02,  // ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM squareBasket[] {
        8, 8,  // 8x8 px image
        0xAE,  // ░▓░▓░░░▓
        0xA0,  // ░▓░▓▓▓▓▓
        0xAE,  // ░▓░▓░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEA,  // ░░░▓░▓░▓
        0x0A,  // ▓▓▓▓░▓░▓
        0xEA,  // ░░░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM puppytooth[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0x22,  // ▓▓░▓▓▓░▓
    };

    constexpr uint8_t PROGMEM houndstooth[] {
        8, 8,  // 8x8 px image
        0x06,  // ▓▓▓▓▓░░▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0xDE,  // ░░▓░░░░▓
        0x9F,  // ░▓▓░░░░░
        0x3F,  // ▓▓░░░░░░
        0x7E,  // ▓░░░░░░▓
        0x12,  // ▓▓▓░▓▓░▓
    };

    constexpr uint8_t PROGMEM gingham[] {
        8, 8,  // 8x8 px image
        0x05,  // ▓▓▓▓▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
        0x05,  // ▓▓▓▓▓░▓░
        0xAF,  // ░▓░▓░░░░
        0x5F,  // ▓░▓░░░░░
        0xAF,  // ░▓░▓░░░░
        0x5F,  // ▓░▓░░░░░
        0x0A,  // ▓▓▓▓░▓░▓
    };

    constexpr uint8_t PROGMEM plaid[] {
        8, 8,  // 8x8 px image
        0x05,  // ▓▓▓▓▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
        0x05,  // ▓▓▓▓▓░▓░
        0xFA,  // ░░░░░▓░▓
        0xF5,  // ░░░░▓░▓░
        0xFA,  // ░░░░░▓░▓
        0xF5,  // ░░░░▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
    };

    constexpr uint8_t PROGMEM tartan[] {
        8, 8,  // 8x8 px image
        0x0D,  // ▓▓▓▓░░▓░
        0x0D,  // ▓▓▓▓░░▓░
        0x0D,  // ▓▓▓▓░░▓░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x0D,  // ▓▓▓▓░░▓░
        0xFF,  // ░░░░░░░░
        0x0D,  // ▓▓▓▓░░▓░
    };

}
#endif