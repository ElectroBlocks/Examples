#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
i = 0

j = 0

number = 0


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  number = 33
  for i in range(1, 11, 1):
    for j in range(1, 11, 1):
      number = (1 + 1)
      print(f"{number:.2f}")
      number = (i + j)
      print(f"{number:.2f}")
      number = (i - j)
      print(f"{number:.2f}")
      number = (i * j)
      print(f"{number:.2f}")
      number = (i / j)
      print(f"{number:.2f}")
      number = (i ** j)
      print(f"{number:.2f}")
      time.sleep(0.2) # Wait for the given/defined seconds.
      print("---------------------------------------")
  print("DONE")
  time.sleep(20) # Wait for the given/defined seconds.
