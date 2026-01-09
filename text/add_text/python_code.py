#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
test = ""

local = ""


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  local = "part_one"
  test = (str(local) + " " + "part_two")
  print(test)
  time.sleep(2) # Wait for the given/defined seconds.
