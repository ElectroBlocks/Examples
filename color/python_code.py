#Import ElectroBlocks library
from electroblocks import ElectroBlocks

from dataclasses import dataclass
import random
import time # imports the time library


@dataclass
class RGB:
  red: float
  green: float
  blue: float


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_rgbled(11, 10, 9) # Configures the RGB LED pins



while True:
  dev_color = RGB(random.randint(0, 255), random.randint(0,255), random.randint(0,255)) # Create the RGB color object.
  eb.set_color_rgbled(dev_color.red, dev_color.green, dev_color.blue) # Set the RGB LED color on the Arduino.
  time.sleep(1) # Wait for the given/defined seconds.
  dev_color = RGB(100, 0, 100) # Create the RGB color object.
  eb.set_color_rgbled(dev_color.red, dev_color.green, dev_color.blue) # Set the RGB LED color on the Arduino.
  time.sleep(1) # Wait for the given/defined seconds.
  dev_color = RGB(255, 0, 51) # Create the RGB color object.
  eb.set_color_rgbled(dev_color.red, dev_color.green, dev_color.blue) # Set the RGB LED color on the Arduino.
  time.sleep(1) # Wait for the given/defined seconds.
