#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import random
import time # imports the time library


# Variable Declaration
random2 = 0

remainer = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  random2 = (random.randint(1, 10))
  print(f"{random2:.2f}")
  random2 = (random.randint(1, 100))
  print(f"{random2:.2f}")
  remainer = ((64 % 10))
  print(f"{remainer:.2f}")
  remainer = ((2 % 10))
  print(f"{remainer:.2f}")
  time.sleep(20) # Wait for the given/defined seconds.
