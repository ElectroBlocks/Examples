#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library

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
x = 0

y = 0

leds = []


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class


eb.config_led_matrix(10,11,12, True)
def setup():
  set_item_in_list(leds, 1, True, False)
  set_item_in_list(leds, 2, True, False)
  set_item_in_list(leds, 3, True, False)
  set_item_in_list(leds, 4, False, False)
  set_item_in_list(leds, 5, False, False)
  set_item_in_list(leds, 6, False, False)
  set_item_in_list(leds, 7, True, False)
  set_item_in_list(leds, 8, True, False)


# Call Setup Function to do what the arduino does. Only gets called once.
setup()


while True:
  for x in range(1, 9, 1):
    for y in range(1, 11, 1):
      if get_item_from_list(leds, x, False):
        eb.set_led_matrix_led(y, x, True)
      else:
        eb.set_led_matrix_led(y, x, False)

  time.sleep(3) # Wait for the given/defined seconds.
  for x in range(1, 9, 1):
    for y in range(1, 11, 1):
      if get_item_from_list(leds, y, False):
        eb.set_led_matrix_led(y, x, True)
      else:
        eb.set_led_matrix_led(y, x, False)

  time.sleep(3) # Wait for the given/defined seconds.
