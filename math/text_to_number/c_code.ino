String serialMessageDEV = "";

String example = "";



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  example = String("3");
  if ((parseDouble(String("5.35")) == 5.35)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
  } else {
    Serial.println(String("No Working"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  if ((parseDouble(example) == 3)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
  } else {
    Serial.println(String("No Working"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  example = String("3.5");
  if ((parseDouble(example) == 3.5)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
  } else {
    Serial.println(String("No Working"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  delay(2000); // Wait for the given/defined milliseconds.
}


double parseDouble(String num) {
	 // Use num.toDouble() instead of this.  Doing this because of arduino is compiling on a linux server.
	char str[40];
	num.toCharArray(str, num.length() + 1);
	return atof(str);
}
