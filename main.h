#include <30F6014A.h>
#device ADC=12

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES CKSFSM                   //Clock Switching is enabled, fail Safe clock monitor is enabled
#FUSES NOBROWNOUT               //No brownout reset
#FUSES MCLR
#FUSES XT

#device ICSP=1
#use delay(crystal=10000000)

#define LED PIN_D3
//#define SW PIN_F5

#define ADC0   PIN_B0
#define ADC1   PIN_B1
#define ADC2   PIN_B2
#define ADC3   PIN_B3
#define ADC4   PIN_B4
#define ADC5   PIN_B5
#define ADC6   PIN_B6
#define ADC7   PIN_B7
#define ADC8   PIN_B8
#define ADC9   PIN_B9
#define ADC10   PIN_B10
#define ADC11   PIN_B11
#define ADC12   PIN_B12
#define ADC13   PIN_B13
#define ADC14   PIN_B14
#define ADC15   PIN_B15


#define DELAY 500

#use rs232(UART1, baud=38400, stream=UART_PORT1)

float adc[15]; int delay2 = 200;

void testADC(void) {
   int16 value;
   float adc;
   
   set_adc_channel(5); delay_us(20); value = read_adc();  
   //value = (value << 1); // Shift right 3  
   //printf("Vout = %u - ", value);
   
   //adc = (value / 4095.0) *4.199;
   adc = (value / 4095.0) *5.0;
   printf("Vout = %4.3fV - ", adc);
}
