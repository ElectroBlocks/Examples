String serialMessageDEV = "";
boolean stopDebugging = false;
#define DHTPIN 2 // Define pin  for the DHT sensor data
#define DHTTYPE DHT11 // Define the type of DHT sensor.
#include <DHT.h>; // Include the DHT library for temperature and humidity sensor
DHT dht(DHTPIN, DHTTYPE); // Initialize the DHT sensor using the defined pin and type



// Initialise the program settings and configurations
void setup() {
   dht.begin(); // Initialize the DHT sensor
   Serial.begin(115200);
   Serial.setTimeout(100);
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  Serial.println((double2string((double)dht.readTemperature(), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  Serial.println((double2string((double)dht.readHumidity(), 2)));
  Serial.flush(); // Waits until outgoing buffer is empty
  if (((double)dht.readTemperature() > 20) && ((double)dht.readHumidity() > 50)) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
  delay(200); // Wait for the given/defined milliseconds.
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
