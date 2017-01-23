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

// Initialize 1 device
LedControl lc=LedControl(12,11,10,1);

void setup() {
  // deactivate power saving mode on the first device (addr 0)
  lc.shutdown(0,false);
  // set brightness to medium on the first device (addr 0) possible values are 0-15
  lc.setIntensity(0,8);
  // turn all LEDs off on the first device
  lc.clearDisplay(0);
}

void loop(){
  // activate one by one LED
  for (int row=0; row<8; row++){
    for (int col=0; col<8; col++){
      lc.setLed(0,row,col,true);
      delay(50);
    }
  }
  // deactivate one by one LED
  for (int row=0; row<8; row++){
    for (int col=0; col<8; col++){
      lc.setLed(0,row,col,false);
      delay(50);
    }
  }
}
