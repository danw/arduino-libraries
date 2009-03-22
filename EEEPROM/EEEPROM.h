/*
  EEEPROM.h - External (I2C) EEPROM libray.
  Copyright (c) 2009 Amadeusz Jasak.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef EEEPROM_h
#define EEEPROM_h

#include <inttypes.h>

class EEEPROM
{
  private:
    int address;

  public:
    EEEPROM(int address);
  
    uint8_t read(unsigned int);
    void write(unsigned int, uint8_t);
    
    void readPage(unsigned int addr, uint8_t *buffer, int length);
    void writePage(unsigned int addr, uint8_t *data, int length);
};

#endif

