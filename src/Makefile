# makfile configuration
COMMON_OBJECTS  = 
CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -I../h
LDFLAGS		= -L/opt/ti/msp430_gcc/include

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as -mcpu=msp430 --traditional-format -mP

all: button.elf libLcd.a

libLcd.a: lcdutils.o lcddraw.o
	$(AR) crs $@ $^

lcddraw.o: lcddraw.c lcddraw.h lcdutils.h
lcdutils.o: lcdutils.c lcdutils.h

intall: libLcd.a
	mkdir -p ../h ../lib
	mv $^ ../lib
	cp *.h ../h

#additional rules for files
button.elf: ${COMMON_OBJECTS} p2_interrupt_handler.o wdInterruptHandler.o switches.o states.o led.o buzzer.o main.o libLcd.a ../lib/libTimer.a 
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: button.elf
	msp430loader.sh button.elf

clean:
	rm -f *.o *.elf *~ *# libLcd.a

main.c: buzzer.h switches.h

buzzer.c: buzzer.h notes.h

led.o: led.c led.h

states: states.c states.h

wdInterruptHandler.o: states.h


