#Import ElectroBlocks library
from electroblocks import ElectroBlocks

from dataclasses import dataclass
import time # imports the time library


@dataclass
class RGB:
  red: float
  green: float
  blue: float


# Variable Declaration
num = 0

name = ""

awesome = False

deep_blue = RGB(0, 0, 0)


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_rgbled(11, 10, 9) # Configures the RGB LED pins
eb.digital_write_config(13)



while True:
  deep_blue = RGB(0, 89, 255)
  awesome = True
  name = "Robo1000"
  num = 33
  if (num == 33):
    eb.digital_write(13, 1) # Turns the led on

  time.sleep(1) # Wait for the given/defined seconds.
  print(("Hi, " + str(name)))
  time.sleep(1) # Wait for the given/defined seconds.
  if awesome:
    eb.digital_write(13, 0) # Turns the led off

  dev_color = deep_blue # Create the RGB color object.
  eb.set_color_rgbled(dev_color.red, dev_color.green, dev_color.blue) # Set the RGB LED color on the Arduino.
  time.sleep(1) # Wait for the given/defined seconds.
