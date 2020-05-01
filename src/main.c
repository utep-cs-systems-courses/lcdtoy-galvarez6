#include <msp430.h>
#include "libTimer.h"
#include "switches.h"
#include "buzzer.h"
//#include "led.h"
#include "lcdutils.h"
#include "lcddraw.h"

#define GREEN_LED BIT6

void main(void) 
{  
  configureClocks();
  switch_init();
  //led_init();
  buzzer_init();
  enableWDTInterrupts();
  lcd_init();
  clearScreen(COLOR_GREEN);
  or_sr(0x18);  // CPU off, GIE on
  // fillRectangle(30, 30, 60, 60, COLOR_BLUE);
  // drawHouse();
  
  for(;;) {
    while(!reddrawScreen){
      P1OUT &= ~GREEN_LED;
      or_sr(0x10);
    }
    P1OUT |= GREEN_LED;
    reddrawScreen = 0;
    //call something here
  }
  
 
} 
