#Import ElectroBlocks library
from electroblocks import ElectroBlocks

# Initialise the program settings and configurations
eb = ElectroBlocks() # Create an instance of the ElectroBlocks class
eb.config_dht_temp(2)
eb.digital_write_config(13)



while True:
  print(f"{eb.dht_temp_celcius():.2f}")
  print(f"{eb.dht_temp_humidity():.2f}")
  if (eb.dht_temp_celcius() > 15) or (eb.dht_temp_humidity() > 50):
    eb.digital_write(13, 1) # Turns the led on
  else:
    eb.digital_write(13, 0) # Turns the led off
