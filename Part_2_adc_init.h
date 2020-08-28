/*
 * Project 1
 * Authors : Andri Þór Arnarsson
 *         : Zeyad Rafat Surakji
 *         : ...
*/
#ifndef ADC_INIT_H
#define ADC_INIT_H
#include <stdint.h>

uint16_t adc_result;
void adc_setup(void);
void adcConvert();
#endif // ADC_INIT_H