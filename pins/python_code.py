#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
i = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.digital_write_config(7)
eb.analog_write_config(11)


while True:
  eb.digital_write(7, 1) # Turns the led on
  time.sleep(1) # Wait for the given/defined seconds.
  eb.digital_write(7, 0) # Turns the led off
  time.sleep(1) # Wait for the given/defined seconds.
  for i in range(0, 201, 5):
    eb.analog_write(11, i)
    time.sleep(0.05) # Wait for the given/defined seconds.
  for i in range(200, -1, -5):
    eb.analog_write(11, i)
    time.sleep(0.05) # Wait for the given/defined seconds.
  time.sleep(5) # Wait for the given/defined seconds.

  