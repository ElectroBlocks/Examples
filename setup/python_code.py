#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Variable Declaration
test = ""


# Initialise the program settings and configurations
def get_parse_value(data: str, separator: str, index: int, default: str = "") -> str:
    parts = data.split(separator)
    return parts[index] if 0 <= index < len(parts) else default



while True:
  test = (get_parse_value("blue,red,green", ",", max(0, (1) - 1)))
  print(test)
  time.sleep(2) # Wait for the given/defined seconds.



