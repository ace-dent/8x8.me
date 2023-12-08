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

    constexpr uint8_t squareMicroOffset[] PROGMEM {
        8, 8, //  8x8 px image
        0x60, //  ▓░░▓▓▓▓▓
        0x06, //  ▓▓▓▓▓░░▓
        0x06, //  ▓▓▓▓▓░░▓
        0x60, //  ▓░░▓▓▓▓▓
        0x60, //  ▓░░▓▓▓▓▓
        0x06, //  ▓▓▓▓▓░░▓
        0x06, //  ▓▓▓▓▓░░▓
        0x60, //  ▓░░▓▓▓▓▓
    };
    // Magic: "`\6\6`"[i%4]

    constexpr uint8_t squareMiniHighlight[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0x11, //  ▓▓▓░▓▓▓░
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x77, //  ▓░░░▓░░░
        0x11, //  ▓▓▓░▓▓▓░
        0x11, //  ▓▓▓░▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "w\21\21"[i%4]
    // GAMBY: 0x7110

    constexpr uint8_t squareMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0x55, //  ▓░▓░▓░▓░
        0x77, //  ▓░░░▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x77, //  ▓░░░▓░░░
        0x55, //  ▓░▓░▓░▓░
        0x77, //  ▓░░░▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "wUw"[i%4]
    // GAMBY: 0x7570

    constexpr uint8_t squareMiniOffset[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0x05, //  ▓▓▓▓▓░▓░
        0x77, //  ▓░░░▓░░░
        0x50, //  ▓░▓░▓▓▓▓
        0x77, //  ▓░░░▓░░░
        0x05, //  ▓▓▓▓▓░▓░
        0x77, //  ▓░░░▓░░░
        0x50, //  ▓░▓░▓▓▓▓
    };
    // Magic: "w\5wP"[i%4]

    constexpr uint8_t squareMiniSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0x77, //  ▓░░░▓░░░
        0x77, //  ▓░░░▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x77, //  ▓░░░▓░░░
        0x77, //  ▓░░░▓░░░
        0x77, //  ▓░░░▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "www"[i%4]
    // GAMBY: 0x7770

    constexpr uint8_t squareMiniSolidOffset[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0x07, //  ▓▓▓▓▓░░░
        0x77, //  ▓░░░▓░░░
        0x70, //  ▓░░░▓▓▓▓
        0x77, //  ▓░░░▓░░░
        0x07, //  ▓▓▓▓▓░░░
        0x77, //  ▓░░░▓░░░
        0x70, //  ▓░░░▓▓▓▓
    };
    // Magic: "w\awp"[i%4]

    constexpr uint8_t billetMiniHighlight[] PROGMEM {
        8, 8, //  8x8 px image
        0x66, //  ▓░░▓▓░░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "f\"\""[i%4]
    // GAMBY: 0x6220

    constexpr uint8_t billetMini[] PROGMEM {
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
    // Magic: "fff"[i%4]
    // GAMBY: 0x6660

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

    constexpr uint8_t squareSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0<<<<\0"[i%8]

    constexpr uint8_t squareShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\24(\24(\0"[i%8]

    constexpr uint8_t squareLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0~BBBB~"[i%8]

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

    constexpr uint8_t squareLargeSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0~~~~~~"[i%8]

    constexpr uint8_t squareLargeShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0*T*T*T"[i%8]

    constexpr uint8_t squareXL[] PROGMEM {
        8, 8, //  8x8 px image
        0x7F, //  ▓░░░░░░░
        0x41, //  ▓░▓▓▓▓▓░
        0x41, //  ▓░▓▓▓▓▓░
        0x41, //  ▓░▓▓▓▓▓░
        0x41, //  ▓░▓▓▓▓▓░
        0x41, //  ▓░▓▓▓▓▓░
        0x7F, //  ▓░░░░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\177AAAAA\177"[i%8]

    constexpr uint8_t squareXLMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x63, //  ▓░░▓▓▓░░
        0x63, //  ▓░░▓▓▓░░
        0x63, //  ▓░░▓▓▓░░
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\177\177ccc\177\177"[i%8]

    constexpr uint8_t squareXLSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x7F, //  ▓░░░░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\177\177\177\177\177\177\177"[i%8]

    constexpr uint8_t squareXLShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x2A, //  ▓▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x2A, //  ▓▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x2A, //  ▓▓░▓░▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "U*U*U*U"[i%8]

    constexpr uint8_t rectangle[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0<$$$<\0"[i%8]

    constexpr uint8_t rectangleSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0<<<<<\0"[i%8]

    constexpr uint8_t rectangleLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x7E, //  ▓░░░░░░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "~BBBBB~"[i%8]

    constexpr uint8_t rectangleLargeMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "~~fff~~"[i%8]

    constexpr uint8_t rectangleLargeSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "~~~~~~~"[i%8]

    constexpr uint8_t billet[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0<$$$$<"[i%8]

    constexpr uint8_t billetSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0<<<<<<"[i%8]

    constexpr uint8_t billetShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0(\24(\24(\24"[i%8]

    constexpr uint8_t billetVertical[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0~BB~\0"[i%8]

    constexpr uint8_t billetVerticalSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0~~~~\0"[i%8]

    constexpr uint8_t billetVerticalShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0T*T*\0"[i%8]

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

    constexpr uint8_t squareMicroOffset[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x66, //  ▓░░▓▓░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x99, //  ░▓▓░░▓▓░
        0x99, //  ░▓▓░░▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareMiniHighlight[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareMini[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xEE, //  ░░░▓░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xEE, //  ░░░▓░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareMiniOffset[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xEE, //  ░░░▓░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xBB, //  ░▓░░░▓░░
        0xAA, //  ░▓░▓░▓░▓
        0xBB, //  ░▓░░░▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareMiniSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareMiniSolidOffset[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xBB, //  ░▓░░░▓░░
        0xBB, //  ░▓░░░▓░░
        0xBB, //  ░▓░░░▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetMiniHighlight[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0xEE, //  ░░░▓░░░▓
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

    constexpr uint8_t squareSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x7E, //  ▓░░░░░░▓
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

    constexpr uint8_t squareLargeSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareLargeShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareXL[] PROGMEM {
        8, 8, //  8x8 px image
        0xFE, //  ░░░░░░░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareXLMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xC6, //  ░░▓▓▓░░▓
        0xC6, //  ░░▓▓▓░░▓
        0xC6, //  ░░▓▓▓░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareXLSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t squareXLShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0xAA, //  ░▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t rectangle[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x7C, //  ▓░░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t rectangleSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0x7C, //  ▓░░░░░▓▓
        0x7C, //  ▓░░░░░▓▓
        0x7C, //  ▓░░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t rectangleLarge[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0xFE, //  ░░░░░░░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t rectangleLargeMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xC6, //  ░░▓▓▓░░▓
        0xC6, //  ░░▓▓▓░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t rectangleLargeSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0xFE, //  ░░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billet[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x7E, //  ▓░░░░░░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x2A, //  ▓▓░▓░▓░▓
        0x54, //  ▓░▓░▓░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetVertical[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetVerticalSolid[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t billetVerticalShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
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
