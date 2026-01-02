
// Initialise the program settings and configurations
void setup() {
   // button pin uses internal pull-up resistor.  LOW mean on and HIGH means off.
   pinMode(7, INPUT_PULLUP);
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  if (!(digitalRead(7) == LOW)) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
}