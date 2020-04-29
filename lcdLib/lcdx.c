/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h>
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;
  u_char j;
  clearScreen(COLOR_BLUE);

  // drawString5x7(20,20, "hello", COLOR_GREEN, COLOR_RED);

  //fillRectangle(30,30, 60, 60, COLOR_ORANGE);

  /* for (j=0; j<40; j++){
    drawPixel(0,j,COLOR_BLACK); //vertical line
    drawPixel(j/2,40, COLOR_BLACK); //horizontal line
    drawPixel(j/2,j,COLOR_BLACK); //diagnal line
    }*/

  for (j=0; j<=15; j+=3){
    char colLeft = 15-j;
    char colRight = 15;
    for(char i=colLeft; i<=colRight; i++){
      drawPixel(20+i,30+j,COLOR_BLACK);
      drawPixel(20-i,30+j,COLOR_BLACK);
      drawPixel(20+i,30-j,COLOR_BLACK);
      drawPixel(20-i,30-j,COLOR_BLACK);
    }
  }
}
