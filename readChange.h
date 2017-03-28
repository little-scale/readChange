/*
  readChange.h
 
  Created by Sebastian Tomczak, 28 March 2017
 
*/

#ifndef readChange_h
#define readChange_h

#include "Arduino.h"

class readChange
{
public:
    readChange(int pin);
    void update();
    int change();
    int read();
private:
    int _pin;
    int current;
    int previous;
    int did_change;
};



#endif
