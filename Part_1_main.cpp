/*
 * Assignment Project 1
 * Authors : Andri Þór Arnarsson
 *         : Zeyad Rafat Surakji
 *         : ...
*/
 #define F_CPU 16000000UL
 #include <stdio.h>
 #include <avr/io.h>
 #include <util/delay.h>
 #include "digital_out.h"


 int main(void) {
	 
    DigitalOut led(5);
    led.init();
	 int input = 0;

	 while(1) {
	    led.toggle();
        busyWait(1000);
    
	 }
	 
	 return 0;
 }