/*
One by one light of a 8x8 LED Matrix is activated and deactivated afterwards.
This is useful to test if a self soldered construction works properly.

Documentation & Library
  http://playground.arduino.cc/Main/LedControl

Arduino Uno | LEDMatrix MAX7219
  pin 12    |   DIN (data in)
  pin 11    |   CLK (clock)
  pin 10    |   CS (load)
  VCC 5V    |   VCC
  GND       |   GND
*/

#include "LedControl.h"

// Initialize 1 device; possible up to 8 devices
LedControl lc=LedControl(12,11,10,1);

void setup() {
  for (int addr=0; addr<lc.getDeviceCount(); addr++){
    // deactivate power saving mode
    lc.shutdown(addr,false);
    // set brightness to medium; possible values are 0-15
    lc.setIntensity(addr,8);
    // turn all LEDs off
    lc.clearDisplay(addr);
  }
}

void loop(){
  // activate one by one LED
  for (int row=0; row<8; row++){
    for (int addr=0; addr<lc.getDeviceCount(); addr++){
      for (int col=0; col<8; col++){
        lc.setLed(addr,row,col,true);
        delay(50);
      }
    }
  }
  // deactivate one by one LED
  for (int row=0; row<8; row++){
    for (int addr=0; addr<lc.getDeviceCount(); addr++){
      for (int col=0; col<8; col++){
        lc.setLed(addr,row,col,false);
        delay(50);
      }
    }
  }
}
