##Project 3 LCD toy
##Introduction
The LCD toy uses button interupts to draw a custom image on the lcd screen. In
addition to drawing a custom shape on the lcd it also plays sounds.

##Instructions
Button 1 on the top board triggers the lcd screen to draw part of the custom
shape. It also plays one note with the buzzer. Pressing button 1 again draws
the second part of the custom shape making it whole; it also plays a differnt
note on the buzzer. Pressing button 1 a third time clears the screen to green
and stops the buzzer from playing sounds.

##Project folder: SRC
contained in the project folder is the .c and .h files from lab 2 these
include:
-main.c: main file of the program.(attempts to put cpu to sleep)
-buzzer.c and buzzer.h: contains functions to drive the buzzer to make sounds.
-led.c and led.h: contain fucntions to turn on the red and green leds.
-notes.h: defines notes used to play songs from lab 2 used in swithces.c.
-switches.c and switches.h: contain fucntions used to handle interrupts from
the 4 buttons on the top board.
-states.c and states.h: used to transition states that affected the leds with
watch dog timer.
-wdInterruptHandler.c: used to toggle leds every 125 of a second.
<hr>
*New for lab 3:
-lcddraw.c and lcddraw.h: used to draw shapes and contains fucntion for the
custom shape:
-lcdutils: library used for lcddraw.
