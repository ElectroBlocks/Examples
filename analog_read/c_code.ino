// Initialise the program settings and configurations
void setup() {
   pinMode(A0, INPUT); // Configures defined pin as an input
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  if (((double)analogRead(A0) > 100)) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
}
