#Import ElectroBlocks library
from electroblocks import ElectroBlocks
import time # imports the time library


# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_dht_temp(2, 'DHT11')
eb.digital_write_config(13)



while True:
  print(f"{eb.dht_temp_celcius():.2f}")
  print(f"{eb.dht_temp_humidity():.2f}")
  if (eb.dht_temp_celcius() > 20) and (eb.dht_temp_humidity() > 50):
    eb.digital_write(13, 1) # Turns the led on
  else:
    eb.digital_write(13, 0) # Turns the led off

  time.sleep(0.2) # Wait for the given/defined seconds.
