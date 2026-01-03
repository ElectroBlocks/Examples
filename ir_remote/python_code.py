#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_ir_remote(2) # IR Remote Config
eb.digital_write_config(8)
eb.digital_write_config(7)



while True:
  if eb.ir_remote_has_sensed_code():
    if (eb.ir_remote_get_code() == 70):
      eb.digital_write(8, 1) # Turns the led on

    if (eb.ir_remote_get_code() == 69):
      eb.digital_write(7, 1) # Turns the led on


  time.sleep(1) # Wait for the given/defined seconds.
