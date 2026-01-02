#Import ElectroBlocks library
from electroblocks import ElectroBlocks

# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.analog_read_config('A0') # Set up analog read for pin A0.
eb.digital_write_config(13)



while True:
  if (eb.analog_read('A0') > 100):
    eb.digital_write(13, 1) # Turns the led on
  else:
    eb.digital_write(13, 0) # Turns the led off
