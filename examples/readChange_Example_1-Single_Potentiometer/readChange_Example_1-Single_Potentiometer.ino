/*
readChange - Example 1 - Single Potentiometer

Created by Sebastian Tomczak, 28 March 2017

This example reads the value of a potentiometer connected to analog input 0.
If the value has changed, the new value is printed to the serial monitor.

*/



#include <readChange.h>

int analog_input_pin = 0;

readChange pot1(analog_input_pin);



void setup() {
  Serial.begin(57600);
}



void loop() {
  pot1.update(); 

  if(pot1.change() == true) {
    Serial.println(pot1.read());
  }

}
