#include <avr/io.h>
#include <util/delay.h>

// Set the selected pin as output (D8 ~ D13)
#define pinBOut(pin)    DDRB |= (0x01 << pin)

// Sends +5V to the selected pin
#define pinBHigh(pin)    PORTB |= (0x01 << pin)

// Sends 0V to the selected pin
#define pinBLow(pin)    PORTB &= ~(0x01 << pin)

// Inputs the given delay in microseconds 
#define delay(ms)    _delay_ms(ms)

int main(void){
	// Set the pin D13 to output
	pinBOut(5);

	// Blinks the built-in led each second
	for(int i = 0; i == 0;){
		pinBHigh(5);
		delay(1000);
		pinBLow(5);
		delay(1000);
	}
}