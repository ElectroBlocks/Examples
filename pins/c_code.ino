
double i = 0;



// Initialise the program settings and configurations
void setup() {
   pinMode(7, OUTPUT);  // Configures led pin as an output
   pinMode(11, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  digitalWrite(7, HIGH);
  delay(1000); // Wait for the given/defined milliseconds.
  digitalWrite(7, LOW);
  delay(1000); // Wait for the given/defined milliseconds.
  for (i = 0; i <= 200; i += 5) {
    analogWrite(11, i);
    delay(50); // Wait for the given/defined milliseconds.

  }
  for (i = 200; i >= 0; i -= 5) {
    analogWrite(11, i);
    delay(50); // Wait for the given/defined milliseconds.

  }
  delay(5000); // Wait for the given/defined milliseconds.
}
