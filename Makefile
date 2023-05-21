default:
	avr-gcc -Os -DF_CPU=16000000UL -mmcu=atmega328p -c -o Blink.o Blink.c
	avr-gcc -o Blink.bin Blink.o
	avr-objcopy -O ihex -R .eeprom Blink.bin Blink.hex
	avrdude -F -V -c arduino -p ATMEGA328P -P /dev/ttyUSB0 -b 115200 -U flash:w:Blink.hex