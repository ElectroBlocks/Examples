#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
num = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  num = 33
  if (3 % 2 == 0):
    print("Should Skip")

  if (num % 2 == 1):
    print("Works")

  if (3 > 0):
    print("Works")

  if (num < 0):
    print("Should Skip")

  if (3 % 12 == 0):
    print("Works")

  time.sleep(2) # Wait for the given/defined seconds.
