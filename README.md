# ElectroBlocks Examples

This repo is a list of ElectroBlocks Component Examples in Python and C.

## Setup

```bash
python -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt
```

## Digital Display

### Project File

[Project File](./digital_display/project.xml)

### Example Video

![Digital Display](./digital_display/digitial_display.gif)

### [Python Code](./digital_display/python_code.py)

```python
#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library

# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_digital_display(11, 10)

while True:
  eb.set_digital_display(True, "Toot")
  time.sleep(1) # Wait for the given/defined seconds.
  eb.set_digital_display(False, "Loon")
  time.sleep(1) # Wait for the given/defined seconds.
```

### [C Code](./digital_display/c_code.ino)
```c
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

```

## NeoPixels / FastLED / LED Strip

### Project File

[Project File](./fast_led/project.xml)

### Example of C code

![C Code Example](./fast_led/c_fastled.gif)

```c
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

```

### Example of Python Code

Notice that it runs slower because of the loop where it has to send each command to set the individual colors from the laptop / computer running python.

![Python Neopixel Example](./fast_led/python_neopixels.gif)

```python
#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


from dataclasses import dataclass

@dataclass
class RGB:
  red: float
  green: float
  blue: float


# Variable Declaration
i = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_rgb_strip("A0", 30, "GRB", 10) # Configures the NEOPIXEL strip



while True:
  eb.rgb_strip_set_all_colors([
  	(255, 8, 206),(0, 0, 0),(0, 0, 0),
  	(0, 0, 0),(0, 0, 0),(0, 0, 0),
  	(0, 0, 0),(0, 0, 0),(0, 0, 0),
  	(0, 0, 0),(0, 0, 0),(237, 0, 162),
  	(0, 0, 0),(0, 0, 0),(0, 0, 0),
  	(0, 0, 0),(0, 0, 0),(0, 0, 0),
  	(0, 0, 0),(0, 0, 0),(0, 0, 0),
  	(0, 0, 0),(0, 0, 0),(0, 0, 0),
  	(252, 42, 5),(0, 0, 0),(0, 0, 0),
  	(0, 0, 0),(0, 0, 0),(255, 51, 0)
  ])
  eb.rgb_strip_show_all() # Sets the color the led strip.
  time.sleep(2) # Wait for the given/defined seconds.
  for i in range(1, 31, 1):
    developer_temp_color = RGB(255, 0, 255) # create a variable to store the color
    eb.rgb_strip_set_color(i, developer_temp_color.red, developer_temp_color.green, developer_temp_color.blue)
  eb.rgb_strip_show_all() # Sets the color the led strip.
  time.sleep(2) # Wait for the given/defined seconds.

```