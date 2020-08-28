/*
 * Project 1
 * Authors : Andri Þór Arnarsson
 *         : Zeyad Rafat Surakji
 *         : ...
*/

#include <avr/io.h>


void adc_setup(void){
	
    // Voltage Reference Selections for ADC
	// Select Vref = AVcc
    // ADC pin5 PC45
    ADMUX  = ( 1<<REFS0 | 1 << MUX0 | 1 << MUX2); 

    // ADC Control and Status Register A
    // ADEN - ADC Enable
    // ADIE - ADC Interupt Enable
    // ADPSx - Prescaler = 128
	ADCSRA = (1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0)|(1<<ADIE)|(1<<ADEN);
    // Disable digital input buffer
    DIDR0 = ( 1 << ADC5D);	
}

void adcConvert(){
    ADCSRA |= ( 1 << ADSC );
}