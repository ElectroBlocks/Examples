// Initialise the program settings and configurations
void setup() {
   pinMode(10, INPUT); // Set pin 10 as input for the echo signal
   pinMode(11, OUTPUT); // Set pin 11 as output for the trigger signal
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  if ((ultraSonicDistance() < (2 * 3))) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
}

// This is function to Trigger the ultrasonic sensor and measure the distance
double ultraSonicDistance() {
  digitalWrite(11, LOW); // Set the trigger pin to low
  delayMicroseconds(2); // Wait for 2 microseconds
  digitalWrite(11, HIGH); // set the trigger pin to high
  delayMicroseconds(10); // Wait for 10 microseconds
  digitalWrite(11, LOW); // Set the trigger pin to low
  long microseconds = pulseIn(10, HIGH); // Measure the time for the echo to retur
  return (double)(microseconds / 29 / 2);  // Convert the time to distance in cm
}
