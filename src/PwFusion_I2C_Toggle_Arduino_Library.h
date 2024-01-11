/***************************************************************************
* File Name: PwFusion_I2C_Toggle_Arduino_Library.cpp
* Processor/Platform: PwFusion R3aktor M0 (tested)
* Development Environment: Arduino 2.1.1
*
* Designed to simplify the integration of the PwFusion I2C Toggle switch board
* Device (IFB-40004)
*   ---> <Insert Link>
*
* MIT License
* SOFTWARE LICENSE AGREEMENT: This code is released under the MIT License.
* Copyright (c) 2024 Playing With Fusion, Inc
* 
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
* 
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
* 
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
* **************************************************************************
* REVISION HISTORY:
* Author		    Date		    Comments
* N. Johnson    2023Sep10   Original version
*
* Playing With Fusion, Inc. invests time and resources developing open-source
* code. Please support Playing With Fusion and continued open-source
* development by buying products from Playing With Fusion!
***************************************************************************/

#ifndef PwFusion_I2C_Toggle_Arduino_Library_h
#define PwFusion_I2C_Toggle_Arduino_Library_h

#include "Arduino.h"
#include <PwFusion_Data_Transfer.h>

class Switch {

  private:
    uint8_t _adr;
    DataTransfer* transfer;

    uint8_t reg_STATE = 0x00;
    int _numData = 1;

  public:
    Switch();
    int getState();
    void begin(uint8_t adr);

};

#endif