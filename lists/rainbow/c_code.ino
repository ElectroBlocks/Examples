struct RGB {
    double red;
    double green;
    double blue;
};

#include <FastLED.h>  // Includes the FastLED library for controlling LED strips
#define NUM_LEDS 30 // Defines the number of LEDs in the strip
#define DATA_PIN 3 // Creates an array to hold the LED colors
CRGB leds[NUM_LEDS]; // Creates an array to hold the LED colors



double j = 0;

double i = 0;

double k = 0;

struct RGB tempcolor = {0, 0, 0};

struct RGB colors[30];



// Initialise the program settings and configurations
void setup() {

   // Initializes the LED strip
   FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);
   // Sets the brightness of the LEDs
   FastLED.setBrightness(10);
  tempcolor = { 255, 0, 255};
  for (i = 1; i <= 6; i += 1) {
    colors[zeroIndexAdjustNumber(i)] = { 255, 0, 72};

  }
  for (i = 7; i <= 12; i += 1) {
    colors[zeroIndexAdjustNumber(i)] = { 255, 255, 0};

  }
  for (i = 13; i <= 18; i += 1) {
    colors[zeroIndexAdjustNumber(i)] = { 0, 255, 30};

  }
  for (i = 19; i <= 24; i += 1) {
    colors[zeroIndexAdjustNumber(i)] = { 0, 72, 255};

  }
  for (i = 25; i <= 30; i += 1) {
    colors[zeroIndexAdjustNumber(i)] = { 255, 0, 191};

  }
}

// The void loop function runs over and over again forever.
void loop() {
  for (j = 1; j <= 30; j += 1) {
    setFastLEDColor(j,colors[zeroIndexAdjustNumber(j)]);

  }
  FastLED.show(); // Sets the color the led strip.
  delay(200); // Wait for the given/defined milliseconds.
  tempcolor = colors[zeroIndexAdjustNumber(30)];
  for (k = 30; k >= 2; k -= 1) {
    colors[zeroIndexAdjustNumber(k)] = colors[zeroIndexAdjustNumber((k - 1))];

  }
  colors[zeroIndexAdjustNumber(0)] = tempcolor;
}


// Sets the color of a specific LED at the given position
void setFastLEDColor(int pos, struct RGB color) {
    pos = pos <= 0 ? 0 : pos; // Ensures the position is not negative
    pos = pos >= 1 ? pos - 1 : pos;  // Adjusts position to fit within the array bounds
    leds[pos].setRGB((int)color.red, (int)color.green, (int)color.blue); // Sets the LED color
}


int zeroIndexAdjustNumber(double pos) {
	pos = pos <= 0 ? 0 : pos;
	return pos >= 1 ? pos - 1 : pos;
}
