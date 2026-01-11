#Import ElectroBlocks library
from electroblocks import ElectroBlocks

from dataclasses import dataclass

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
nums = []

texts = []

bools = []

colors = []


# Initialise the program settings and configurations
# eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
# eb.config_rgb_strip("3", 30, "RGB", 10) # Configures the NEOPIXEL strip



while True:
  set_item_in_list(nums, 3, 300, -1)
  set_item_in_list(texts, 1, "abc", "")
  set_item_in_list(bools, 1, True, False)
  set_item_in_list(colors, 1, RGB(255, 0, 255), RGB(0,0,0))
  developer_temp_color = get_item_from_list(colors, 1, RGB(0,0,0)) # create a variable to store the color
  # eb.rgb_strip_set_color(1, developer_temp_color.red, developer_temp_color.green, developer_temp_color.blue)
  if get_item_from_list(bools, 1, False):
    print("Hi")

  print(get_item_from_list(texts, 1, ""))
  if (get_item_from_list(nums, 1, -1) == 3):
    print("Hi")
