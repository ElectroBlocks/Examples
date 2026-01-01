
double i = 0;



// Initialise the program settings and configurations
void setup() {
	pinMode(9, OUTPUT);

}

// The void loop function runs over and over again forever.
void loop() {
  tone(9, 131);
  delay(200); // Wait for the given/defined milliseconds.
  for (i = 100; i <= 400; i += 10) {
    tone(9, i);
    delay(200); // Wait for the given/defined milliseconds.

  }
  noTone(9);
  delay(2000); // Wait for the given/defined milliseconds.
  tone(9, 10000);
  delay(2000); // Wait for the given/defined milliseconds.
}
