/*
  mihosoft.h - eeprom configuration handling
  Part of Grbl

  Copyright (c) 2019-2020 Michael Hoffer (info@michaelhoffer.de)
  Copyright (c) 2011-2016 Sungeun K. Jeon for Gnea Research LLC
  Copyright (c) 2009-2011 Simen Svale Skogsrud

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef MIHOSOFT_H
#define MIHOSOFT_H

#include <stdbool.h>

// Defines whether to enable MIHOSOFT extensions 
#define MIHOSOFT_EXTENSIONS_ENABLED

// MIHOSOFT setting IDs
#define MIHOSOFT_DISABLE_EEPROM_WRITE_SETTING_IDX 200

// MIHOSOFT specific variable which determines whether to 
// store settings to eeprom. Since we change acceleration
// and other settings quite frequently, we need to disable
// eeprom writes to prevent hardware issues.
// This setting can be configured via 
//
// '$200=0' -> feature disabled, i.e., eeprom is used if settings are changed
// '$200=1' -> feature enabled, i.e., eeprom is not used if settings are changed
#ifdef MIHOSOFT_EXTENSIONS_ENABLED
extern bool mihosoft_disable_eeprom_write;
#endif

#endif // BFX_H