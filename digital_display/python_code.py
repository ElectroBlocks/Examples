#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library

# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_digital_display(11, 10)

while True:
  eb.set_digital_display(True, "Toot")
  time.sleep(1) # Wait for the given/defined seconds.
  eb.set_digital_display(False, "Loon")
  time.sleep(1) # Wait for the given/defined seconds.
