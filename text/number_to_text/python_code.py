#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
large_num = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  large_num = 4032.3333
  print(f"{large_num:.2f}")
  print(f"{123.234234:.3f}")
  time.sleep(3) # Wait for the given/defined seconds.
