#include <TM1637.h>  // Includes the library for the TM1637 7-segment display
const byte PIN_CLK = 10;   // Defines CLK pin for the display
const byte PIN_DIO = 11;   // Defines DIO pin for the display
// Initializes the 7-segment display with CLK and DIO pins
TM1637    tm(PIN_CLK, PIN_DIO);



// Initialise the program settings and configurations
void setup() {
  tm.begin();
  tm.setBrightness(100);
  tm.clearScreen();

}

// The void loop function runs over and over again forever.
void loop() {

  tm.clearScreen();
  tm.colonOn();
  tm.display(String("Toot"));
  delay(1000); // Wait for the given/defined milliseconds.

  tm.clearScreen();
  tm.colonOff();
  tm.display(String("Loon"));
  delay(1000); // Wait for the given/defined milliseconds.
}
