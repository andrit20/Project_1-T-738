/*
 * Project 1
 * Authors : Andri Þór Arnarsson
 *         : Zeyad Rafat Surakji
 *         : ...
*/
 #define F_CPU 16000000UL
 #include <stdio.h>
 #include <avr/io.h>
 #include <avr/interrupt.h>
 #include "digital_out.h"
 #include "adc_init.h"

 int main(void) {

	adc_setup();
    adcConvert();
    sei();
    DigitalOut led(5);
    led.init();

	 while(1) {
        busyWait(adc_result);
	    led.toggle();
	 }
	 
	 return 0;
 }

ISR(ADC_vect)
{
    adc_result = ADC;
    adcConvert();

}