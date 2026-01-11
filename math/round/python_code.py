#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import math
import time # imports the time library


# Variable Declaration
num = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  num = 12.5
  print(f"{round(3.1):.2f}")
  print(f"{math.ceil(3.1):.2f}")
  print(f"{math.floor(3.1):.2f}")
  print(f"{round(num):.2f}")
  print(f"{math.ceil(num):.2f}")
  print(f"{math.floor(num):.2f}")
  time.sleep(10) # Wait for the given/defined seconds.
