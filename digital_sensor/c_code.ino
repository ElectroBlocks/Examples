// Initialise the program settings and configurations
void setup() {
   pinMode(7, INPUT); // Configures defined pin as an input
   pinMode(8, INPUT); // Configures defined pin as an input
   pinMode(3, OUTPUT);  // Configures led pin as an output
   pinMode(9, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  if (digitalRead(8) || digitalRead(7)) {
    digitalWrite(3, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(3, LOW); // Set defined pin to LOW (turn it off).
  }
  if (digitalRead(8) && digitalRead(7)) {
    digitalWrite(9, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(9, LOW); // Set defined pin to LOW (turn it off).
  }
  delay(200); // Wait for the given/defined milliseconds.
}
