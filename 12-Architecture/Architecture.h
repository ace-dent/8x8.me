// Architecture - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM brick[] {
        8, 8,  // 8x8 px image
        0xE0,  // ░░░▓▓▓▓▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0x0E,  // ▓▓▓▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
    };
    // Magic: "pwww\awww"[i%8]*2

    constexpr uint8_t PROGMEM brickDense[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
    };
    // Magic: "DUUU\21UUU"[i%8]*2

    constexpr uint8_t PROGMEM brickNarrow[] {
        8, 8,  // 8x8 px image
        0xD0,  // ░░▓░▓▓▓▓
        0xD6,  // ░░▓░▓░░▓
        0xC6,  // ░░▓▓▓░░▓
        0xD6,  // ░░▓░▓░░▓
        0x16,  // ▓▓▓░▓░░▓
        0xD6,  // ░░▓░▓░░▓
        0xD6,  // ░░▓░▓░░▓
        0xD6,  // ░░▓░▓░░▓
    };
    // Magic: "hkck\vkkk"[i%8]*2

    constexpr uint8_t PROGMEM brickWide[] {
        8, 8,  // 8x8 px image
        0xF0,  // ░░░░▓▓▓▓
        0xF6,  // ░░░░▓░░▓
        0xF6,  // ░░░░▓░░▓
        0xF6,  // ░░░░▓░░▓
        0x06,  // ▓▓▓▓▓░░▓
        0xF6,  // ░░░░▓░░▓
        0xF6,  // ░░░░▓░░▓
        0xF6,  // ░░░░▓░░▓
    };
    // Magic: "x{{{\3{{{"[i%8]*2

    constexpr uint8_t PROGMEM brickAged[] {
        8, 8,  // 8x8 px image
        0xF0,  // ░░░░▓▓▓▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0x6E,  // ▓░░▓░░░▓
        0x0E,  // ▓▓▓▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEC,  // ░░░▓░░▓▓
    };
    // Magic: "xww7\awwv"[i%8]*2

    constexpr uint8_t PROGMEM brickPointed[] {
        8, 8,  // 8x8 px image
        0xE0,  // ░░░▓▓▓▓▓
        0xE4,  // ░░░▓▓░▓▓
        0xEE,  // ░░░▓░░░▓
        0x4E,  // ▓░▓▓░░░▓
        0x0E,  // ▓▓▓▓░░░▓
        0x4E,  // ▓░▓▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xE4,  // ░░░▓▓░▓▓
    };
    // Magic: "prw'\a'wr"[i%8]*2

    constexpr uint8_t PROGMEM brickSparse[] {
        8, 8,  // 8x8 px image
        0xC0,  // ░░▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xC0,  // ░░▓▓▓▓▓▓
    };
    // Magic: "`ff\6\6ff`"[i%8]*2

    constexpr uint8_t PROGMEM brickHighlights[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x2E,  // ▓▓░▓░░░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x02,  // ▓▓▓▓▓▓░▓
        0xE2,  // ░░░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
    };
    // Magic: 88^"xvzzZ\272zz"[i%8]

    constexpr uint8_t PROGMEM mortar[] {
        8, 8,  // 8x8 px image
        0x0A,  // ▓▓▓▓░▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0xA0,  // ░▓░▓▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: 80^"ZAPA\360APA"[i%8]

    constexpr uint8_t PROGMEM mortarAged[] {
        8, 8,  // 8x8 px image
        0x0A,  // ▓▓▓▓░▓░▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: 80^"Z@AP\320@QA"[i%8]

    constexpr uint8_t PROGMEM brickVertical[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFE,  // ░░░░░░░▓
        0xFE,  // ░░░░░░░▓
        0xFE,  // ░░░░░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEF,  // ░░░▓░░░░
        0xEF,  // ░░░▓░░░░
        0xEF,  // ░░░▓░░░░
    };
    // Magic: 128^"\200~~~\200ooo"[i%8]

    constexpr uint8_t PROGMEM brickSinister[] {
        8, 8,  // 8x8 px image
        0xEF,  // ░░░▓░░░░
        0xF7,  // ░░░░▓░░░
        0xEB,  // ░░░▓░▓░░
        0xDD,  // ░░▓░░░▓░
        0xBE,  // ░▓░░░░░▓
        0x7F,  // ▓░░░░░░░
        0xBF,  // ░▓░░░░░░
        0xDF,  // ░░▓░░░░░
    };
    // Magic: 128^"owk]>\377?_"[i%8]

    constexpr uint8_t PROGMEM brickSinisterRounded[] {
        8, 8,  // 8x8 px image
        0xEF,  // ░░░▓░░░░
        0xE7,  // ░░░▓▓░░░
        0xEB,  // ░░░▓░▓░░
        0xDD,  // ░░▓░░░▓░
        0xBE,  // ░▓░░░░░▓
        0x3F,  // ▓▓░░░░░░
        0xBF,  // ░▓░░░░░░
        0xDF,  // ░░▓░░░░░
    };
    // Magic: 128^"ogk]>\277?_"[i%8]

    constexpr uint8_t PROGMEM brickSinisterMini[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
        0xAA,  // ░▓░▓░▓░▓
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
    };
    // Magic: 119+"3fw"[i%4]
    // GAMBY: 0xADE7

    constexpr uint8_t PROGMEM brickMini[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x44,  // ▓░▓▓▓░▓▓
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x44,  // ▓░▓▓▓░▓▓
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: "UDU\21"[i%4]
    // GAMBY: 0x5451

    constexpr uint8_t PROGMEM brickMiniDamage[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x44,  // ▓░▓▓▓░▓▓
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x51,  // ▓░▓░▓▓▓░
        0x40,  // ▓░▓▓▓▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: 33^"tet0pau0"[i%8]

    constexpr uint8_t PROGMEM brickMiniRuins[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x04,  // ▓▓▓▓▓░▓▓
        0x01,  // ▓▓▓▓▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x51,  // ▓░▓░▓▓▓░
        0x40,  // ▓░▓▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: 33^" % 0paq0"[i%8]

    constexpr uint8_t PROGMEM stoneWall[] {
        8, 8,  // 8x8 px image
        0x30,  // ▓▓░░▓▓▓▓
        0x7B,  // ▓░░░░▓░░
        0x7B,  // ▓░░░░▓░░
        0x71,  // ▓░░░▓▓▓░
        0x24,  // ▓▓░▓▓░▓▓
        0x8E,  // ░▓▓▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xC6,  // ░░▓▓▓░░▓
    };
    // Magic: "0{{q$\216\356\306"[i%8]

    constexpr uint8_t PROGMEM quarryWall[] {
        8, 8,  // 8x8 px image
        0xE1,  // ░░░▓▓▓▓░
        0xED,  // ░░░▓░░▓░
        0xDC,  // ░░▓░░░▓▓
        0x9E,  // ░▓▓░░░░▓
        0x5E,  // ▓░▓░░░░▓
        0xDE,  // ░░▓░░░░▓
        0xDE,  // ░░▓░░░░▓
        0xCD,  // ░░▓▓░░▓░
    };
    // Magic: 160^"AM|>\376~~m"[i%8]

    constexpr uint8_t PROGMEM stoneBlock[] {
        8, 8,  // 8x8 px image
        0x02,  // ▓▓▓▓▓▓░▓
        0x7C,  // ▓░░░░░▓▓
        0xFA,  // ░░░░░▓░▓
        0x7C,  // ▓░░░░░▓▓
        0xFE,  // ░░░░░░░▓
        0x7E,  // ▓░░░░░░▓
        0xBE,  // ░▓░░░░░▓
        0x5D,  // ▓░▓░░░▓░
    };
    // Magic: "\2|\372|\376~\276]"[i%8]

    constexpr uint8_t PROGMEM flagstone[] {
        8, 8,  // 8x8 px image
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x70,  // ▓░░░▓▓▓▓
        0x3B,  // ▓▓░░░▓░░
        0x83,  // ░▓▓▓▓▓░░
        0xBB,  // ░▓░░░▓░░
        0xBB,  // ░▓░░░▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "wwp;\203\273\273"[i%8]

    constexpr uint8_t PROGMEM pavingStones[] {
        8, 8,  // 8x8 px image
        0x6E,  // ▓░░▓░░░▓
        0x9D,  // ░▓▓░░░▓░
        0xD9,  // ░░▓░░▓▓░
        0xE6,  // ░░░▓▓░░▓
        0x67,  // ▓░░▓▓░░░
        0x9B,  // ░▓▓░░▓░░
        0xB9,  // ░▓░░░▓▓░
        0x76,  // ▓░░░▓░░▓
    };
    // Magic: 60+"2a\235\252+_}:"[i%8]

    constexpr uint8_t PROGMEM shingle[] {
        8, 8,  // 8x8 px image
        0xFD,  // ░░░░░░▓░
        0xFB,  // ░░░░░▓░░
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
        0xEB,  // ░░░▓░▓░░
        0xED,  // ░░░▓░░▓░
        0xDE,  // ░░▓░░░░▓
        0x3E,  // ▓▓░░░░░▓
    };
    // Magic: 128^"}{wwkm^\276"[i%8]

    constexpr uint8_t PROGMEM roofTiles[] {
        8, 8,  // 8x8 px image
        0x73,  // ▓░░░▓▓░░
        0x77,  // ▓░░░▓░░░
        0x37,  // ▓▓░░▓░░░
        0x07,  // ▓▓▓▓▓░░░
        0x37,  // ▓▓░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x73,  // ▓░░░▓▓░░
        0x70,  // ▓░░░▓▓▓▓
    };
    // Magic: "sw7\a7wsp"[i%8]

    constexpr uint8_t PROGMEM archway[] {
        8, 8,  // 8x8 px image
        0xFE,  // ░░░░░░░▓
        0x06,  // ▓▓▓▓▓░░▓
        0x03,  // ▓▓▓▓▓▓░░
        0x01,  // ▓▓▓▓▓▓▓░
        0x01,  // ▓▓▓▓▓▓▓░
        0x03,  // ▓▓▓▓▓▓░░
        0x06,  // ▓▓▓▓▓░░▓
        0xFE,  // ░░░░░░░▓
    };
    // Magic: 64^"\276FCAACF\276"[i%8]

    constexpr uint8_t PROGMEM window[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x7C,  // ▓░░░░░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
        0x7C,  // ▓░░░░░▓▓
        0x01,  // ▓▓▓▓▓▓▓░
    };
    // Magic: "\1|BBBB|\1"[i%8]

    constexpr uint8_t PROGMEM picket[] {
        8, 8,  // 8x8 px image
        0x48,  // ▓░▓▓░▓▓▓
        0xFE,  // ░░░░░░░▓
        0xFC,  // ░░░░░░▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0xFE,  // ░░░░░░░▓
        0xFC,  // ░░░░░░▓▓
        0x48,  // ▓░▓▓░▓▓▓
    };
    // Magic: "H\376\374H"[i%4]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM brick[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
    };

    constexpr uint8_t PROGMEM brickDense[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7F,  // ▓░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF7,  // ░░░░▓░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7F,  // ▓░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF7,  // ░░░░▓░░░
    };

    constexpr uint8_t PROGMEM brickNarrow[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xDF,  // ░░▓░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
    };

    constexpr uint8_t PROGMEM brickWide[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
    };

    constexpr uint8_t PROGMEM brickAged[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7E,  // ▓░░░░░░▓
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x80,  // ░▓▓▓▓▓▓▓
        0xF7,  // ░░░░▓░░░
        0xF7,  // ░░░░▓░░░
        0xE7,  // ░░░▓▓░░░
    };

    constexpr uint8_t PROGMEM brickPointed[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x3E,  // ▓▓░░░░░▓
        0x7F,  // ▓░░░░░░░
        0x3E,  // ▓▓░░░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xE3,  // ░░░▓▓▓░░
        0xF7,  // ░░░░▓░░░
        0xE3,  // ░░░▓▓▓░░
    };

    constexpr uint8_t PROGMEM brickSparse[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7E,  // ▓░░░░░░▓
        0x7E,  // ▓░░░░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xE7,  // ░░░▓▓░░░
        0xE7,  // ░░░▓▓░░░
    };

    constexpr uint8_t PROGMEM brickHighlights[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x7F,  // ▓░░░░░░░
        0x40,  // ▓░▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xF7,  // ░░░░▓░░░
        0x04,  // ▓▓▓▓▓░▓▓
        0x04,  // ▓▓▓▓▓░▓▓
    };

    constexpr uint8_t PROGMEM mortar[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM mortarAged[] {
        8, 8,  // 8x8 px image
        0x23,  // ▓▓░▓▓▓░░
        0x80,  // ░▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
        0x65,  // ▓░░▓▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM brickVertical[] {
        8, 8,  // 8x8 px image
        0x07,  // ▓▓▓▓▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x70,  // ▓░░░▓▓▓▓
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
    };

    constexpr uint8_t PROGMEM brickSinister[] {
        8, 8,  // 8x8 px image
        0xF7,  // ░░░░▓░░░
        0xEF,  // ░░░▓░░░░
        0xDF,  // ░░▓░░░░░
        0xBF,  // ░▓░░░░░░
        0x5F,  // ▓░▓░░░░░
        0xEE,  // ░░░▓░░░▓
        0xF5,  // ░░░░▓░▓░
        0xFB,  // ░░░░░▓░░
    };

    constexpr uint8_t PROGMEM brickSinisterRounded[] {
        8, 8,  // 8x8 px image
        0xF7,  // ░░░░▓░░░
        0xEF,  // ░░░▓░░░░
        0xDF,  // ░░▓░░░░░
        0xBF,  // ░▓░░░░░░
        0x1F,  // ▓▓▓░░░░░
        0xEE,  // ░░░▓░░░▓
        0xF1,  // ░░░░▓▓▓░
        0xFB,  // ░░░░░▓░░
    };

    constexpr uint8_t PROGMEM brickSinisterMini[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0x55,  // ▓░▓░▓░▓░
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
    };

    constexpr uint8_t PROGMEM brickMini[] {
        8, 8,  // 8x8 px image
        0xBB,  // ░▓░░░▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEE,  // ░░░▓░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xBB,  // ░▓░░░▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEE,  // ░░░▓░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM brickMiniDamage[] {
        8, 8,  // 8x8 px image
        0xB9,  // ░▓░░░▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xE2,  // ░░░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xBB,  // ░▓░░░▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEE,  // ░░░▓░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM brickMiniRuins[] {
        8, 8,  // 8x8 px image
        0xB9,  // ░▓░░░▓▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x1B,  // ▓▓▓░░▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x0E,  // ▓▓▓▓░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM stoneWall[] {
        8, 8,  // 8x8 px image
        0x70,  // ▓░░░▓▓▓▓
        0x67,  // ▓░░▓▓░░░
        0x0F,  // ▓▓▓▓░░░░
        0x66,  // ▓░░▓▓░░▓
        0xF0,  // ░░░░▓▓▓▓
        0xFA,  // ░░░░░▓░▓
        0x73,  // ▓░░░▓▓░░
        0x07,  // ▓▓▓▓▓░░░
    };

    constexpr uint8_t PROGMEM quarryWall[] {
        8, 8,  // 8x8 px image
        0xC1,  // ░░▓▓▓▓▓░
        0x1E,  // ▓▓▓░░░░▓
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x3E,  // ▓▓░░░░░▓
        0xC0,  // ░░▓▓▓▓▓▓
        0xEF,  // ░░░▓░░░░
        0xF7,  // ░░░░▓░░░
    };

    constexpr uint8_t PROGMEM stoneBlock[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0xAE,  // ░▓░▓░░░▓
        0x5F,  // ▓░▓░░░░░
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x7E,  // ▓░░░░░░▓
        0x7D,  // ▓░░░░░▓░
        0x2A,  // ▓▓░▓░▓░▓
    };

    constexpr uint8_t PROGMEM flagstone[] {
        8, 8,  // 8x8 px image
        0xDE,  // ░░▓░░░░▓
        0xDE,  // ░░▓░░░░▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x16,  // ▓▓▓░▓░░▓
        0xF6,  // ░░░░▓░░▓
        0xF6,  // ░░░░▓░░▓
        0xE0,  // ░░░▓▓▓▓▓
        0x0E,  // ▓▓▓▓░░░▓
    };

    constexpr uint8_t PROGMEM pavingStones[] {
        8, 8,  // 8x8 px image
        0x6E,  // ▓░░▓░░░▓
        0x9D,  // ░▓▓░░░▓░
        0xD9,  // ░░▓░░▓▓░
        0xE6,  // ░░░▓▓░░▓
        0x67,  // ▓░░▓▓░░░
        0x9B,  // ░▓▓░░▓░░
        0xB9,  // ░▓░░░▓▓░
        0x76,  // ▓░░░▓░░▓
    };

    constexpr uint8_t PROGMEM shingle[] {
        8, 8,  // 8x8 px image
        0xFC,  // ░░░░░░▓▓
        0x7B,  // ▓░░░░▓░░
        0xB7,  // ░▓░░▓░░░
        0xCF,  // ░░▓▓░░░░
        0xF3,  // ░░░░▓▓░░
        0xFD,  // ░░░░░░▓░
        0xFE,  // ░░░░░░░▓
        0xFE,  // ░░░░░░░▓
    };

    constexpr uint8_t PROGMEM roofTiles[] {
        8, 8,  // 8x8 px image
        0xFE,  // ░░░░░░░▓
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xEF,  // ░░░▓░░░░
        0xEF,  // ░░░▓░░░░
        0xC7,  // ░░▓▓▓░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM archway[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0xE7,  // ░░░▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
    };

    constexpr uint8_t PROGMEM window[] {
        8, 8,  // 8x8 px image
        0x81,  // ░▓▓▓▓▓▓░
        0x3C,  // ▓▓░░░░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
        0x42,  // ▓░▓▓▓▓░▓
        0x7E,  // ▓░░░░░░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM picket[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x66,  // ▓░░▓▓░░▓
        0xFF,  // ░░░░░░░░
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0xFF,  // ░░░░░░░░
        0x66,  // ▓░░▓▓░░▓
    };

}
#endif