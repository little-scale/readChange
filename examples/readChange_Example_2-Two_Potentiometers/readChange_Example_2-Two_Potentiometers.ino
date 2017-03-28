/*
readChange - Example 2 - Two Potentiometers

Created by Sebastian Tomczak, 28 March 2017

This example reads the value of two potentiometers connected to analog inputs 0 and 1.
If the value has changed, the new value is printed to the serial monitor.

*/



#include <readChange.h>

int analog_input_pin_1 = 0;
int analog_input_pin_2 = 1;

readChange pot1(analog_input_pin_1);
readChange pot2(analog_input_pin_2);



void setup() {
  
}



void loop() {
  pot1.update();
  pot2.update();

  if(pot1.change() == true) {
    Serial.println(pot1.read());
  }

  if(pot2.change() == true) {
    Serial.println(pot2.read());
  }

}
