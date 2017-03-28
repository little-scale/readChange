/*
  readChange.cpp
 
  Created by Sebastian Tomczak, 29 March 2017.

*/

#include "Arduino.h"
#include "readChange.h"

readChange::readChange(int pin) {
    _pin = pin;
}

void readChange::update() {
    current = analogRead(_pin);
    if(current != previous) {
        previous = current;
        did_change = 1;
    }
    
    else {
        did_change = 0;
    }
}

int readChange::change() {
    return did_change;
}

int readChange::read() {
    return current;
}
