String serialMessageDEV = "";

#define THERMISTOR_PIN  A0 // Define analog pin for the thermistor
#define BETA            3950 // The beta value of the thermistor
#define RESISTANCE      10000 // The value of the pull-down resistor (in ohms)



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);
   pinMode(A0, INPUT); // Configures the thermistor pin as an input
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  if ((readThermistor("C") > 50)) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
  if ((readThermistor("F") > 60)) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
}

float readThermistor(String returnUnit) {
  // Read the thermistor value from the analog pin
  long a = analogRead(THERMISTOR_PIN);

  // Calculate the temperature using the thermistor's equation
  float tempC = BETA / (log((1025.0 * RESISTANCE / a - RESISTANCE) / RESISTANCE) + BETA / 298.0) - 273.0;

  // Convert Celsius to Fahrenheit (optional)
  float tempF = (tempC * 1.8) + 32.0;

  // Print the Celsius temperature
  Serial.print("TempC: ");
  Serial.print(tempC); // Print Celsius temperature
  Serial.println(" °C"); // Print the unit

  // Print the Fahrenheit temperature (optional)
  Serial.print("TempF: ");
  Serial.print(tempF); // Print Fahrenheit temperature
  Serial.println(" °F"); // Print the unit

  delay(200); // Wait for 200 milliseconds before the next reading

  return returnUnit == "C" ? tempC : tempF; // Return the temperature based on the unit.
}
