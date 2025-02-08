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

#include "../../inc/MarlinConfig.h"

<<<<<<<< HEAD:Marlin/src/gcode/temp/M123.cpp
#if HAS_FANCHECK

#include "../gcode.h"
#include "../../feature/fancheck.h"

/**
 * M123: Report fan states -or- set interval for auto-report
 *
 *   S<seconds> : Set auto-report interval
 */
void GcodeSuite::M123() {

  #if ENABLED(AUTO_REPORT_FANS)
    if (parser.seenval('S')) {
      fan_check.auto_reporter.set_interval(parser.value_byte());
      return;
    }
  #endif

  fan_check.print_fan_states();

}

#endif // HAS_FANCHECK
========
#if ENABLED(SERVO_DETACH_GCODE)

#include "../gcode.h"
#include "../../module/servo.h"

/**
 * M282: Detach Servo. P<index>
 */
void GcodeSuite::M282() {

  if (!parser.seenval('P')) return;

  const int servo_index = parser.value_int();
  if (WITHIN(servo_index, 0, NUM_SERVOS - 1))
    servo[servo_index].detach();
  else
    SERIAL_ECHO_MSG("Servo ", servo_index, " out of range");

}

#endif // SERVO_DETACH_GCODE
>>>>>>>> upstream/bugfix-2.1.x:Marlin/src/gcode/control/M282.cpp
