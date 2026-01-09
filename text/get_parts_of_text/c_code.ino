String serialMessageDEV = "";

double i = 0;

String test = "";



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);

}

// The void loop function runs over and over again forever.
void loop() {
  for (i = 1; i <= 3; i += 1) {
    test = getParseValue(String("blue,red,green"), ',', i);
    Serial.println(test);
    Serial.flush(); // Waits until outgoing buffer is empty
    delay(2000); // Wait for the given/defined milliseconds.

  }
}


String getParseValue(String data, char separator, int index) {
	int found = 0;	int strIndex[] = {0, -1};
	int maxIndex = data.length()-1;
	for(int i=0; i<=maxIndex && found<=index; i++){
	    if(data.charAt(i) == separator || i == maxIndex){
	        found++;
	        strIndex[0] = strIndex[1]+1;
	        strIndex[1] = (i == maxIndex) ? i+1 : i;
	    }
	}
	return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}
