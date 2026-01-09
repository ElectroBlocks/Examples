#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
full = ""


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  full = "abc"
  if (len("") == 0):
    print("works")
    time.sleep(2) # Wait for the given/defined seconds.

  if (len(full) == 0):
    print("not working")
    time.sleep(2) # Wait for the given/defined seconds.
