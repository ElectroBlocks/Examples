String serialMessageDEV = "";



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  print_hi();
  blink();
}

void blink() {
  digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  delay(200); // Wait for the given/defined milliseconds.
  digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  delay(200); // Wait for the given/defined milliseconds.
}
void print_hi() {
  Serial.println(String("Hi"));
  Serial.flush(); // Waits until outgoing buffer is empty
}
