#include <Wire.h>;  // Include the Wire library for I2C communication.
#include <LiquidCrystal_I2C.h>;  // Include the LiquidCrystal_I2C library for controlling the LCD
LiquidCrystal_I2C lcd(0X3F,4,20); // Create an LCD object with I2C address 0X3F, 4 rows, and 20 columns
int simple_loop_variable = 0;



// Initialise the program settings and configurations
void setup() {
   lcd.init(); // Initialize the LCD
   lcd.backlight(); // Turn on the LCD backlight

}

// The void loop function runs over and over again forever.
void loop() {
  lcd.clear(); // Clear LCD Screen
  lcd.setCursor(0, 0); // Print a message on the LCD screen
  lcd.print(String("Hello")); // Prints a message on LCD Screen.
  lcd.setCursor(0, 1); // Print a message on the LCD screen
  lcd.print(String("  World")); // Prints a message on LCD Screen.
  lcd.setCursor(0, 2); // Print a message on the LCD screen
  lcd.print(String(" Test")); // Prints a message on LCD Screen.
  lcd.setCursor(0, 3); // Print a message on the LCD screen
  lcd.print(String(" .# moo #- ")); // Prints a message on LCD Screen.
  delay(3000); // Wait 3 seconds
  lcd.clear(); // Clear LCD Screen

  delay(200); // Wait for the given/defined milliseconds.
  lcd.setCursor(0, 0); // Set position to print on the LCD screen
  lcd.print(String("Hi")); // Print a message on the LCD screen
  for (simple_loop_variable = 1; simple_loop_variable <= 18; simple_loop_variable += 1) {
    lcd.scrollDisplayRight();
    delay(200); // Wait for the given/defined milliseconds.
  }
  for (simple_loop_variable = 1; simple_loop_variable <= 18; simple_loop_variable += 1) {
    lcd.scrollDisplayLeft();
    delay(200); // Wait for the given/defined milliseconds.
  }
  lcd.clear(); // Clear LCD Screen.
  lcd.setCursor(9, 3);
  lcd.blink();
  delay(1000); // Wait for the given/defined milliseconds.
  lcd.setCursor(9, 3);
  lcd.noBlink();
  delay(1000); // Wait for the given/defined milliseconds.
  lcd.noBacklight(); // Turn off backlight
  delay(1000); // Wait for the given/defined milliseconds.
  lcd.backlight(); // Turn on backlight
  delay(1000); // Wait for the given/defined milliseconds.
}
