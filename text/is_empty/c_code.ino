String serialMessageDEV = "";

String full = "";



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  full = String("abc");
  if ((textLength(String("")) == 0)) {
    Serial.println(String("works"));
    Serial.flush(); // Waits until outgoing buffer is empty
    delay(2000); // Wait for the given/defined milliseconds.
  }
  if ((textLength(full) == 0)) {
    Serial.println(String("not working"));
    Serial.flush(); // Waits until outgoing buffer is empty
    delay(2000); // Wait for the given/defined milliseconds.
  }
}

double textLength(String str) {
	 return (double)str.length();
}
