#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
i = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_passive_buzzer(9)


while True:
  eb.play_passive_buzzer(9, 131)
  time.sleep(0.2) # Wait for the given/defined seconds.
  for i in range(100, 401, 10):
    eb.play_passive_buzzer(9, i)
    time.sleep(0.2) # Wait for the given/defined seconds.
  eb.play_passive_buzzer(9, 0)
  time.sleep(2) # Wait for the given/defined seconds.
  eb.play_passive_buzzer(9, 10000)
  time.sleep(2) # Wait for the given/defined seconds.
