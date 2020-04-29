#include <msp430.h>
#include <libTimer.h>
//#include "led.h"
#include "buzzer.h"
#include "lcdutils.h"
#include "lcddraw.h"
#include "shape.h"
#include "p2switches.h"


#define GREEN_LED BIT6


void main()
{


  P1DIR |= GREEN_LED;
  P1OUT |= GREEN_LED;

  configureClocks();
  lcd_init();
  //shapeInit();
  //p2sw_init();
  u_char width = screenWidth, height = screenHeight;
  clearScreen(COLOR_BLUE);
  drawString6x9(20,20,"HI",COLOR_GREEN, COLOR_RED);
  fillRectangle(30,30,60,60,COLOR_ORANGE);
  //enableWDTInterrupts();
  //or_sr(0x8);
}

  
