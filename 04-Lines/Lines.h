// Lines - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM horizontalDenseLineDash[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: "UU\21\21"[i%4]
    // GAMBY: 0x5511

    constexpr uint8_t PROGMEM horizontalDenseLineDot[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x55,  // ▓░▓░▓░▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: i&1?85:17
    // GAMBY: 0x5151

    constexpr uint8_t PROGMEM horizontalDense[] {
        8, 8,  // 8x8 px image
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
        0x55,  // ▓░▓░▓░▓░
    };
    // Magic: 85
    // GAMBY: 0x5555

    constexpr uint8_t PROGMEM horizontal[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
    };
    // Magic: 68
    // GAMBY: 0x4444

    constexpr uint8_t PROGMEM horizontalMedium[] {
        8, 8,  // 8x8 px image
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
    };
    // Magic: 102
    // GAMBY: 0x6666

    constexpr uint8_t PROGMEM horizontalBold[] {
        8, 8,  // 8x8 px image
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
        0x77,  // ▓░░░▓░░░
    };
    // Magic: 119
    // GAMBY: 0x7777

    constexpr uint8_t PROGMEM horizontalSparse[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
    };
    // Magic: 32

    constexpr uint8_t PROGMEM horizontalSparseMedium[] {
        8, 8,  // 8x8 px image
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
    };
    // Magic: 48

    constexpr uint8_t PROGMEM horizontalSparseBold[] {
        8, 8,  // 8x8 px image
        0x70,  // ▓░░░▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
    };
    // Magic: 112

    constexpr uint8_t PROGMEM horizontalSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x78,  // ▓░░░░▓▓▓
    };
    // Magic: 120

    constexpr uint8_t PROGMEM horizontalSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
    };
    // Magic: 124

    constexpr uint8_t PROGMEM horizontalStripes[] {
        8, 8,  // 8x8 px image
        0x54,  // ▓░▓░▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x54,  // ▓░▓░▓░▓▓
    };
    // Magic: 84

    constexpr uint8_t PROGMEM horizontalPinstripe[] {
        8, 8,  // 8x8 px image
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
    };
    // Magic: 40

    constexpr uint8_t PROGMEM horizontalPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x68,  // ▓░░▓░▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x68,  // ▓░░▓░▓▓▓
        0x68,  // ▓░░▓░▓▓▓
    };
    // Magic: 104

    constexpr uint8_t PROGMEM verticalDenseLineDash[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x33,  // ▓▓░░▓▓░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\377\0003"[i%4]
    // GAMBY: 0xF030

    constexpr uint8_t PROGMEM verticalDenseLineDot[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x55,  // ▓░▓░▓░▓░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\377\0U"[i%4]
    // GAMBY: 0xF050

    constexpr uint8_t PROGMEM verticalDense[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: i&1?~0:0
    // GAMBY: 0xF0F0

    constexpr uint8_t PROGMEM vertical[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\377\0\0"[i%4]
    // GAMBY: 0xF000

    constexpr uint8_t PROGMEM verticalMedium[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\377\377\0"[i%4]
    // GAMBY: 0xFF00

    constexpr uint8_t PROGMEM verticalBold[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: ~"\0\0\0\377"[i%4]
    // GAMBY: 0xFFF0

    constexpr uint8_t PROGMEM verticalSparse[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\0\0\377\0\0"[i%8]

    constexpr uint8_t PROGMEM verticalSparseMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\0\377\377\0\0"[i%8]

    constexpr uint8_t PROGMEM verticalSparseBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\0\377\377\377\0"[i%8]

    constexpr uint8_t PROGMEM verticalSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\377\377\377\377\0"[i%8]

    constexpr uint8_t PROGMEM verticalSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: ~"\377\377\0\0\0\0\0\377"[i%8]

    constexpr uint8_t PROGMEM verticalStripes[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\377\0\377\0\377"[i%8]

    constexpr uint8_t PROGMEM verticalPinstripe[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\377\0\377\0\0"[i%8]

    constexpr uint8_t PROGMEM verticalPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\0\0\377\0\377\377\0"[i%8]

    constexpr uint8_t PROGMEM dexter[] {
        8, 8,  // 8x8 px image
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };
    // Magic: "\21\"D\210"[i%4]
    // GAMBY: 0x1248

    constexpr uint8_t PROGMEM dexterMedium[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
    };
    // Magic: "3f\314\231"[i%4]
    // GAMBY: 0x36C9

    constexpr uint8_t PROGMEM dexterBold[] {
        8, 8,  // 8x8 px image
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
    };
    // Magic: ~"D\210\21\""[i%4]
    // GAMBY: 0xB7ED

    constexpr uint8_t PROGMEM dexterSparse[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
    };
    // Magic: "\1\2\4\b\20 @\200"[i%8]

    constexpr uint8_t PROGMEM dexterSparseMedium[] {
        8, 8,  // 8x8 px image
        0x03,  // ▓▓▓▓▓▓░░
        0x06,  // ▓▓▓▓▓░░▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
    };
    // Magic: "\3\6\f\0300`\300\201"[i%8]

    constexpr uint8_t PROGMEM dexterSparseBold[] {
        8, 8,  // 8x8 px image
        0x83,  // ░▓▓▓▓▓░░
        0x07,  // ▓▓▓▓▓░░░
        0x0E,  // ▓▓▓▓░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0xE0,  // ░░░▓▓▓▓▓
        0xC1,  // ░░▓▓▓▓▓░
    };
    // Magic: "\203\a\16\348p\340\301"[i%8]

    constexpr uint8_t PROGMEM dexterSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0x87,  // ░▓▓▓▓░░░
        0x0F,  // ▓▓▓▓░░░░
        0x1E,  // ▓▓▓░░░░▓
        0x3C,  // ▓▓░░░░▓▓
        0x78,  // ▓░░░░▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xE1,  // ░░░▓▓▓▓░
        0xC3,  // ░░▓▓▓▓░░
    };
    // Magic: "\207\17\36<x\360\341\303"[i%8]

    constexpr uint8_t PROGMEM dexterSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0xC7,  // ░░▓▓▓░░░
        0x8F,  // ░▓▓▓░░░░
        0x1F,  // ▓▓▓░░░░░
        0x3E,  // ▓▓░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0xF8,  // ░░░░░▓▓▓
        0xF1,  // ░░░░▓▓▓░
        0xE3,  // ░░░▓▓▓░░
    };
    // Magic: ~"8p\340\301\203\a\16\34"[i%8]

    constexpr uint8_t PROGMEM dexterStripes[] {
        8, 8,  // 8x8 px image
        0x45,  // ▓░▓▓▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
        0x2A,  // ▓▓░▓░▓░▓
        0x54,  // ▓░▓░▓░▓▓
        0xA8,  // ░▓░▓░▓▓▓
        0x51,  // ▓░▓░▓▓▓░
        0xA2,  // ░▓░▓▓▓░▓
    };
    // Magic: "E\212\25*T\250Q\242"[i%8]

    constexpr uint8_t PROGMEM dexterPinstripe[] {
        8, 8,  // 8x8 px image
        0x09,  // ▓▓▓▓░▓▓░
        0x12,  // ▓▓▓░▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x90,  // ░▓▓░▓▓▓▓
        0x21,  // ▓▓░▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x84,  // ░▓▓▓▓░▓▓
    };
    // Magic: "\t\22$H\220!B\204"[i%8]

    constexpr uint8_t PROGMEM dexterPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x19,  // ▓▓▓░░▓▓░
        0x32,  // ▓▓░░▓▓░▓
        0x64,  // ▓░░▓▓░▓▓
        0xC8,  // ░░▓▓░▓▓▓
        0x91,  // ░▓▓░▓▓▓░
        0x23,  // ▓▓░▓▓▓░░
        0x46,  // ▓░▓▓▓░░▓
        0x8C,  // ░▓▓▓░░▓▓
    };
    // Magic: "\0312d\310\221#F\214"[i%8]

    constexpr uint8_t PROGMEM dexterSteep[] {
        8, 8,  // 8x8 px image
        0x03,  // ▓▓▓▓▓▓░░
        0x0C,  // ▓▓▓▓░░▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x03,  // ▓▓▓▓▓▓░░
        0x0C,  // ▓▓▓▓░░▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
    };
    // Magic: "\3\f0\300"[i%4]

    constexpr uint8_t PROGMEM dexterSteepMedium[] {
        8, 8,  // 8x8 px image
        0x0F,  // ▓▓▓▓░░░░
        0x3C,  // ▓▓░░░░▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xC3,  // ░░▓▓▓▓░░
        0x0F,  // ▓▓▓▓░░░░
        0x3C,  // ▓▓░░░░▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xC3,  // ░░▓▓▓▓░░
    };
    // Magic: "\17<\360\303"[i%4]

    constexpr uint8_t PROGMEM dexterShallow[] {
        8, 8,  // 8x8 px image
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };
    // Magic: "\21\21\"\"DD\210\210"[i%8]

    constexpr uint8_t PROGMEM dexterShallowMedium[] {
        8, 8,  // 8x8 px image
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
    };
    // Magic: "33ff\314\314\231\231"[i%8]

    constexpr uint8_t PROGMEM sinister[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: "\210D\"\21"[i%4]
    // GAMBY: 0x8421

    constexpr uint8_t PROGMEM sinisterMedium[] {
        8, 8,  // 8x8 px image
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
    };
    // Magic: "\231\314f3"[i%4]
    // GAMBY: 0x9C63

    constexpr uint8_t PROGMEM sinisterBold[] {
        8, 8,  // 8x8 px image
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
    };
    // Magic: ~"\"\21\210D"[i%4]
    // GAMBY: 0xDE7B

    constexpr uint8_t PROGMEM sinisterSparse[] {
        8, 8,  // 8x8 px image
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
    };
    // Magic: "\200@ \20\b\4\2\1"[i%8]

    constexpr uint8_t PROGMEM sinisterSparseMedium[] {
        8, 8,  // 8x8 px image
        0x81,  // ░▓▓▓▓▓▓░
        0xC0,  // ░░▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x03,  // ▓▓▓▓▓▓░░
    };
    // Magic: "\201\300`0\30\f\6\3"[i%8]

    constexpr uint8_t PROGMEM sinisterSparseBold[] {
        8, 8,  // 8x8 px image
        0xC1,  // ░░▓▓▓▓▓░
        0xE0,  // ░░░▓▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x0E,  // ▓▓▓▓░░░▓
        0x07,  // ▓▓▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
    };
    // Magic: "\301\340p8\34\16\a\203"[i%8]

    constexpr uint8_t PROGMEM sinisterSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0xE1,  // ░░░▓▓▓▓░
        0xF0,  // ░░░░▓▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x1E,  // ▓▓▓░░░░▓
        0x0F,  // ▓▓▓▓░░░░
        0x87,  // ░▓▓▓▓░░░
    };
    // Magic: "\303\341\360x<\36\17\207"[i%8]

    constexpr uint8_t PROGMEM sinisterSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0xE3,  // ░░░▓▓▓░░
        0xF1,  // ░░░░▓▓▓░
        0xF8,  // ░░░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x1F,  // ▓▓▓░░░░░
        0x8F,  // ░▓▓▓░░░░
        0xC7,  // ░░▓▓▓░░░
    };
    // Magic: ~"\34\16\a\203\301\340p8"[i%8]

    constexpr uint8_t PROGMEM sinisterStripes[] {
        8, 8,  // 8x8 px image
        0xA2,  // ░▓░▓▓▓░▓
        0x51,  // ▓░▓░▓▓▓░
        0xA8,  // ░▓░▓░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x2A,  // ▓▓░▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x45,  // ▓░▓▓▓░▓░
    };
    // Magic: "\242Q\250T*\25\212E"[i%8]

    constexpr uint8_t PROGMEM sinisterPinstripe[] {
        8, 8,  // 8x8 px image
        0x84,  // ░▓▓▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x21,  // ▓▓░▓▓▓▓░
        0x90,  // ░▓▓░▓▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x12,  // ▓▓▓░▓▓░▓
        0x09,  // ▓▓▓▓░▓▓░
    };
    // Magic: "\204B!\220H$\22\t"[i%8]

    constexpr uint8_t PROGMEM sinisterPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x8C,  // ░▓▓▓░░▓▓
        0x46,  // ▓░▓▓▓░░▓
        0x23,  // ▓▓░▓▓▓░░
        0x91,  // ░▓▓░▓▓▓░
        0xC8,  // ░░▓▓░▓▓▓
        0x64,  // ▓░░▓▓░▓▓
        0x32,  // ▓▓░░▓▓░▓
        0x19,  // ▓▓▓░░▓▓░
    };
    // Magic: "\214F#\221\310d2\31"[i%8]

    constexpr uint8_t PROGMEM sinisterSteep[] {
        8, 8,  // 8x8 px image
        0xC0,  // ░░▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x03,  // ▓▓▓▓▓▓░░
        0xC0,  // ░░▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x03,  // ▓▓▓▓▓▓░░
    };
    // Magic: "\3000\f\3"[i%4]

    constexpr uint8_t PROGMEM sinisterSteepMedium[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0xF0,  // ░░░░▓▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x0F,  // ▓▓▓▓░░░░
        0xC3,  // ░░▓▓▓▓░░
        0xF0,  // ░░░░▓▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x0F,  // ▓▓▓▓░░░░
    };
    // Magic: "\303\360<\17"[i%4]

    constexpr uint8_t PROGMEM sinisterShallow[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };
    // Magic: "\210\210DD\"\"\21\21"[i%8]

    constexpr uint8_t PROGMEM sinisterShallowMedium[] {
        8, 8,  // 8x8 px image
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
    };
    // Magic: "\231\231\314\314ff33"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM horizontalDenseLineDash[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalDenseLineDot[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalDense[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontal[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalBold[] {
        8, 8,  // 8x8 px image
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalSparse[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalSparseMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalSparseBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalStripes[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalPinstripe[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM horizontalPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM verticalDenseLineDash[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM verticalDenseLineDot[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM verticalDense[] {
        8, 8,  // 8x8 px image
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
        0xAA,  // ░▓░▓░▓░▓
    };

    constexpr uint8_t PROGMEM vertical[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM verticalMedium[] {
        8, 8,  // 8x8 px image
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
    };

    constexpr uint8_t PROGMEM verticalBold[] {
        8, 8,  // 8x8 px image
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
        0xEE,  // ░░░▓░░░▓
    };

    constexpr uint8_t PROGMEM verticalSparse[] {
        8, 8,  // 8x8 px image
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM verticalSparseMedium[] {
        8, 8,  // 8x8 px image
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
    };

    constexpr uint8_t PROGMEM verticalSparseBold[] {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x1C,  // ▓▓▓░░░▓▓
    };

    constexpr uint8_t PROGMEM verticalSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t PROGMEM verticalSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
    };

    constexpr uint8_t PROGMEM verticalStripes[] {
        8, 8,  // 8x8 px image
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
        0x2A,  // ▓▓░▓░▓░▓
    };

    constexpr uint8_t PROGMEM verticalPinstripe[] {
        8, 8,  // 8x8 px image
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
    };

    constexpr uint8_t PROGMEM verticalPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x2C,  // ▓▓░▓░░▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x2C,  // ▓▓░▓░░▓▓
    };

    constexpr uint8_t PROGMEM dexter[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
    };

    constexpr uint8_t PROGMEM dexterMedium[] {
        8, 8,  // 8x8 px image
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t PROGMEM dexterBold[] {
        8, 8,  // 8x8 px image
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
        0xDD,  // ░░▓░░░▓░
        0xEE,  // ░░░▓░░░▓
        0x77,  // ▓░░░▓░░░
        0xBB,  // ░▓░░░▓░░
    };

    constexpr uint8_t PROGMEM dexterSparse[] {
        8, 8,  // 8x8 px image
        0x80,  // ░▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x01,  // ▓▓▓▓▓▓▓░
    };

    constexpr uint8_t PROGMEM dexterSparseMedium[] {
        8, 8,  // 8x8 px image
        0x81,  // ░▓▓▓▓▓▓░
        0xC0,  // ░░▓▓▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x06,  // ▓▓▓▓▓░░▓
        0x03,  // ▓▓▓▓▓▓░░
    };

    constexpr uint8_t PROGMEM dexterSparseBold[] {
        8, 8,  // 8x8 px image
        0xC1,  // ░░▓▓▓▓▓░
        0xE0,  // ░░░▓▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x0E,  // ▓▓▓▓░░░▓
        0x07,  // ▓▓▓▓▓░░░
        0x83,  // ░▓▓▓▓▓░░
    };

    constexpr uint8_t PROGMEM dexterSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0xE1,  // ░░░▓▓▓▓░
        0xF0,  // ░░░░▓▓▓▓
        0x78,  // ▓░░░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x1E,  // ▓▓▓░░░░▓
        0x0F,  // ▓▓▓▓░░░░
        0x87,  // ░▓▓▓▓░░░
    };

    constexpr uint8_t PROGMEM dexterSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0xE3,  // ░░░▓▓▓░░
        0xF1,  // ░░░░▓▓▓░
        0xF8,  // ░░░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x1F,  // ▓▓▓░░░░░
        0x8F,  // ░▓▓▓░░░░
        0xC7,  // ░░▓▓▓░░░
    };

    constexpr uint8_t PROGMEM dexterStripes[] {
        8, 8,  // 8x8 px image
        0xA2,  // ░▓░▓▓▓░▓
        0x51,  // ▓░▓░▓▓▓░
        0xA8,  // ░▓░▓░▓▓▓
        0x54,  // ▓░▓░▓░▓▓
        0x2A,  // ▓▓░▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x45,  // ▓░▓▓▓░▓░
    };

    constexpr uint8_t PROGMEM dexterPinstripe[] {
        8, 8,  // 8x8 px image
        0x84,  // ░▓▓▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x21,  // ▓▓░▓▓▓▓░
        0x90,  // ░▓▓░▓▓▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x12,  // ▓▓▓░▓▓░▓
        0x09,  // ▓▓▓▓░▓▓░
    };

    constexpr uint8_t PROGMEM dexterPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x8C,  // ░▓▓▓░░▓▓
        0x46,  // ▓░▓▓▓░░▓
        0x23,  // ▓▓░▓▓▓░░
        0x91,  // ░▓▓░▓▓▓░
        0xC8,  // ░░▓▓░▓▓▓
        0x64,  // ▓░░▓▓░▓▓
        0x32,  // ▓▓░░▓▓░▓
        0x19,  // ▓▓▓░░▓▓░
    };

    constexpr uint8_t PROGMEM dexterSteep[] {
        8, 8,  // 8x8 px image
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
    };

    constexpr uint8_t PROGMEM dexterSteepMedium[] {
        8, 8,  // 8x8 px image
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
    };

    constexpr uint8_t PROGMEM dexterShallow[] {
        8, 8,  // 8x8 px image
        0xC0,  // ░░▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x03,  // ▓▓▓▓▓▓░░
        0xC0,  // ░░▓▓▓▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x03,  // ▓▓▓▓▓▓░░
    };

    constexpr uint8_t PROGMEM dexterShallowMedium[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0xF0,  // ░░░░▓▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x0F,  // ▓▓▓▓░░░░
        0xC3,  // ░░▓▓▓▓░░
        0xF0,  // ░░░░▓▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x0F,  // ▓▓▓▓░░░░
    };

    constexpr uint8_t PROGMEM sinister[] {
        8, 8,  // 8x8 px image
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterMedium[] {
        8, 8,  // 8x8 px image
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
    };

    constexpr uint8_t PROGMEM sinisterBold[] {
        8, 8,  // 8x8 px image
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
        0xBB,  // ░▓░░░▓░░
        0x77,  // ▓░░░▓░░░
        0xEE,  // ░░░▓░░░▓
        0xDD,  // ░░▓░░░▓░
    };

    constexpr uint8_t PROGMEM sinisterSparse[] {
        8, 8,  // 8x8 px image
        0x01,  // ▓▓▓▓▓▓▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x80,  // ░▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterSparseMedium[] {
        8, 8,  // 8x8 px image
        0x81,  // ░▓▓▓▓▓▓░
        0x03,  // ▓▓▓▓▓▓░░
        0x06,  // ▓▓▓▓▓░░▓
        0x0C,  // ▓▓▓▓░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0x60,  // ▓░░▓▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterSparseBold[] {
        8, 8,  // 8x8 px image
        0x83,  // ░▓▓▓▓▓░░
        0x07,  // ▓▓▓▓▓░░░
        0x0E,  // ▓▓▓▓░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0xE0,  // ░░░▓▓▓▓▓
        0xC1,  // ░░▓▓▓▓▓░
    };

    constexpr uint8_t PROGMEM sinisterSparseExtraBold[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0x87,  // ░▓▓▓▓░░░
        0x0F,  // ▓▓▓▓░░░░
        0x1E,  // ▓▓▓░░░░▓
        0x3C,  // ▓▓░░░░▓▓
        0x78,  // ▓░░░░▓▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xE1,  // ░░░▓▓▓▓░
    };

    constexpr uint8_t PROGMEM sinisterSparseUltraBold[] {
        8, 8,  // 8x8 px image
        0xC7,  // ░░▓▓▓░░░
        0x8F,  // ░▓▓▓░░░░
        0x1F,  // ▓▓▓░░░░░
        0x3E,  // ▓▓░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0xF8,  // ░░░░░▓▓▓
        0xF1,  // ░░░░▓▓▓░
        0xE3,  // ░░░▓▓▓░░
    };

    constexpr uint8_t PROGMEM sinisterStripes[] {
        8, 8,  // 8x8 px image
        0x45,  // ▓░▓▓▓░▓░
        0x8A,  // ░▓▓▓░▓░▓
        0x15,  // ▓▓▓░▓░▓░
        0x2A,  // ▓▓░▓░▓░▓
        0x54,  // ▓░▓░▓░▓▓
        0xA8,  // ░▓░▓░▓▓▓
        0x51,  // ▓░▓░▓▓▓░
        0xA2,  // ░▓░▓▓▓░▓
    };

    constexpr uint8_t PROGMEM sinisterPinstripe[] {
        8, 8,  // 8x8 px image
        0x21,  // ▓▓░▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x84,  // ░▓▓▓▓░▓▓
        0x09,  // ▓▓▓▓░▓▓░
        0x12,  // ▓▓▓░▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
        0x48,  // ▓░▓▓░▓▓▓
        0x90,  // ░▓▓░▓▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterPinstripeMedium[] {
        8, 8,  // 8x8 px image
        0x31,  // ▓▓░░▓▓▓░
        0x62,  // ▓░░▓▓▓░▓
        0xC4,  // ░░▓▓▓░▓▓
        0x89,  // ░▓▓▓░▓▓░
        0x13,  // ▓▓▓░▓▓░░
        0x26,  // ▓▓░▓▓░░▓
        0x4C,  // ▓░▓▓░░▓▓
        0x98,  // ░▓▓░░▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterSteep[] {
        8, 8,  // 8x8 px image
        0x11,  // ▓▓▓░▓▓▓░
        0x11,  // ▓▓▓░▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x88,  // ░▓▓▓░▓▓▓
        0x88,  // ░▓▓▓░▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterSteepMedium[] {
        8, 8,  // 8x8 px image
        0x99,  // ░▓▓░░▓▓░
        0x99,  // ░▓▓░░▓▓░
        0x33,  // ▓▓░░▓▓░░
        0x33,  // ▓▓░░▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0x66,  // ▓░░▓▓░░▓
        0xCC,  // ░░▓▓░░▓▓
        0xCC,  // ░░▓▓░░▓▓
    };

    constexpr uint8_t PROGMEM sinisterShallow[] {
        8, 8,  // 8x8 px image
        0x03,  // ▓▓▓▓▓▓░░
        0x0C,  // ▓▓▓▓░░▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
        0x03,  // ▓▓▓▓▓▓░░
        0x0C,  // ▓▓▓▓░░▓▓
        0x30,  // ▓▓░░▓▓▓▓
        0xC0,  // ░░▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM sinisterShallowMedium[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0x0F,  // ▓▓▓▓░░░░
        0x3C,  // ▓▓░░░░▓▓
        0xF0,  // ░░░░▓▓▓▓
        0xC3,  // ░░▓▓▓▓░░
        0x0F,  // ▓▓▓▓░░░░
        0x3C,  // ▓▓░░░░▓▓
        0xF0,  // ░░░░▓▓▓▓
    };

}
#endif