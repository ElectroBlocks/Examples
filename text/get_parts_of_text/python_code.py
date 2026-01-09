#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library

# Function Code

def get_parse_value(data: str, separator: str, index: int, default: str = "") -> str:
    parts = data.split(separator)
    return parts[index] if 0 <= index < len(parts) else default


# Variable Declaration
i = 0

test = ""


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class



while True:
  for i in range(1, 4, 1):
    test = (get_parse_value("blue,red,green", ",", max(0, (i) - 1)))
    print(test)
    time.sleep(2) # Wait for the given/defined seconds.
