String serialMessageDEV = "";

String test = "";

String local = "";



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  local = String("part_one");
  test = local + String(" ") + String("part_two");
  Serial.println(test);
  Serial.flush(); // Waits until outgoing buffer is empty
  delay(2000); // Wait for the given/defined milliseconds.
}
