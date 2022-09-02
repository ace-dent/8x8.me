#pragma once

#include <stdint.h> // For uint8_t
#include <avr/pgmspace.h> // For PROGMEM


namespace patterns {

  constexpr uint8_t PROGMEM scales[] {    8, 8,  // 8x8 px image
    0x42,  // ▓░▓▓▓▓░▓
    0x44,  // ▓░▓▓▓░▓▓
    0x24,  // ▓▓░▓▓░▓▓
    0x1C,  // ▓▓▓░░░▓▓
    0x24,  // ▓▓░▓▓░▓▓
    0x44,  // ▓░▓▓▓░▓▓
    0x42,  // ▓░▓▓▓▓░▓
    0xC1   // ░░▓▓▓▓▓░
  };
  // Magic: "BD$\34$DB\301"[i%8]

}



#ifdef 0

namespace patternsHorizontal {
  
  constexpr uint8_t PROGMEM scales[] {
    8, 8,  // 8x8 px image
    0x01,  // ▓▓▓▓▓▓▓░
    0x82,  // ░▓▓▓▓▓░▓
    0x7C,  // ▓░░░░░▓▓
    0x10,  // ▓▓▓░▓▓▓▓
    0x10,  // ▓▓▓░▓▓▓▓
    0x28,  // ▓▓░▓░▓▓▓
    0xC7,  // ░░▓▓▓░░░
    0x01   // ▓▓▓▓▓▓▓░
  };
  // Magic: "\1\202|\20\20(\307\1"[i%8]

}

#endif