#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_lcd(4, 20, 63) # Configures the LCD Screen pins



while True:
  eb.lcd_clear() #clear screen
  eb.lcd_print(0, 0, "Hello") # Print the first row text on the LCD screen
  eb.lcd_print(1, 0, "  World") # Print the second row text on the LCD screen
  eb.lcd_print(2, 0, " Test") # Print the third row text on the LCD screen
  eb.lcd_print(3, 0, " .# moo #- ") # Print the fourth row text on the LCD screen
  time.sleep(3) # Wait for 3 seconds
  eb.lcd_clear() # clear screen
  time.sleep(0.2) # Wait for the given/defined seconds.
  eb.lcd_print(0, 0, "Hi") # Print a message on the LCD screen at specified row and column
  for i in range(1, 18 + 1):
    eb.lcd_scrollright()
    time.sleep(0.2) # Wait for the given/defined seconds.
  for i2 in range(1, 18 + 1):
    eb.lcd_scrollleft()
    time.sleep(0.2) # Wait for the given/defined seconds.
  eb.lcd_clear() # Clear the LCD screen
  eb.lcd_blink_curor(3, 9, True) # Turn on the blink.
  time.sleep(1) # Wait for the given/defined seconds.
  eb.lcd_blink_curor(3, 9, False) # Turn off the blink.
  time.sleep(1) # Wait for the given/defined seconds.
  eb.lcd_toggle_backlight(False) # Turn off the LCD backlight
  time.sleep(1) # Wait for the given/defined seconds.
  eb.lcd_toggle_backlight(True) # Turn on the LCD backlight
  time.sleep(1) # Wait for the given/defined seconds.
