#include "stm32f0xx.h"
#include "stm32f0_discovery.h"
#include "stm32f0xx_rcc.h"

void delay(uint32_t delay);

int main(void) {
   STM_EVAL_LEDInit(LED3);
   STM_EVAL_LEDInit(LED4);
   STM_EVAL_LEDOff(LED3);
   STM_EVAL_LEDOff(LED4);

   while (1) {	  
     STM_EVAL_LEDOn(LED3);
     STM_EVAL_LEDOff(LED4);
     delay(500000);
     STM_EVAL_LEDOff(LED3);
     STM_EVAL_LEDOn(LED4);
     delay(500000);
   }
}

void delay(uint32_t delay){ 
   static uint32_t delayTime;
   
   delayTime = delay; 
   
   while(delayTime != 0) {
      delayTime--; 
   }
}
