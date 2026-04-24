// Define the delay time as a constant for better practice
int blinkTime = 400;

void setup() {
  // Initialize pins as outputs
  pinMode(LED_BUILTIN, OUTPUT); // Usually Pin 13
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // LED_BUILTIN / Pin 13
  digitalWrite(13, HIGH);
  delay(blinkTime);
  digitalWrite(13, LOW);
  delay(blinkTime);

  // Pin 12
  digitalWrite(12, HIGH);
  delay(blinkTime);
  digitalWrite(12, LOW);
  delay(blinkTime);

  // Pin 8
  digitalWrite(8, HIGH);
  delay(blinkTime);
  digitalWrite(8, LOW);
  delay(blinkTime);
}
