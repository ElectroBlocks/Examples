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
