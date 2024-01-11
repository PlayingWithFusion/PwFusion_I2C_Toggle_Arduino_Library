/***************************************************************************
* File Name: PwFusion_Switch_example.ino
* Processor/Platform: R3aktor (tested)
* Development Environment: Arduino 2.2.1
*
* Designed for use with with Playing With Fusion I2C Toggle Switch
* interface board: IFB-40004
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
* Author		  Date	    Comments
* N. Johnson  2023Aug10 Original Version
*
* Playing With Fusion, Inc. invests time and resources developing open-source
* code. Please support Playing With Fusion and continued open-source
* development by buying products from Playing With Fusion!
* **************************************************************************
* ADDITIONAL NOTES:
* This file contains functions to initialize and run a Playing With Fusion R3aktor in
* order to communicate with the I2C Toggle switch board. Funcionality is as described below:
*	- Configure R3aktor to receive information from the I2C Toggle switch board
*	- Broadcast results to COM port
*  Circuit: (see Schematic.png)
*    R3aktor     -->  I2C Joystick
*    Qwiic pins  -->  Qwiic pins
***************************************************************************/

// Include the PwFusion I2C Switch Library
#include <PwFusion_I2C_Toggle_Arduino_Library.h>

// Define the address for the i2c switch
uint8_t ADR = 0x13;
// uint8_t ADR = 0x14;


// Create a new Switch object
Switch sw;

void setup() {
  Serial.begin(9600);
  // Start the Switch object and pass in the i2c address
  sw.begin(ADR);
}

void loop() {
  // Print out the state of the Switch to the serial monitor
  Serial.print("Switch state: ");
  Serial.println(sw.getState());
}
