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
i = 0

j = 0

nums = []

animals = []


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class


def setup():
  for i in range(1, 6, 1):
    set_item_in_list(nums, i, (i * 2), -1)
  set_item_in_list(animals, 1, "Fish", "")
  set_item_in_list(animals, 2, "Cats", "")
  set_item_in_list(animals, 3, "Mice", "")


# Call Setup Function to do what the arduino does. Only gets called once.
setup()


while True:
  for j in range(1, 4, 1):
    print(get_item_from_list(animals, j, ""))
    time.sleep(0.2) # Wait for the given/defined seconds.
  for j in range(1, 6, 1):
    print(f"{get_item_from_list(nums, j, -1):.2f}")
    time.sleep(0.2) # Wait for the given/defined seconds.
  time.sleep(20) # Wait for the given/defined seconds.
