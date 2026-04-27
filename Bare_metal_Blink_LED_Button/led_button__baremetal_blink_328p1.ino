#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    // 1. Set Pin 13 (PB5) as OUTPUT
    DDRB |= (1 << 5);

    // 2. Set Pin 2 (PD2) as INPUT
    // To set a bit to 0, we use AND-NOT
    DDRD &= ~(1 << 2);

    // 3. Enable INTERNAL Pull-up Resistor for Pin 2
    // On AVR, writing a 1 to a PORT register when it's an INPUT 
    // turns on a built-in resistor inside the chip!
    PORTD |= (1 << 2);

    while(1) {
        // 4. Check if the button is pressed
        // Since it's a pull-up, PIND bit 2 will be 1 by default, 
        // and 0 when the button is pressed.
        if ( !(PIND & (1 << 2)) ) { 
            PORTB |= (1 << 5);  // LED ON
        } else {
            PORTB &= ~(1 << 5); // LED OFF
        }
    }
}