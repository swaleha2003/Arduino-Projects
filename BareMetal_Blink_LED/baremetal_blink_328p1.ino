#include <stdint.h>
#include <avr/io.h>    // This header defines what "PORTB" and "DDRB" mean
#include <util/delay.h> // Professional version of delay()

int main(void) {
    // 1. Set Direction: Pin 13 is Bit 5 of Port B.
    // We set it to 1 to make it an OUTPUT.
    DDRB |= (1 << 5); 

    while(1) { // The "Infinite Loop" - Bare metal programs never exit!
        
        // 2. Set Bit 5 HIGH (Voltage ON)
        PORTB |= (1 << 5);
        _delay_ms(500);

        // 3. Set Bit 5 LOW (Voltage OFF)
        // This uses the AND-NOT pattern: 
        // ~(1 << 5) creates 0b11011111. 
        // ANDing this clears ONLY bit 5.
        PORTB &= ~(1 << 5);
        _delay_ms(500);
    }

    return 0; // This line is never actually reached
}