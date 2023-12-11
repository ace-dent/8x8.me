// Waves - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t rippleLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
    };
    // Magic: 97^"!cAcAe!e"[i%8]

    constexpr uint8_t ripple[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x42, //  ▓░▓▓▓▓░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x24, //  ▓▓░▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: 1^"EC###%EE"[i%8]

    constexpr uint8_t wave[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: 99^"'ArrAcA'"[i%8]

    constexpr uint8_t tidalLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "@H@D@H@P"[i%8]*4

    constexpr uint8_t tidalSemiLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "PHDD@H@P"[i%8]*4

    constexpr uint8_t tidal[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "PHDDDHPP"[i%8]*4

    constexpr uint8_t tidalMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x60, //  ▓░░▓▓▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x60, //  ▓░░▓▓▓▓▓
        0x60, //  ▓░░▓▓▓▓▓
    };
    // Magic: "XLFFFLXX"[i%8]*4

    constexpr uint8_t oceanicLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "@PJD@H@P"[i%8]*4

    constexpr uint8_t oceanic[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x68, //  ▓░░▓░▓▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "@h8\20  @@"[i%8]

    constexpr uint8_t zigzagMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
    };
    // Magic: 99^"'ArA"[i%4]
    // GAMBY: 0x4212

    constexpr uint8_t zigzagMiniMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0xCC, //  ░░▓▓░░▓▓
        0x66, //  ▓░░▓▓░░▓
        0x33, //  ▓▓░░▓▓░░
        0x66, //  ▓░░▓▓░░▓
        0xCC, //  ░░▓▓░░▓▓
        0x66, //  ▓░░▓▓░░▓
        0x33, //  ▓▓░░▓▓░░
        0x66, //  ▓░░▓▓░░▓
    };
    // Magic: "\314f3f"[i%4]
    // GAMBY: 0xC636

    constexpr uint8_t zigzag[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
    };
    // Magic: "DBABDHPH"[i%8]*4

    constexpr uint8_t zigzagMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x30, //  ▓▓░░▓▓▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x18, //  ▓▓▓░░▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x60, //  ▓░░▓▓▓▓▓
        0xC0, //  ░░▓▓▓▓▓▓
        0x60, //  ▓░░▓▓▓▓▓
    };
    // Magic: "LFCFLXpX"[i%8]*4

    constexpr uint8_t zigzagBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x38, //  ▓▓░░░▓▓▓
        0x1C, //  ▓▓▓░░░▓▓
        0x0E, //  ▓▓▓▓░░░▓
        0x1C, //  ▓▓▓░░░▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x70, //  ▓░░░▓▓▓▓
        0xE0, //  ░░░▓▓▓▓▓
        0x70, //  ▓░░░▓▓▓▓
    };
    // Magic: 81^"iM_Mi!\261!"[i%8]

    constexpr uint8_t zigzagBoldShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x28, //  ▓▓░▓░▓▓▓
        0x14, //  ▓▓▓░▓░▓▓
        0x0A, //  ▓▓▓▓░▓░▓
        0x14, //  ▓▓▓░▓░▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0xA0, //  ░▓░▓▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
    };
    // Magic: 99^"KwiwK3\3033"[i%8]

    constexpr uint8_t zigzagExtraBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x3C, //  ▓▓░░░░▓▓
        0x1E, //  ▓▓▓░░░░▓
        0x0F, //  ▓▓▓▓░░░░
        0x1E, //  ▓▓▓░░░░▓
        0x3C, //  ▓▓░░░░▓▓
        0x78, //  ▓░░░░▓▓▓
        0xF0, //  ░░░░▓▓▓▓
        0x78, //  ▓░░░░▓▓▓
    };
    // Magic: 81^"mO^Om)\241)"[i%8]

    constexpr uint8_t zigzagPinstripe[] PROGMEM {
        8, 8, //  8x8 px image
        0x24, //  ▓▓░▓▓░▓▓
        0x12, //  ▓▓▓░▓▓░▓
        0x09, //  ▓▓▓▓░▓▓░
        0x12, //  ▓▓▓░▓▓░▓
        0x24, //  ▓▓░▓▓░▓▓
        0x48, //  ▓░▓▓░▓▓▓
        0x90, //  ░▓▓░▓▓▓▓
        0x48, //  ▓░▓▓░▓▓▓
    };
    // Magic: 96^"DrirD(\360("[i%8]

    constexpr uint8_t zigzagSteep[] PROGMEM {
        8, 8, //  8x8 px image
        0x30, //  ▓▓░░▓▓▓▓
        0x0C, //  ▓▓▓▓░░▓▓
        0x03, //  ▓▓▓▓▓▓░░
        0x0C, //  ▓▓▓▓░░▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0xC0, //  ░░▓▓▓▓▓▓
        0x03, //  ▓▓▓▓▓▓░░
        0xC0, //  ░░▓▓▓▓▓▓
    };
    // Magic: 98^"RnanR\242a\242"[i%8]

    constexpr uint8_t dentilly[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "PP_BDHPP"[i%8]*4

    constexpr uint8_t dentillyMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x77, //  ▓░░░▓░░░
        0x22, //  ▓▓░▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x77, //  ▓░░░▓░░░
        0x22, //  ▓▓░▓▓▓░▓
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: "Dw\"D"[i%4]
    // GAMBY: 0x4724

    constexpr uint8_t urdy[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0x02, //  ▓▓▓▓▓▓░▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x02, //  ▓▓▓▓▓▓░▓
        0x3C, //  ▓▓░░░░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x80, //  ░▓▓▓▓▓▓▓
    };
    // Magic: "@<\2\1\2<@\200"[i%8]

    constexpr uint8_t urdyMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x66, //  ▓░░▓▓░░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x66, //  ▓░░▓▓░░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x66, //  ▓░░▓▓░░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x66, //  ▓░░▓▓░░▓
        0x88, //  ░▓▓▓░▓▓▓
    };
    // Magic: 17+"U\0Uw"[i%4]
    // GAMBY: 0x6168

    constexpr uint8_t embattledGrady[] PROGMEM {
        8, 8, //  8x8 px image
        0x70, //  ▓░░░▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x1C, //  ▓▓▓░░░▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x1C, //  ▓▓▓░░░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x70, //  ▓░░░▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: 41^"Y95-59Yi"[i%8]

    constexpr uint8_t embattled[] PROGMEM {
        8, 8, //  8x8 px image
        0x40, //  ▓░▓▓▓▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x7C, //  ▓░░░░░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "@|\4\4\4|@@"[i%8]

    constexpr uint8_t embattledMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x77, //  ▓░░░▓░░░
        0x11, //  ▓▓▓░▓▓▓░
        0x77, //  ▓░░░▓░░░
        0x44, //  ▓░▓▓▓░▓▓
        0x77, //  ▓░░░▓░░░
        0x11, //  ▓▓▓░▓▓▓░
        0x77, //  ▓░░░▓░░░
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: "w\21wD"[i%4]
    // GAMBY: 0x7174

    constexpr uint8_t potenty[] PROGMEM {
        8, 8, //  8x8 px image
        0x4F, //  ▓░▓▓░░░░
        0x49, //  ▓░▓▓░▓▓░
        0x79, //  ▓░░░░▓▓░
        0x01, //  ▓▓▓▓▓▓▓░
        0x79, //  ▓░░░░▓▓░
        0x49, //  ▓░▓▓░▓▓░
        0x4F, //  ▓░▓▓░░░░
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: "OIy\1yIO@"[i%8]

    constexpr uint8_t potentyMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x55, //  ▓░▓░▓░▓░
        0x77, //  ▓░░░▓░░░
        0x55, //  ▓░▓░▓░▓░
        0x44, //  ▓░▓▓▓░▓▓
        0x55, //  ▓░▓░▓░▓░
        0x77, //  ▓░░░▓░░░
        0x55, //  ▓░▓░▓░▓░
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: "UwUD"[i%4]
    // GAMBY: 0x5754

    constexpr uint8_t serpentine[] PROGMEM {
        8, 8, //  8x8 px image
        0x7E, //  ▓░░░░░░▓
        0x03, //  ▓▓▓▓▓▓░░
        0x7E, //  ▓░░░░░░▓
        0xC0, //  ░░▓▓▓▓▓▓
        0x7E, //  ▓░░░░░░▓
        0x03, //  ▓▓▓▓▓▓░░
        0x7E, //  ▓░░░░░░▓
        0xC0, //  ░░▓▓▓▓▓▓
    };
    // Magic: "~\3~\300"[i%4]

    constexpr uint8_t rising[] PROGMEM {
        8, 8, //  8x8 px image
        0x22, //  ▓▓░▓▓▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x22, //  ▓▓░▓▓▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
    };
    // Magic: 99^"ArAr\353'\353'"[i%8]

    constexpr uint8_t riseAndFall[] PROGMEM {
        8, 8, //  8x8 px image
        0x20, //  ▓▓░▓▓▓▓▓
        0x12, //  ▓▓▓░▓▓░▓
        0x21, //  ▓▓░▓▓▓▓░
        0x02, //  ▓▓▓▓▓▓░▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x48, //  ▓░▓▓░▓▓▓
        0x84, //  ░▓▓▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
    };
    // Magic: 96^"@rAbd(\344 "[i%8]

    constexpr uint8_t doubleHelix[] PROGMEM {
        8, 8, //  8x8 px image
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
        0x24, //  ▓▓░▓▓░▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x42, //  ▓░▓▓▓▓░▓
        0x42, //  ▓░▓▓▓▓░▓
    };
    // Magic: "BB$\b\20$BB"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t rippleLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x82, //  ░▓▓▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t ripple[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x78, //  ▓░░░░▓▓▓
        0x87, //  ░▓▓▓▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x3C, //  ▓▓░░░░▓▓
        0xC3, //  ░░▓▓▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t wave[] PROGMEM {
        8, 8, //  8x8 px image
        0x30, //  ▓▓░░▓▓▓▓
        0x4A, //  ▓░▓▓░▓░▓
        0x81, //  ░▓▓▓▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x4A, //  ▓░▓▓░▓░▓
        0x81, //  ░▓▓▓▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t tidalLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x01, //  ▓▓▓▓▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t tidalSemiLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x81, //  ░▓▓▓▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t tidal[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x83, //  ░▓▓▓▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t tidalMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0xC7, //  ░░▓▓▓░░░
        0x83, //  ░▓▓▓▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t oceanicLight[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0x41, //  ▓░▓▓▓▓▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t oceanic[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x60, //  ▓░░▓▓▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x6C, //  ▓░░▓░░▓▓
        0xC3, //  ░░▓▓▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t zigzagMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x55, //  ▓░▓░▓░▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t zigzagMiniMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x22, //  ▓▓░▓▓▓░▓
        0x77, //  ▓░░░▓░░░
        0xDD, //  ░░▓░░░▓░
        0x88, //  ░▓▓▓░▓▓▓
        0x22, //  ▓▓░▓▓▓░▓
        0x77, //  ▓░░░▓░░░
        0xDD, //  ░░▓░░░▓░
        0x88, //  ░▓▓▓░▓▓▓
    };

    constexpr uint8_t zigzag[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x02, //  ▓▓▓▓▓▓░▓
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t zigzagMedium[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x70, //  ▓░░░▓▓▓▓
        0xD8, //  ░░▓░░▓▓▓
        0x8D, //  ░▓▓▓░░▓░
        0x07, //  ▓▓▓▓▓░░░
        0x02, //  ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t zigzagBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x70, //  ▓░░░▓▓▓▓
        0xF8, //  ░░░░░▓▓▓
        0xDD, //  ░░▓░░░▓░
        0x8F, //  ░▓▓▓░░░░
        0x07, //  ▓▓▓▓▓░░░
        0x02, //  ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t zigzagBoldShaded[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0xA8, //  ░▓░▓░▓▓▓
        0x55, //  ▓░▓░▓░▓░
        0x8A, //  ░▓▓▓░▓░▓
        0x05, //  ▓▓▓▓▓░▓░
        0x02, //  ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t zigzagExtraBold[] PROGMEM {
        8, 8, //  8x8 px image
        0x20, //  ▓▓░▓▓▓▓▓
        0x70, //  ▓░░░▓▓▓▓
        0xF8, //  ░░░░░▓▓▓
        0xFD, //  ░░░░░░▓░
        0xDF, //  ░░▓░░░░░
        0x8F, //  ░▓▓▓░░░░
        0x07, //  ▓▓▓▓▓░░░
        0x02, //  ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t zigzagPinstripe[] PROGMEM {
        8, 8, //  8x8 px image
        0x20, //  ▓▓░▓▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x25, //  ▓▓░▓▓░▓░
        0x52, //  ▓░▓░▓▓░▓
        0x88, //  ░▓▓▓░▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x02, //  ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t zigzagSteep[] PROGMEM {
        8, 8, //  8x8 px image
        0x22, //  ▓▓░▓▓▓░▓
        0x22, //  ▓▓░▓▓▓░▓
        0x50, //  ▓░▓░▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x88, //  ░▓▓▓░▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x05, //  ▓▓▓▓▓░▓░
    };

    constexpr uint8_t dentilly[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x20, //  ▓▓░▓▓▓▓▓
        0x30, //  ▓▓░░▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0xE3, //  ░░░▓▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t dentillyMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0x66, //  ▓░░▓▓░░▓
        0xDD, //  ░░▓░░░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x66, //  ▓░░▓▓░░▓
        0xDD, //  ░░▓░░░▓░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t urdy[] PROGMEM {
        8, 8, //  8x8 px image
        0x10, //  ▓▓▓░▓▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x82, //  ░▓▓▓▓▓░▓
        0x01, //  ▓▓▓▓▓▓▓░
    };

    constexpr uint8_t urdyMini[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0xAA, //  ░▓░▓░▓░▓
        0x11, //  ▓▓▓░▓▓▓░
        0x44, //  ▓░▓▓▓░▓▓
        0xAA, //  ░▓░▓░▓░▓
        0xAA, //  ░▓░▓░▓░▓
        0x11, //  ▓▓▓░▓▓▓░
    };

    constexpr uint8_t embattledGrady[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x38, //  ▓▓░░░▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0xEE, //  ░░░▓░░░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x83, //  ░▓▓▓▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t embattled[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0x00, //  ▓▓▓▓▓▓▓▓
        0x7C, //  ▓░░░░░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0x44, //  ▓░▓▓▓░▓▓
        0xC7, //  ░░▓▓▓░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t embattledMini[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xBB, //  ░▓░░░▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xBB, //  ░▓░░░▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t potenty[] PROGMEM {
        8, 8, //  8x8 px image
        0xFE, //  ░░░░░░░▓
        0x82, //  ░▓▓▓▓▓░▓
        0x82, //  ░▓▓▓▓▓░▓
        0xEE, //  ░░░▓░░░▓
        0x28, //  ▓▓░▓░▓▓▓
        0x28, //  ▓▓░▓░▓▓▓
        0xEF, //  ░░░▓░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t potentyMini[] PROGMEM {
        8, 8, //  8x8 px image
        0xEE, //  ░░░▓░░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xFF, //  ░░░░░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
        0xEE, //  ░░░▓░░░▓
        0x44, //  ▓░▓▓▓░▓▓
        0xFF, //  ░░░░░░░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t serpentine[] PROGMEM {
        8, 8, //  8x8 px image
        0x44, //  ▓░▓▓▓░▓▓
        0xEE, //  ░░░▓░░░▓
        0xAA, //  ░▓░▓░▓░▓
        0xAA, //  ░▓░▓░▓░▓
        0xAA, //  ░▓░▓░▓░▓
        0xAA, //  ░▓░▓░▓░▓
        0xBB, //  ░▓░░░▓░░
        0x11, //  ▓▓▓░▓▓▓░
    };

    constexpr uint8_t rising[] PROGMEM {
        8, 8, //  8x8 px image
        0x50, //  ▓░▓░▓▓▓▓
        0xA0, //  ░▓░▓▓▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x0A, //  ▓▓▓▓░▓░▓
        0x50, //  ▓░▓░▓▓▓▓
        0xA0, //  ░▓░▓▓▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x0A, //  ▓▓▓▓░▓░▓
    };

    constexpr uint8_t riseAndFall[] PROGMEM {
        8, 8, //  8x8 px image
        0x20, //  ▓▓░▓▓▓▓▓
        0x50, //  ▓░▓░▓▓▓▓
        0x0A, //  ▓▓▓▓░▓░▓
        0x04, //  ▓▓▓▓▓░▓▓
        0x40, //  ▓░▓▓▓▓▓▓
        0xA0, //  ░▓░▓▓▓▓▓
        0x05, //  ▓▓▓▓▓░▓░
        0x02, //  ▓▓▓▓▓▓░▓
    };

    constexpr uint8_t doubleHelix[] PROGMEM {
        8, 8, //  8x8 px image
        0x00, //  ▓▓▓▓▓▓▓▓
        0xC3, //  ░░▓▓▓▓░░
        0x24, //  ▓▓░▓▓░▓▓
        0x10, //  ▓▓▓░▓▓▓▓
        0x08, //  ▓▓▓▓░▓▓▓
        0x24, //  ▓▓░▓▓░▓▓
        0xC3, //  ░░▓▓▓▓░░
        0x00, //  ▓▓▓▓▓▓▓▓
    };

}
#endif
