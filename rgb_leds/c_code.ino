struct RGB {
    double red;
    double green;
    double blue;
};
int BLUE_PIN_1 = 9; // Define pin number for the blue LED
int RED_PIN_1 = 11; // Define pin number for the red LED
int GREEN_PIN_1 = 10; // Define pin number for the green LED



// Initialise the program settings and configurations
void setup() {
   pinMode(RED_PIN_1, OUTPUT); // Set the red LED pin as an output
   pinMode(GREEN_PIN_1, OUTPUT); // Set the green LED pin as an output
   pinMode(BLUE_PIN_1, OUTPUT); // Set the blue LED pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  setLedColor({255, 0, 0}); // Set the RGB LED colour.
  delay(2000); // Wait for the given/defined milliseconds.
  setLedColor({0, 255, 0}); // Set the RGB LED colour.
  delay(2000); // Wait for the given/defined milliseconds.
  setLedColor({0, 0, 255}); // Set the RGB LED colour.
  delay(2000); // Wait for the given/defined milliseconds.
  setLedColor({0, 0, 0}); // Set the RGB LED colour.
  delay(2000); // Wait for the given/defined milliseconds.
  setLedColor({ 255, 94, 0}); // Set the RGB LED colour.
  delay(2000); // Wait for the given/defined milliseconds.
}

// Set the brightness of each LED based on the RGB color values provided
void setLedColor(RGB color) {
    analogWrite(RED_PIN_1, color.red);  // Adjust the red LED brightness
    analogWrite(GREEN_PIN_1, color.green); // Adjust the green LED brightness
    analogWrite(BLUE_PIN_1, color.blue); // Adjust the blue LED brightness
}
