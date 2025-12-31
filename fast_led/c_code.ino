struct RGB {
    double red;
    double green;
    double blue;
};

#include <FastLED.h>  // Includes the FastLED library for controlling LED strips
#define NUM_LEDS 30 // Defines the number of LEDs in the strip
#define DATA_PIN A0 // Creates an array to hold the LED colors
CRGB leds[NUM_LEDS]; // Creates an array to hold the LED colors

double i = 0;

// Initialise the program settings and configurations
void setup() {

   // Initializes the LED strip
   FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);
   // Sets the brightness of the LEDs
   FastLED.setBrightness(10);

}

// The void loop function runs over and over again forever.
void loop() {
  // Set all Colors for led strip
  setFastLEDColor(1,{255, 8, 206});
  setFastLEDColor(2,{0, 0, 0});
  setFastLEDColor(3,{0, 0, 0});
  setFastLEDColor(4,{0, 0, 0});
  setFastLEDColor(5,{0, 0, 0});
  setFastLEDColor(6,{0, 0, 0});
  setFastLEDColor(7,{0, 0, 0});
  setFastLEDColor(8,{0, 0, 0});
  setFastLEDColor(9,{0, 0, 0});
  setFastLEDColor(10,{0, 0, 0});
  setFastLEDColor(11,{0, 0, 0});
  setFastLEDColor(12,{237, 0, 162});
  setFastLEDColor(13,{0, 0, 0});
  setFastLEDColor(14,{0, 0, 0});
  setFastLEDColor(15,{0, 0, 0});
  setFastLEDColor(16,{0, 0, 0});
  setFastLEDColor(17,{0, 0, 0});
  setFastLEDColor(18,{0, 0, 0});
  setFastLEDColor(19,{0, 0, 0});
  setFastLEDColor(20,{0, 0, 0});
  setFastLEDColor(21,{0, 0, 0});
  setFastLEDColor(22,{0, 0, 0});
  setFastLEDColor(23,{0, 0, 0});
  setFastLEDColor(24,{0, 0, 0});
  setFastLEDColor(25,{252, 42, 5});
  setFastLEDColor(26,{0, 0, 0});
  setFastLEDColor(27,{0, 0, 0});
  setFastLEDColor(28,{0, 0, 0});
  setFastLEDColor(29,{0, 0, 0});
  setFastLEDColor(30,{255, 51, 0});
  // End of setting all the colors for the led strip.

  FastLED.show(); // Sets the color the led strip.
  delay(2000); // Wait for the given/defined milliseconds.
  for (i = 1; i <= 30; i += 1) {
    setFastLEDColor(i,{ 255, 0, 255});

  }
  FastLED.show(); // Sets the color the led strip.
  delay(2000); // Wait for the given/defined milliseconds.
}


// Sets the color of a specific LED at the given position
void setFastLEDColor(int pos, struct RGB color) {
    pos = pos <= 0 ? 0 : pos; // Ensures the position is not negative
    pos = pos >= 1 ? pos - 1 : pos;  // Adjusts position to fit within the array bounds
    leds[pos].setRGB((int)color.red, (int)color.green, (int)color.blue); // Sets the LED color
}
