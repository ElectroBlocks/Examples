#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
i = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.digital_write_config(8)
eb.analog_write_config(9)


while True:
  eb.digital_write(8, 1) # Turns the led on
  time.sleep(1) # Wait for the given/defined seconds.
  eb.digital_write(8, 0) # Turns the led off
  time.sleep(1) # Wait for the given/defined seconds.
  for i in range(0, 101, 5):
    eb.analog_write(9, i)
    time.sleep(0.1) # Wait for the given/defined seconds.
  for i in range(100, -1, -5):
    eb.analog_write(9, i)
    time.sleep(0.1) # Wait for the given/defined seconds.
  time.sleep(1) # Wait for the given/defined seconds.
