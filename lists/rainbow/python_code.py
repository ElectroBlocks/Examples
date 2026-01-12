#Import ElectroBlocks library
from electroblocks import ElectroBlocks

from dataclasses import dataclass
import time # imports the time library


@dataclass
class RGB:
  red: float
  green: float
  blue: float

# Function Code

def set_item_in_list(lst, pos, value, fill=None):
    """
    Sets a 1-based position in a list.
    Grows the list if needed using the fill value.
    """
    idx = max(0, int(pos) - 1)

    while idx >= len(lst):
        lst.append(fill)

    lst[idx] = value


def get_item_from_list(lst, pos, default=None):
    """
    Gets a 1-based position from a list.
    Returns default if the position is out of range or the list is empty.
    """
    idx = max(0, int(pos) - 1)
    if 0 <= idx < len(lst):
        return lst[idx]
    return default



# Variable Declaration
j = 0

i = 0

k = 0

tempcolor = RGB(0, 0, 0)

colors = []


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_rgb_strip("3", 30, "GRB", 10) # Configures the NEOPIXEL strip


def setup():
  tempcolor = RGB(255, 0, 255)
  for i in range(1, 7, 1):
    set_item_in_list(colors, i, RGB(255, 0, 72), RGB(0,0,0))
  for i in range(7, 13, 1):
    set_item_in_list(colors, i, RGB(255, 255, 0), RGB(0,0,0))
  for i in range(13, 19, 1):
    set_item_in_list(colors, i, RGB(0, 255, 30), RGB(0,0,0))
  for i in range(19, 25, 1):
    set_item_in_list(colors, i, RGB(0, 72, 255), RGB(0,0,0))
  for i in range(25, 31, 1):
    set_item_in_list(colors, i, RGB(255, 0, 191), RGB(0,0,0))


# Call Setup Function to do what the arduino does. Only gets called once.
setup()


while True:
  for j in range(1, 31, 1):
    developer_temp_color = get_item_from_list(colors, j, RGB(0,0,0)) # create a variable to store the color
    eb.rgb_strip_set_color(j, developer_temp_color.red, developer_temp_color.green, developer_temp_color.blue)
  eb.rgb_strip_show_all() # Sets the color the led strip.
  time.sleep(0.2) # Wait for the given/defined seconds.
  tempcolor = get_item_from_list(colors, 30, RGB(0,0,0))
  for k in range(30, 1, -1):
    set_item_in_list(colors, k, get_item_from_list(colors, (k - 1), RGB(0,0,0)), RGB(0,0,0))
  set_item_in_list(colors, 0, tempcolor, RGB(0,0,0))
