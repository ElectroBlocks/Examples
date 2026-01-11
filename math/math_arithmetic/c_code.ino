String serialMessageDEV = "";
boolean stopDebugging = false;

double i = 0;

double j = 0;

double number = 0;



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  number = 33;
  for (i = 1; i <= 10; i += 1) {
    for (j = 1; j <= 10; j += 1) {
      number = (1 + 1);
      Serial.println((double2string(number, 2)));
      Serial.flush(); // Waits until outgoing buffer is empty
      number = (i + j);
      Serial.println((double2string(number, 2)));
      Serial.flush(); // Waits until outgoing buffer is empty
      number = (i - j);
      Serial.println((double2string(number, 2)));
      Serial.flush(); // Waits until outgoing buffer is empty
      number = (i * j);
      Serial.println((double2string(number, 2)));
      Serial.flush(); // Waits until outgoing buffer is empty
      number = (i / j);
      Serial.println((double2string(number, 2)));
      Serial.flush(); // Waits until outgoing buffer is empty
      number = (pow(i, j));
      Serial.println((double2string(number, 2)));
      Serial.flush(); // Waits until outgoing buffer is empty
      delay(200); // Wait for the given/defined milliseconds.
      Serial.println(String("---------------------------------------"));
      Serial.flush(); // Waits until outgoing buffer is empty

    }

  }
  Serial.println(String("DONE"));
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
