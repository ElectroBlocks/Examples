String serialMessageDEV = "";
boolean stopDebugging = false;



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  Serial.println((double2string(secondsArduinoBeenOn(), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  delay(100); // Wait for the given/defined milliseconds.
}

 String double2string(double n, int ndec) {
		 String r = "";
		 int v = n;
		 r += v;     // whole number part
		 r += '.';   // decimal point
		 int i;
		 for (i = 0; i < ndec; i++) {
		     // iterate through each decimal digit for 0..ndec
		     n -= v;
		     n *= 10;
		     v = n;
		     r += v;
		 }

		 return r;
}
double secondsArduinoBeenOn() {
	return millis() / 1000.0;
}
