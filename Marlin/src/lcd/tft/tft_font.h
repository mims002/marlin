/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2021 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

<<<<<<<< HEAD:Marlin/src/lcd/extui/dgus_reloaded/DGUSSetupHandler.h
namespace DGUSSetupHandler {

  #if ENABLED(SDSUPPORT)
    bool Print();
  #endif
  bool PrintStatus();
  bool PrintAdjust();
  bool LevelingMenu();
  bool LevelingOffset();
  bool LevelingManual();
  bool LevelingAutomatic();
  bool LevelingProbing();
  bool Filament();
  bool Move();
  bool Gcode();
  bool PID();
  bool Infos();

}
========
#define JOIN(A,B,C)         CAT(CAT(A, B), C)
#define MENU_FONT_NAME      JOIN(FONT_FAMILY, _, FONT_SIZE)
#define SYMBOLS_FONT_NAME   JOIN(FONT_FAMILY, _Symbols_, FONT_SIZE)

extern const uint8_t MENU_FONT_NAME[];
extern const uint8_t SYMBOLS_FONT_NAME[];

#ifdef FONT_EXTRA
  #define EXTRA_FONT_NAME   JOIN(FONT_FAMILY, JOIN(_, FONT_EXTRA, _), FONT_SIZE)
  extern const uint8_t EXTRA_FONT_NAME[];
#endif
>>>>>>>> upstream/bugfix-2.1.x:Marlin/src/lcd/tft/tft_font.h
