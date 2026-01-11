String serialMessageDEV = "";
boolean stopDebugging = false;

double num = 0;



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  num = 12.5;
  Serial.println((double2string(((double)round(3.1)), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println((double2string(((double)ceil(3.1)), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println((double2string(((double)floor(3.1)), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println((double2string(((double)round(num)), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println((double2string(((double)ceil(num)), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println((double2string(((double)floor(num)), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  delay(10000); // Wait for the given/defined milliseconds.
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
