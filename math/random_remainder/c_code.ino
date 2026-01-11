String serialMessageDEV = "";
boolean stopDebugging = false;

double random2 = 0;

double remainer = 0;



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  random2 = ((double)random(1, 10));
  Serial.println((double2string(random2, 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  random2 = ((double)random(1, 100));
  Serial.println((double2string(random2, 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  remainer = ((double)((int)64 % (int)10));
  Serial.println((double2string(remainer, 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  remainer = ((double)((int)2 % (int)10));
  Serial.println((double2string(remainer, 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  delay(20000); // Wait for the given/defined milliseconds.
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
