#include <stdint.h>

void setup() {
  // Use pinMode for now to ensure the hardware is ready
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  
  // Start with Red ON and Blue OFF
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
}

void loop() {
  // Bit 5 is Pin 13, Bit 4 is Pin 12
  
  // XOR (^) Toggles the bit. 
  // If bit 5 is 1, (1 ^ 1) becomes 0.
  // If bit 5 is 0, (0 ^ 1) becomes 1.
  
  PORTB ^= (1 << 5); // Toggle Red
  PORTB ^= (1 << 4); // Toggle Blue
  
  delay(1000); 
}