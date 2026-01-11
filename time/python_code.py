#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library

arduino_start_time = time.time() # Start time of the Arduino program


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  print(f"{(time.time() - arduino_start_time):.2f}")
  time.sleep(0.1) # Wait for the given/defined seconds.
