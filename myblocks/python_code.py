#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library

# Function Code

def blink():
  eb.digital_write(13, 1) # Turns the led on
  time.sleep(0.2) # Wait for the given/defined seconds.
  eb.digital_write(13, 0) # Turns the led off
  time.sleep(0.2) # Wait for the given/defined seconds.


def print_hi():
  print("Hi")



# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.digital_write_config(13)



while True:
  print_hi()
  blink()
