// Round - 8x8.me fill patterns
// This work is dedicated to the Public Domain by ACED, licensed under CC0
// https://creativecommons.org/publicdomain/zero/1.0/

#pragma once
#include <stdint.h> // For uint8_t type
#include <avr/pgmspace.h> // For AVR progmem storage


namespace patterns {

    constexpr uint8_t PROGMEM annuletSmall[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x14,  // ▓▓▓░▓░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@BEB@@"[i%8]<<2

    constexpr uint8_t PROGMEM annuletSmallDuo[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x50,  // ▓░▓░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x05,  // ▓▓▓▓▓░▓░
        0x02,  // ▓▓▓▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: " P \0\2\5\2"[i%8]

    constexpr uint8_t PROGMEM annuletSmallQuad[] {
        8, 8,  // 8x8 px image
        0x22,  // ▓▓░▓▓▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x55,  // ▓░▓░▓░▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "\"U\""[i%4]
    // GAMBY: 0x2520

    constexpr uint8_t PROGMEM roundelSmallDuo[] {
        8, 8,  // 8x8 px image
        0x20,  // ▓▓░▓▓▓▓▓
        0x70,  // ▓░░░▓▓▓▓
        0x20,  // ▓▓░▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x02,  // ▓▓▓▓▓▓░▓
        0x07,  // ▓▓▓▓▓░░░
        0x02,  // ▓▓▓▓▓▓░▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: " p \0\2\a\2"[i%8]

    constexpr uint8_t PROGMEM roundelSmall[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x08,  // ▓▓▓▓░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@BGB@@"[i%8]<<2

    constexpr uint8_t PROGMEM annulet[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@FIIF@"[i%8]<<2

    constexpr uint8_t PROGMEM annuletCoAnnulet[] {
        8, 8,  // 8x8 px image
        0x42,  // ▓░▓▓▓▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
    };
    // Magic: 3+"?~\25!!\25~?"[i%8]

    constexpr uint8_t PROGMEM annuletCoAnnuletSquare[] {
        8, 8,  // 8x8 px image
        0x5A,  // ▓░▓░░▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0xA5,  // ░▓░▓▓░▓░
        0xA5,  // ░▓░▓▓░▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x5A,  // ▓░▓░░▓░▓
    };
    // Magic: 12+"Nu\f\231\231\fuN"[i%8]

    constexpr uint8_t PROGMEM annuletCoAnnuletXL[] {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x99,  // ░▓▓░░▓▓░
        0x24,  // ▓▓░▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
    };
    // Magic: "$B\231$$\231B$"[i%8]

    constexpr uint8_t PROGMEM roundelCoAnnuletXL[] {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x99,  // ░▓▓░░▓▓░
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
    };
    // Magic: 27+"\t'~!!~'\t"[i%8]

    constexpr uint8_t PROGMEM roundelCoAnnulet[] {
        8, 8,  // 8x8 px image
        0x42,  // ▓░▓▓▓▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
    };
    // Magic: 15+"3r\t--\tr3"[i%8]

    constexpr uint8_t PROGMEM roundelCoRoundel[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0xC3,  // ░░▓▓▓▓░░
    };
    // Magic: 11+"\270v\r11\rv\270"[i%8]

    constexpr uint8_t PROGMEM roundel[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@FOOF@"[i%8]<<2

    constexpr uint8_t PROGMEM ball[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x34,  // ▓▓░░▓░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: "@@FMOF@"[i%8]<<2

    constexpr uint8_t PROGMEM annuletLarge[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 88^"XDzzzDXX"[i%8]

    constexpr uint8_t PROGMEM annuletLargeMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x36,  // ▓▓░░▓░░▓
        0x22,  // ▓▓░▓▓▓░▓
        0x36,  // ▓▓░░▓░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 88^"XDnznDXX"[i%8]

    constexpr uint8_t PROGMEM annuletLargeBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x36,  // ▓▓░░▓░░▓
        0x3E,  // ▓▓░░░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 88^"XDfnfDXX"[i%8]

    constexpr uint8_t PROGMEM roundelLarge[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x3E,  // ▓▓░░░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 88^"XDfffDXX"[i%8]

    constexpr uint8_t PROGMEM ballLarge[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x1C,  // ▓▓▓░░░▓▓
        0x36,  // ▓▓░░▓░░▓
        0x3A,  // ▓▓░░░▓░▓
        0x3E,  // ▓▓░░░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 88^"XDnbfDXX"[i%8]

    constexpr uint8_t PROGMEM sphereCoSphere[] {
        8, 8,  // 8x8 px image
        0xE3,  // ░░░▓▓▓░░
        0xDD,  // ░░▓░░░▓░
        0x3A,  // ▓▓░░░▓░▓
        0x3A,  // ▓▓░░░▓░▓
        0x3E,  // ▓▓░░░░░▓
        0xDD,  // ░░▓░░░▓░
        0xA3,  // ░▓░▓▓▓░░
        0xA3,  // ░▓░▓▓▓░░
    };
    // Magic: 130^"a_\270\270\274_!!"[i%8]

    constexpr uint8_t PROGMEM annuletXXL[] {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x41,  // ▓░▓▓▓▓▓░
        0x41,  // ▓░▓▓▓▓▓░
        0x41,  // ▓░▓▓▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 96^"|B!!!B|`"[i%8]

    constexpr uint8_t PROGMEM bubble[] {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x22,  // ▓▓░▓▓▓░▓
        0x49,  // ▓░▓▓░▓▓░
        0x45,  // ▓░▓▓▓░▓░
        0x41,  // ▓░▓▓▓▓▓░
        0x22,  // ▓▓░▓▓▓░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 96^"|B)%!B|`"[i%8]

    constexpr uint8_t PROGMEM roundelXXL[] {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x3E,  // ▓▓░░░░░▓
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x7F,  // ▓░░░░░░░
        0x3E,  // ▓▓░░░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 66^"^|===|^B"[i%8]

    constexpr uint8_t PROGMEM ballXXL[] {
        8, 8,  // 8x8 px image
        0x1C,  // ▓▓▓░░░▓▓
        0x32,  // ▓▓░░▓▓░▓
        0x79,  // ▓░░░░▓▓░
        0x7D,  // ▓░░░░░▓░
        0x7F,  // ▓░░░░░░░
        0x3E,  // ▓▓░░░░░▓
        0x1C,  // ▓▓▓░░░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };
    // Magic: 72^"Tz157vTH"[i%8]

    constexpr uint8_t PROGMEM annuletUltraLarge[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x3C,  // ▓▓░░░░▓▓
    };
    // Magic: 60+"\0\6EEEE\6"[i%8]

    constexpr uint8_t PROGMEM annuletUltraLargeMedium[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0xC3,  // ░░▓▓▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0xC3,  // ░░▓▓▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0x3C,  // ▓▓░░░░▓▓
    };
    // Magic: 60+"\0*\207EE\207*"[i%8]

    constexpr uint8_t PROGMEM annuletUltraLargeBold[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x7E,  // ▓░░░░░░▓
        0xE7,  // ░░░▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0xC3,  // ░░▓▓▓▓░░
        0xE7,  // ░░░▓▓░░░
        0x7E,  // ▓░░░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };
    // Magic: "<~\347\303\303\347~<"[i%8]

    constexpr uint8_t PROGMEM annuletUltraLargeExtraBold[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x7E,  // ▓░░░░░░▓
        0xFF,  // ░░░░░░░░
        0xE7,  // ░░░▓▓░░░
        0xE7,  // ░░░▓▓░░░
        0xFF,  // ░░░░░░░░
        0x7E,  // ▓░░░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };
    // Magic: "<~\377\347\347\377~<"[i%8]

    constexpr uint8_t PROGMEM roundelUltraLarge[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x7E,  // ▓░░░░░░▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x7E,  // ▓░░░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };
    // Magic: "<~\377\377\377\377~<"[i%8]

}



#if 0
namespace patternsHorizontal {

    constexpr uint8_t PROGMEM annuletSmall[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x28,  // ▓▓░▓░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annuletSmallDuo[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x0A,  // ▓▓▓▓░▓░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0xA0,  // ░▓░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annuletSmallQuad[] {
        8, 8,  // 8x8 px image
        0x44,  // ▓░▓▓▓░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0xAA,  // ░▓░▓░▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM roundelSmallDuo[] {
        8, 8,  // 8x8 px image
        0x04,  // ▓▓▓▓▓░▓▓
        0x0E,  // ▓▓▓▓░░░▓
        0x04,  // ▓▓▓▓▓░▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0xE0,  // ░░░▓▓▓▓▓
        0x40,  // ▓░▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM roundelSmall[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x10,  // ▓▓▓░▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annulet[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annuletCoAnnulet[] {
        8, 8,  // 8x8 px image
        0x42,  // ▓░▓▓▓▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM annuletCoAnnuletSquare[] {
        8, 8,  // 8x8 px image
        0x5A,  // ▓░▓░░▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0xA5,  // ░▓░▓▓░▓░
        0xA5,  // ░▓░▓▓░▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x5A,  // ▓░▓░░▓░▓
    };

    constexpr uint8_t PROGMEM annuletCoAnnuletXL[] {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x99,  // ░▓▓░░▓▓░
        0x24,  // ▓▓░▓▓░▓▓
        0x24,  // ▓▓░▓▓░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
    };

    constexpr uint8_t PROGMEM roundelCoAnnuletXL[] {
        8, 8,  // 8x8 px image
        0x24,  // ▓▓░▓▓░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x99,  // ░▓▓░░▓▓░
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x99,  // ░▓▓░░▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x24,  // ▓▓░▓▓░▓▓
    };

    constexpr uint8_t PROGMEM roundelCoAnnulet[] {
        8, 8,  // 8x8 px image
        0x42,  // ▓░▓▓▓▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
    };

    constexpr uint8_t PROGMEM roundelCoRoundel[] {
        8, 8,  // 8x8 px image
        0xC3,  // ░░▓▓▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0x18,  // ▓▓▓░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x81,  // ░▓▓▓▓▓▓░
        0xC3,  // ░░▓▓▓▓░░
    };

    constexpr uint8_t PROGMEM roundel[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM ball[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x2C,  // ▓▓░▓░░▓▓
        0x3C,  // ▓▓░░░░▓▓
        0x18,  // ▓▓▓░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annuletLarge[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annuletLargeMedium[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x6C,  // ▓░░▓░░▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x6C,  // ▓░░▓░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annuletLargeBold[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0x6C,  // ▓░░▓░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM roundelLarge[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM ballLarge[] {
        8, 8,  // 8x8 px image
        0x00,  // ▓▓▓▓▓▓▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x6C,  // ▓░░▓░░▓▓
        0x5C,  // ▓░▓░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM sphereCoSphere[] {
        8, 8,  // 8x8 px image
        0xC7,  // ░░▓▓▓░░░
        0xBB,  // ░▓░░░▓░░
        0x4C,  // ▓░▓▓░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0x7C,  // ▓░░░░░▓▓
        0xBB,  // ░▓░░░▓░░
        0xC4,  // ░░▓▓▓░▓▓
        0xC7,  // ░░▓▓▓░░░
    };

    constexpr uint8_t PROGMEM annuletXXL[] {
        8, 8,  // 8x8 px image
        0x38,  // ▓▓░░░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x82,  // ░▓▓▓▓▓░▓
        0x82,  // ░▓▓▓▓▓░▓
        0x82,  // ░▓▓▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM bubble[] {
        8, 8,  // 8x8 px image
        0x38,  // ▓▓░░░▓▓▓
        0x44,  // ▓░▓▓▓░▓▓
        0x92,  // ░▓▓░▓▓░▓
        0xA2,  // ░▓░▓▓▓░▓
        0x82,  // ░▓▓▓▓▓░▓
        0x44,  // ▓░▓▓▓░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM roundelXXL[] {
        8, 8,  // 8x8 px image
        0x38,  // ▓▓░░░▓▓▓
        0x7C,  // ▓░░░░░▓▓
        0xFE,  // ░░░░░░░▓
        0xFE,  // ░░░░░░░▓
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM ballXXL[] {
        8, 8,  // 8x8 px image
        0x38,  // ▓▓░░░▓▓▓
        0x4C,  // ▓░▓▓░░▓▓
        0x9E,  // ░▓▓░░░░▓
        0xBE,  // ░▓░░░░░▓
        0xFE,  // ░░░░░░░▓
        0x7C,  // ▓░░░░░▓▓
        0x38,  // ▓▓░░░▓▓▓
        0x00,  // ▓▓▓▓▓▓▓▓
    };

    constexpr uint8_t PROGMEM annuletUltraLarge[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x42,  // ▓░▓▓▓▓░▓
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0x42,  // ▓░▓▓▓▓░▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t PROGMEM annuletUltraLargeMedium[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x66,  // ▓░░▓▓░░▓
        0xC3,  // ░░▓▓▓▓░░
        0x81,  // ░▓▓▓▓▓▓░
        0x81,  // ░▓▓▓▓▓▓░
        0xC3,  // ░░▓▓▓▓░░
        0x66,  // ▓░░▓▓░░▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t PROGMEM annuletUltraLargeBold[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x7E,  // ▓░░░░░░▓
        0xE7,  // ░░░▓▓░░░
        0xC3,  // ░░▓▓▓▓░░
        0xC3,  // ░░▓▓▓▓░░
        0xE7,  // ░░░▓▓░░░
        0x7E,  // ▓░░░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t PROGMEM annuletUltraLargeExtraBold[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x7E,  // ▓░░░░░░▓
        0xFF,  // ░░░░░░░░
        0xE7,  // ░░░▓▓░░░
        0xE7,  // ░░░▓▓░░░
        0xFF,  // ░░░░░░░░
        0x7E,  // ▓░░░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };

    constexpr uint8_t PROGMEM roundelUltraLarge[] {
        8, 8,  // 8x8 px image
        0x3C,  // ▓▓░░░░▓▓
        0x7E,  // ▓░░░░░░▓
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0xFF,  // ░░░░░░░░
        0x7E,  // ▓░░░░░░▓
        0x3C,  // ▓▓░░░░▓▓
    };

}
#endif