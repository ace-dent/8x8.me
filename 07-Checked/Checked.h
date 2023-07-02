// Checked - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM checkMicro[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
    };
    // Magic: i&1?85:170
    // GAMBY: 0x5A5A

    constexpr uint8_t PROGMEM checkMini[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
    };
    // Magic: "33\314\314"[i%4]
    // GAMBY: 0x33CC

    constexpr uint8_t PROGMEM check[] {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
    };
    // Magic: 64^"OOOO\260\260\260\260"[i%8]

    constexpr uint8_t PROGMEM checkShaded[] {
        8, 8,  // 8x8 px image
        0x05,  // ▓▓▓▓▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
        0x05,  // ▓▓▓▓▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
    };
    // Magic: 99^"fifi\3033\3033"[i%8]

    constexpr uint8_t PROGMEM checkBox[] {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0xF0,  // ░░░░▓▓▓▓
        0x90,  // ░▓▓░▓▓▓▓
        0x90,  // ░▓▓░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
    };
    // Magic: 64^"OOOO\260\320\320\260"[i%8]

    constexpr uint8_t PROGMEM checkSquare[] {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0x6F,  // ▓░░▓░░░░
        0x6F,  // ▓░░▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0xF0,  // ░░░░▓▓▓▓
        0xF6,  // ░░░░▓░░▓
        0xF6,  // ░░░░▓░░▓
        0xF0,  // ░░░░▓▓▓▓
    };
    // Magic: 68^"K++K\264\262\262\264"[i%8]

    constexpr uint8_t PROGMEM checkHorizontalMini[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
    };
    // Magic: "UU\252\252"[i%4]
    // GAMBY: 0x55AA

    constexpr uint8_t PROGMEM checkHorizontal[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
    };
    // Magic: "3333\314\314\314\314"[i%8]

    constexpr uint8_t PROGMEM checkVerticalMini[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
    };
    // Magic: i&1?51:204
    // GAMBY: 0x3C3C

    constexpr uint8_t PROGMEM checkVertical[] {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
    };
    // Magic: 64^"OO\260\260"[i%4]

    constexpr uint8_t PROGMEM diamond[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x7F,  // ▓░░░░░░░
        0x3E,  // ▓▓░░░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 76^"DPr3rPDL"[i%8]

    constexpr uint8_t PROGMEM diamondShaded[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x2A,  // ▓▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x2A,  // ▓▓░▓░▓░▓
        0x14,  // ▓▓▓░▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 96^"htJ5Jth`"[i%8]

    constexpr uint8_t PROGMEM diamondLined[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x7F,  // ▓░░░░░░░
        0xBE,  // ░▓░░░░░▓
        0x5C,  // ▓░▓░░░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
    };
    // Magic: 91^"SGe$\345\asK"[i%8]

    constexpr uint8_t PROGMEM diamondBold[] {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0xFE,  // ░░░░░░░▓
        0xFF,  // ░░░░░░░░
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
    };
    // Magic: "\208|\376\377\376|8"[i%8]

    constexpr uint8_t PROGMEM checkDiagonalMini[] {
        8, 8,  // 8x8 px image
        0xBB,  // ░▓░░░▓░░
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0xDD,  // ░░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0xDD,  // ░░▓░░░▓░
    };
    // Magic: ~"D\356w\""[i%4]
    // GAMBY: 0xB18D

    constexpr uint8_t PROGMEM checkDiagonal[] {
        8, 8,  // 8x8 px image
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x7F,  // ▓░░░░░░░
    };
    // Magic: 81^"\257-iAYMo."[i%8]

    constexpr uint8_t PROGMEM checkDiagonalShaded[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x54,  // ▓░▓░▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x2A,  // ▓▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
    };
    // Magic: 96^"\3124HphtJ5"[i%8]

    constexpr uint8_t PROGMEM ternaryMini[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x33,  // ▓▓░░▓▓░░
        0x55,  // ▓░▓░▓░▓░
        0xCC,  // ░░▓▓░░▓▓
        0x55,  // ▓░▓░▓░▓░
        0x33,  // ▓▓░░▓▓░░
        0x55,  // ▓░▓░▓░▓░
        0xCC,  // ░░▓▓░░▓▓
    };
    // Magic: "U3U\314"[i%4]
    // GAMBY: 0x535C

    constexpr uint8_t PROGMEM ternary[] {
        8, 8,  // 8x8 px image
        0x71,  // ▓░░░▓▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x17,  // ▓▓▓░▓░░░
        0x0F,  // ▓▓▓▓░░░░
        0x17,  // ▓▓▓░▓░░░
        0x33,  // ▓▓░░▓▓░░
        0x71,  // ▓░░░▓▓▓░
        0xF0,  // ░░░░▓▓▓▓
    };
    // Magic: 64^"1sWOWs1\260"[i%8]

    constexpr uint8_t PROGMEM ternaryVerticalMini[] {
        8, 8,  // 8x8 px image
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0xBB,  // ░▓░░░▓░░
        0x11,  // ▓▓▓░▓▓▓░
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0xBB,  // ░▓░░░▓░░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: "\356D\273\21"[i%4]
    // GAMBY: 0xE4B1

    constexpr uint8_t PROGMEM ternaryVertical[] {
        8, 8,  // 8x8 px image
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0xEF,  // ░░░▓░░░░
        0xC7,  // ░░▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
        0x01,  // ▓▓▓▓▓▓▓░
    };
    // Magic: "\376|8\20\357\307\203\1"[i%8]

    constexpr uint8_t PROGMEM gyron[] {
        8, 8,  // 8x8 px image
        0xF1,  // ░░░░▓▓▓░
        0x73,  // ▓░░░▓▓░░
        0x37,  // ▓▓░░▓░░░
        0x1F,  // ▓▓▓░░░░░
        0xF8,  // ░░░░░▓▓▓
        0xEC,  // ░░░▓░░▓▓
        0xCE,  // ░░▓▓░░░▓
        0x8F,  // ░▓▓▓░░░░
    };
    // Magic: 161^"P\322\226\276YMo."[i%8]

    constexpr uint8_t PROGMEM triangleMini[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x77,  // ▓░░░▓░░░
        0x33,  // ▓▓░░▓▓░░
        0x11,  // ▓▓▓░▓▓▓░
        0xFF,  // ░░░░░░░░
        0x77,  // ▓░░░▓░░░
        0x33,  // ▓▓░░▓▓░░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: "\377w3\21"[i%4]
    // GAMBY: 0xF731

    constexpr uint8_t PROGMEM triangle[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x3F,  // ▓▓░░░░░░
        0x1F,  // ▓▓▓░░░░░
        0x0F,  // ▓▓▓▓░░░░
        0x07,  // ▓▓▓▓▓░░░
        0x03,  // ▓▓▓▓▓▓░░
        0x01,  // ▓▓▓▓▓▓▓░
    };
    // Magic: 69^"\272:zZJBFD"[i%8]

    constexpr uint8_t PROGMEM triangleShaded[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x2A,  // ▓▓░▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
        0x05,  // ▓▓▓▓▓░▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
    };
    // Magic: 96^"\3125Jujeba"[i%8]

    constexpr uint8_t PROGMEM chevronCheckMini[] {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
    };
    // Magic: "f3\314\231"[i%4]
    // GAMBY: 0x63C9

    constexpr uint8_t PROGMEM chevronCheckDense[] {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
    };
    // Magic: 42+"<\to\242\t<\242o"[i%8]

    constexpr uint8_t PROGMEM chevronCheck[] {
        8, 8,  // 8x8 px image
        0x87,  // ░▓▓▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0xE1,  // ░░░▓▓▓▓░
        0xF0,  // ░░░░▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x1E,  // ▓▓▓░░░░▓
        0x3C,  // ▓▓░░░░▓▓
        0x78,  // ▓░░░░▓▓▓
    };
    // Magic: 72^"\317\213\251\270GVt0"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM checkMicro[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
    };

    constexpr uint8_t PROGMEM checkMini[] {
        8, 8,  // 8x8 px image
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t PROGMEM check[] {
        8, 8,  // 8x8 px image
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
    };

    constexpr uint8_t PROGMEM checkShaded[] {
        8, 8,  // 8x8 px image
        0xA0,  // ░▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x05,  // ▓▓▓▓▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
        0x05,  // ▓▓▓▓▓░▓░
        0x0A,  // ▓▓▓▓░▓░▓
    };

    constexpr uint8_t PROGMEM checkBox[] {
        8, 8,  // 8x8 px image
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x09,  // ▓▓▓▓░▓▓░
        0x09,  // ▓▓▓▓░▓▓░
        0x0F,  // ▓▓▓▓░░░░
    };

    constexpr uint8_t PROGMEM checkSquare[] {
        8, 8,  // 8x8 px image
        0xF0,  // ░░░░▓▓▓▓
        0xF6,  // ░░░░▓░░▓
        0xF6,  // ░░░░▓░░▓
        0xF0,  // ░░░░▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x6F,  // ▓░░▓░░░░
        0x6F,  // ▓░░▓░░░░
        0x0F,  // ▓▓▓▓░░░░
    };

    constexpr uint8_t PROGMEM checkHorizontalMini[] {
        8, 8,  // 8x8 px image
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t PROGMEM checkHorizontal[] {
        8, 8,  // 8x8 px image
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
        0xF0,  // ░░░░▓▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0x0F,  // ▓▓▓▓░░░░
        0x0F,  // ▓▓▓▓░░░░
    };

    constexpr uint8_t PROGMEM checkVerticalMini[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
    };

    constexpr uint8_t PROGMEM checkVertical[] {
        8, 8,  // 8x8 px image
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t PROGMEM diamond[] {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM diamondShaded[] {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x54,  // ▓░▓░▓░▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM diamondLined[] {
        8, 8,  // 8x8 px image
        0x10,  // ▓▓▓░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0xFE,  // ░░░░░░░▓
        0x7D,  // ▓░░░░░▓░
        0x3A,  // ▓▓░░░▓░▓
        0x14,  // ▓▓▓░▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM diamondBold[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x7F,  // ▓░░░░░░░
        0xFF,  // ░░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x3E,  // ▓▓░░░░░▓
        0x1C,  // ▓▓▓░░░▓▓
    };

    constexpr uint8_t PROGMEM checkDiagonalMini[] {
        8, 8,  // 8x8 px image
        0xDD,  // ░░▓░░░▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0xBB,  // ░▓░░░▓░░
    };

    constexpr uint8_t PROGMEM checkDiagonal[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x83,  // ░▓▓▓▓▓░░
        0xC7,  // ░░▓▓▓░░░
        0xEF,  // ░░░▓░░░░
        0xF7,  // ░░░░▓░░░
        0xE3,  // ░░░▓▓▓░░
        0xC1,  // ░░▓▓▓▓▓░
        0x80,  // ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM checkDiagonalShaded[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x82,  // ░▓▓▓▓▓░▓
        0x45,  // ▓░▓▓▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x55,  // ▓░▓░▓░▓░
        0xA2,  // ░▓░▓▓▓░▓
        0x41,  // ▓░▓▓▓▓▓░
        0x80,  // ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM ternaryMini[] {
        8, 8,  // 8x8 px image
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0xBB,  // ░▓░░░▓░░
        0x11,  // ▓▓▓░▓▓▓░
        0xEE,  // ░░░▓░░░▓
        0x44,  // ▓░▓▓▓░▓▓
        0xBB,  // ░▓░░░▓░░
        0x11,  // ▓▓▓░▓▓▓░
    };

    constexpr uint8_t PROGMEM ternary[] {
        8, 8,  // 8x8 px image
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0xEF,  // ░░░▓░░░░
        0xC7,  // ░░▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
        0x01,  // ▓▓▓▓▓▓▓░
    };

    constexpr uint8_t PROGMEM ternaryVerticalMini[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0xAA,  // ░▓░▓░▓░▓
        0xCC,  // ░░▓▓░░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x33,  // ▓▓░░▓▓░░
        0xAA,  // ░▓░▓░▓░▓
        0xCC,  // ░░▓▓░░▓▓
        0xAA,  // ░▓░▓░▓░▓
    };

    constexpr uint8_t PROGMEM ternaryVertical[] {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0x8E,  // ░▓▓▓░░░▓
        0xCC,  // ░░▓▓░░▓▓
        0xE8,  // ░░░▓░▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xE8,  // ░░░▓░▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x8E,  // ░▓▓▓░░░▓
    };

    constexpr uint8_t PROGMEM gyron[] {
        8, 8,  // 8x8 px image
        0xF1,  // ░░░░▓▓▓░
        0x73,  // ▓░░░▓▓░░
        0x37,  // ▓▓░░▓░░░
        0x1F,  // ▓▓▓░░░░░
        0xF8,  // ░░░░░▓▓▓
        0xEC,  // ░░░▓░░▓▓
        0xCE,  // ░░▓▓░░░▓
        0x8F,  // ░▓▓▓░░░░
    };

    constexpr uint8_t PROGMEM triangleMini[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xEE,  // ░░░▓░░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0xFF,  // ░░░░░░░░
        0xEE,  // ░░░▓░░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM triangle[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFE,  // ░░░░░░░▓
        0xFC,  // ░░░░░░▓▓
        0xF8,  // ░░░░░▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xE0,  // ░░░▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM triangleShaded[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0xAA,  // ░▓░▓░▓░▓
        0x54,  // ▓░▓░▓░▓▓
        0xA8,  // ░▓░▓░▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM chevronCheckMini[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0xCC,  // ░░▓▓░░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x33,  // ▓▓░░▓▓░░
        0x55,  // ▓░▓░▓░▓░
        0xCC,  // ░░▓▓░░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t PROGMEM chevronCheckDense[] {
        8, 8,  // 8x8 px image
        0x69,  // ▓░░▓░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x96,  // ░▓▓░▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x69,  // ▓░░▓░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x96,  // ░▓▓░▓░░▓
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t PROGMEM chevronCheck[] {
        8, 8,  // 8x8 px image
        0xE8,  // ░░░▓░▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x8E,  // ░▓▓▓░░░▓
        0x0F,  // ▓▓▓▓░░░░
        0x17,  // ▓▓▓░▓░░░
        0x33,  // ▓▓░░▓▓░░
        0x71,  // ▓░░░▓▓▓░
        0xF0,  // ░░░░▓▓▓▓
    };

}
#endif