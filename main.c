#include <main.h>
#include <string.h>
#include <float.h>

void main()
{

   setup_adc_ports(ALL_ANALOG, VSS_VDD); //VREF_VDD VSS_VDD
   setup_adc(ADC_CLOCK_DIV_4 | ADC_TAD_MUL_8);
   
   SET_TRIS_A(0x0000);
   OUTPUT_A(0x0000);
   
   SET_TRIS_D(0x0000);
   OUTPUT_D(0x0000);
   
   //Example blinking LED program
   while(true)
   {
      testADC(); output_low(LED); printf("LEDs OFF\n\r"); delay_ms(DELAY);
      testADC(); output_high(LED); printf("LEDs ON\n\r"); delay_ms(DELAY);
   }

}
