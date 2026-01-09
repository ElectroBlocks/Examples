String serialMessageDEV = "";

String sound = "";



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  sound = String("moo");
  if ((textLength(String("abc")) == 3)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
    delay(2000); // Wait for the given/defined milliseconds.
  }
  if ((textLength(sound) == 3)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
    delay(2000); // Wait for the given/defined milliseconds.
  }
}

double textLength(String str) {
	 return (double)str.length();
}
