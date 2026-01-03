#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_digital_read(7) # Set up digital read for pin 7.
eb.config_digital_read(8) # Set up digital read for pin 8.
eb.digital_write_config(3)
eb.digital_write_config(9)



while True:
  if eb.digital_read(8) or eb.digital_read(7):
    eb.digital_write(3, 1) # Turns the led on
  else:
    eb.digital_write(3, 0) # Turns the led off

  if eb.digital_read(8) and eb.digital_read(7):
    eb.digital_write(9, 1) # Turns the led on
  else:
    eb.digital_write(9, 0) # Turns the led off

  time.sleep(0.2) # Wait for the given/defined seconds.
