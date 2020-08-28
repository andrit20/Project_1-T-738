/*
 * Project 1
 * Authors : Andri Þór Arnarsson
 *         : Zeyad Rafat Surakji
 *         : ...
*/

#ifndef DIGITAL_OUT_H
#define DIGITAL_OUT_H

#include <stdint.h>

// Class Prototypes
class DigitalOut
{
public:
    DigitalOut(int pin);
    void init();
    void setHi();
    void setLo();
    void toggle();
private:
    uint8_t pinMask;
};

// Function Prototypes
void busyWait(int wait);


#endif // DIGITAL_OUT_H