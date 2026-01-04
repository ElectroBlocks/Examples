#Import ElectroBlocks library
from electroblocks import ElectroBlocks

# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_thermistor('A0') # Set's up the thermistor.
eb.digital_write_config(13)



while True:
  if (eb.thermistor_celsius() > 50):
    eb.digital_write(13, 1) # Turns the led on
  else:
    eb.digital_write(13, 0) # Turns the led off

  if (eb.thermistor_fahrenheit() > 60):
    eb.digital_write(13, 1) # Turns the led on
  else:
    eb.digital_write(13, 0) # Turns the led off
