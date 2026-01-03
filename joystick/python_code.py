#Import ElectroBlocks library
from electroblocks import ElectroBlocks

# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_joystick("A1", "A3", 9) # Configures the joystick
eb.digital_write_config(7)
eb.digital_write_config(8)
eb.digital_write_config(13)



while True:
  if eb.is_joystick_button_pressed():
    eb.digital_write(7, 1) # Turns the led on
  else:
    eb.digital_write(7, 0) # Turns the led off

  if (eb.joystick_angle() < 100):
    eb.digital_write(8, 0) # Turns the led off

  if (eb.joystick_angle() > 100):
    eb.digital_write(8, 1) # Turns the led on

  if eb.is_joystick_engaged():
    eb.digital_write(13, 1) # Turns the led on
  else:
    eb.digital_write(13, 0) # Turns the led off
