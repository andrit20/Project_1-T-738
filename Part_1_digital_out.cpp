/*
 * Assignment 1.1 in C
 * Authors : Andri Þór Arnarsson
 *         : Zeyad Rafat Surakji
 *         : ...
*/
#include "digital_out.h"
#include <avr/io.h>
#include <stdint.h>

DigitalOut::DigitalOut(int pin){ pinMask = (1 << pin); }

void DigitalOut::init(){ DDRB |= pinMask; }

void DigitalOut::setHi(){ PORTB |= pinMask; }

void DigitalOut::setLo() { PORTB &= ~pinMask; }

void DigitalOut::toggle(){ PORTB = PORTB ^ pinMask; }

void busyWait(int wait){
    wait *= 16000; // 1/16mhz * 16000 = 0.001s not precise but hopefully close enough
    for(int i = wait ; i <= wait ; i++ ){
        i++;
    }
}