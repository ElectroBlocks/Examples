#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
i = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class


eb.config_led_matrix(10,11,12, True)

while True:
  for i in range(1, 3 + 1):

    eb.draw_led_matrix([
    	"b00000000",
    	"b01100110",
    	"b01100110",
    	"b00000000",
    	"b00011000",
    	"b00000000",
    	"b10001111",
    	"b00111100",
    ])

    time.sleep(0.2) # Wait for the given/defined seconds.

    eb.draw_led_matrix([
    	"b00000000",
    	"b01100000",
    	"b01100110",
    	"b00000000",
    	"b00011000",
    	"b00000000",
    	"b11110001",
    	"b00111100",
    ])

    time.sleep(0.2) # Wait for the given/defined seconds.

  eb.draw_led_matrix([
  	"b00000000",
  	"b00000000",
  	"b00000000",
  	"b00000000",
  	"b00000000",
  	"b00000000",
  	"b00000000",
  	"b00000000",
  ])

  for i in range(1, 9, 1):
    eb.set_led_matrix_led(i, i, True)
    time.sleep(0.1) # Wait for the given/defined seconds.
  for i in range(8, 0, -1):
    eb.set_led_matrix_led(i, i, False)
    time.sleep(0.1) # Wait for the given/defined seconds.
  time.sleep(1) # Wait for the given/defined seconds.
