
double i = 0;



// Initialise the program settings and configurations
void setup() {
   pinMode(8, OUTPUT);  // Configures led pin as an output
   pinMode(9, OUTPUT); // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  digitalWrite(8, HIGH); // Set defined pin to HIGH (turn it on).
  delay(1000); // Wait for the given/defined milliseconds.
  digitalWrite(8, LOW); // Set defined pin to LOW (turn it off).
  delay(1000); // Wait for the given/defined milliseconds.
  for (i = 0; i <= 100; i += 5) {
    analogWrite(9, i);
    delay(100); // Wait for the given/defined milliseconds.

  }
  for (i = 100; i >= 0; i -= 5) {
    analogWrite(9, i);
    delay(100); // Wait for the given/defined milliseconds.

  }
  delay(1000); // Wait for the given/defined milliseconds.
}
