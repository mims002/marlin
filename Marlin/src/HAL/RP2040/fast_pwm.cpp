/**
 * Marlin 3D Printer Firmware
<<<<<<<< HEAD:Marlin/src/tests/marlin_tests.cpp
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
========
 * Copyright (c) 2024 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
>>>>>>>> upstream/bugfix-2.1.x:Marlin/src/HAL/RP2040/fast_pwm.cpp
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
<<<<<<<< HEAD:Marlin/src/tests/marlin_tests.cpp
========
#include "../platforms.h"

#ifdef __PLAT_RP2040__
>>>>>>>> upstream/bugfix-2.1.x:Marlin/src/HAL/RP2040/fast_pwm.cpp

#include "../inc/MarlinConfigPre.h"

<<<<<<<< HEAD:Marlin/src/tests/marlin_tests.cpp
#if ENABLED(MARLIN_TEST_BUILD)

#include "../module/endstops.h"
#include "../module/motion.h"
#include "../module/planner.h"
#include "../module/settings.h"
#include "../module/stepper.h"
#include "../module/temperature.h"

// Individual tests are localized in each module.
// Each test produces its own report.

// Startup tests are run at the end of setup()
void runStartupTests() {
  // Call post-setup tests here to validate behaviors.
}

// Periodic tests are run from within loop()
void runPeriodicTests() {
  // Call periodic tests here to validate behaviors.
}

#endif // MARLIN_TEST_BUILD
========
#include "HAL.h"
#include "pinDefinitions.h"

void MarlinHAL::set_pwm_duty(const pin_t pin, const uint16_t v, const uint16_t v_size/*=255*/, const bool invert/*=false*/) {
  analogWrite(pin, v);
}

void MarlinHAL::set_pwm_frequency(const pin_t pin, const uint16_t f_desired) {
  mbed::PwmOut* pwm = digitalPinToPwm(pin);
  if (pwm != NULL) delete pwm;
  pwm = new mbed::PwmOut(digitalPinToPinName(pin));
  digitalPinToPwm(pin) = pwm;
  pwm->period_ms(1000 / f_desired);
}

#endif // __PLAT_RP2040__
>>>>>>>> upstream/bugfix-2.1.x:Marlin/src/HAL/RP2040/fast_pwm.cpp
