String serialMessageDEV = "";

String text = "";

String lol = "";



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  lol = String("aSf");
  Serial.println(upperCaseString(String("Blah")));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println(lowerCaseString(String("Blah")));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println(upperCaseString(lol));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println(lowerCaseString(lol));
  Serial.flush(); // Waits until outgoing buffer is empty
  delay(2000); // Wait for the given/defined milliseconds.
}


String upperCaseString(String str) {
	str.toUpperCase();
	return str;
}


String lowerCaseString(String str) {
	str.toLowerCase();
	return str;
}
