#include <msp430.h>
#include "libTimer.h"
#include "switches.h"
#include "buzzer.h"
//#include "led.h"
#include "lcdutils.h"
#include "lcddraw.h"

void main(void) 
{  
  configureClocks();
  switch_init();
  //led_init();
  buzzer_init();
  enableWDTInterrupts();
  lcd_init();
  clearScreen(COLOR_BLACK);

  or_sr(0x18);  // CPU off, GIE on
} 
