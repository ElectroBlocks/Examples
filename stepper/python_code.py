#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_stepper_motor(11, 10, 9, 8, 2048, 10)



while True:
  eb.move_stepper_motor(2048)
  time.sleep(2) # Wait for the given/defined seconds.
  eb.move_stepper_motor(-2048)
  time.sleep(2) # Wait for the given/defined seconds.
