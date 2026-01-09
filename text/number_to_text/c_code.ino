String serialMessageDEV = "";
boolean stopDebugging = false;

double large_num = 0;



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  large_num = 4032.3333;
  Serial.println((double2string(large_num, 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println((double2string(123.234234, 3)));
  Serial.flush(); // Waits until outgoing buffer is empty
  delay(3000); // Wait for the given/defined milliseconds.
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
