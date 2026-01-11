String serialMessageDEV = "";

double num = 0;



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  num = 33;
  if (((int)3 % 2 == 0)) {
    Serial.println(String("Should Skip"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  if (((int)num % 2 == 1)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  if ((3 > 0)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  if ((num < 0)) {
    Serial.println(String("Should Skip"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  if (((int)3 % (int)12 == 0)) {
    Serial.println(String("Works"));
    Serial.flush(); // Waits until outgoing buffer is empty
  }
  delay(2000); // Wait for the given/defined milliseconds.
}
