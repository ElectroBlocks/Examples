#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library

# Function Code

def to_float(s):
    try:
        return float(s)
    except ValueError:
        return 0.0


# Variable Declaration
example = ""


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  example = "3"
  if (to_float("5.35") == 5.35):
    print("Works")
  else:
    print("No Working")

  if (to_float(example) == 3):
    print("Works")
  else:
    print("No Working")

  example = "3.5"
  if (to_float(example) == 3.5):
    print("Works")
  else:
    print("No Working")

  time.sleep(2) # Wait for the given/defined seconds.
