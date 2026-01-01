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
int simple_loop_variable = 0;

double i = 0;



// Initialise the program settings and configurations
void setup() {

}

// The void loop function runs over and over again forever.
void loop() {
  for (simple_loop_variable = 1; simple_loop_variable <= 3; simple_loop_variable += 1) {

    developer_ledmatrix_image[0] = B00000000;
    developer_ledmatrix_image[1] = B01100110;
    developer_ledmatrix_image[2] = B01100110;
    developer_ledmatrix_image[3] = B00000000;
    developer_ledmatrix_image[4] = B00011000;
    developer_ledmatrix_image[5] = B00000000;
    developer_ledmatrix_image[6] = B10001111;
    developer_ledmatrix_image[7] = B00111100;
    lm.setImage(developer_ledmatrix_image); // Turns on the leds

    delay(200); // Wait for the given/defined milliseconds.

    developer_ledmatrix_image[0] = B00000000;
    developer_ledmatrix_image[1] = B01100000;
    developer_ledmatrix_image[2] = B01100110;
    developer_ledmatrix_image[3] = B00000000;
    developer_ledmatrix_image[4] = B00011000;
    developer_ledmatrix_image[5] = B00000000;
    developer_ledmatrix_image[6] = B11110001;
    developer_ledmatrix_image[7] = B00111100;
    lm.setImage(developer_ledmatrix_image); // Turns on the leds

    delay(200); // Wait for the given/defined milliseconds.
  }

  developer_ledmatrix_image[0] = B00000000;
  developer_ledmatrix_image[1] = B00000000;
  developer_ledmatrix_image[2] = B00000000;
  developer_ledmatrix_image[3] = B00000000;
  developer_ledmatrix_image[4] = B00000000;
  developer_ledmatrix_image[5] = B00000000;
  developer_ledmatrix_image[6] = B00000000;
  developer_ledmatrix_image[7] = B00000000;
  lm.setImage(developer_ledmatrix_image); // Turns on the leds

  for (i = 1; i <= 8; i += 1) {

    lm.setPixel(i, i, true); // change one pixel in the buffer.
    lm.setImage(); // changes the pixels on the device

    delay(100); // Wait for the given/defined milliseconds.

  }
  for (i = 8; i >= 1; i -= 1) {

    lm.setPixel(i, i, false); // change one pixel in the buffer.
    lm.setImage(); // changes the pixels on the device

    delay(100); // Wait for the given/defined milliseconds.

  }
  delay(1000); // Wait for the given/defined milliseconds.
}
