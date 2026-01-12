// This a wrapper library on LedControl that allows us to rotate for breadboards
#include "LedMatrix.h";

LedMatrix lm(10, 12, 11, LedMatrix::R0, true);
byte developer_ledmatrix_image[8] = {
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000,
    B00000000
};

double x = 0;

double y = 0;

boolean leds[8];



// Initialise the program settings and configurations
void setup() {
  leds[zeroIndexAdjustNumber(1)] = true;
  leds[zeroIndexAdjustNumber(2)] = true;
  leds[zeroIndexAdjustNumber(3)] = true;
  leds[zeroIndexAdjustNumber(4)] = false;
  leds[zeroIndexAdjustNumber(5)] = false;
  leds[zeroIndexAdjustNumber(6)] = false;
  leds[zeroIndexAdjustNumber(7)] = true;
  leds[zeroIndexAdjustNumber(8)] = true;
}

// The void loop function runs over and over again forever.
void loop() {
  for (x = 1; x <= 8; x += 1) {
    for (y = 1; y <= 10; y += 1) {
      if (leds[zeroIndexAdjustNumber(x)]) {

        lm.setPixel(x, y, true); // change one pixel in the buffer.
        lm.setImage(); // changes the pixels on the device

      } else {

        lm.setPixel(x, y, false); // change one pixel in the buffer.
        lm.setImage(); // changes the pixels on the device

      }

    }

  }
  delay(3000); // Wait for the given/defined milliseconds.
  for (x = 1; x <= 8; x += 1) {
    for (y = 1; y <= 10; y += 1) {
      if (leds[zeroIndexAdjustNumber(y)]) {

        lm.setPixel(x, y, true); // change one pixel in the buffer.
        lm.setImage(); // changes the pixels on the device

      } else {

        lm.setPixel(x, y, false); // change one pixel in the buffer.
        lm.setImage(); // changes the pixels on the device

      }

    }

  }
  delay(3000); // Wait for the given/defined milliseconds.
}


int zeroIndexAdjustNumber(double pos) {
	pos = pos <= 0 ? 0 : pos;
	return pos >= 1 ? pos - 1 : pos;
}
