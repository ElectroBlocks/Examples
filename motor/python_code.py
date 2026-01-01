#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_motor(9, 8, 7, 3, 5, 4)



while True:
  eb.move_motor(1, 150, "clockwise")
  time.sleep(3) # Wait for the given/defined seconds.
  eb.stop_motor(1)
  time.sleep(3) # Wait for the given/defined seconds.
  eb.move_motor(1, 150, "anti_clockwise")
  time.sleep(3) # Wait for the given/defined seconds.
  eb.stop_motor(1)
  time.sleep(3) # Wait for the given/defined seconds.
  eb.move_motor(2, 150, "clockwise")
  time.sleep(3) # Wait for the given/defined seconds.
  eb.stop_motor(2)
  time.sleep(3) # Wait for the given/defined seconds.
  eb.move_motor(2, 150, "anti_clockwise")
  time.sleep(3) # Wait for the given/defined seconds.
  eb.stop_motor(2)
  time.sleep(3) # Wait for the given/defined seconds.
