#Import ElectroBlocks library
from electroblocks import ElectroBlocks

# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_motion_sensor(10, 11) # Setup Motion Sensor. EchoPin = 10 TrigPin = 11
eb.digital_write_config(13)



while True:
  if (eb.motion_distance_cm() < (2 * 3)):
    eb.digital_write(13, 1) # Turns the led on
  else:
    eb.digital_write(13, 0) # Turns the led off
