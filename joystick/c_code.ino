
#include <math.h>

#define Y_PIN A3
#define X_PIN A1
#define SW_PIN 9

boolean internal_variable_isJoystickButtonPressed = false;
boolean internal_variable_isJoyStickEngaged = false;
int internal_variable_degrees = 0;




// Initialise the program settings and configurations
void setup() {

    pinMode(SW_PIN, INPUT);
    pinMode(Y_PIN, INPUT);
    pinMode(X_PIN, INPUT);
    digitalWrite(SW_PIN, HIGH);
     pinMode(7, OUTPUT);  // Configures led pin as an output
   pinMode(8, OUTPUT);  // Configures led pin as an output
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  if (internal_variable_isJoystickButtonPressed) {
    digitalWrite(7, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(7, LOW); // Set defined pin to LOW (turn it off).
  }
  if ((internal_variable_degrees < 100)) {
    digitalWrite(8, LOW); // Set defined pin to LOW (turn it off).
  }
  if ((internal_variable_degrees > 100)) {
    digitalWrite(8, HIGH); // Set defined pin to HIGH (turn it on).
  }
  if (internal_variable_isJoyStickEngaged) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  } else {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
	setJoyStickValues();
}

void setJoyStickValues() {
  // https://medium.com/@melaniechow/using-a-joystick-sensor-on-an-arduino-3498d7399464
  // This function was inspired by this Article
  int y = (analogRead(Y_PIN) * 4.9);
  delay(50); // small pause needed between reading
  int x = (analogRead(X_PIN) * 4.9 );
  delay(50);

  x = (x - 2457);
  y = (y - 2541);

  double val = atan2(y, x) * 180/3.14159265358979;

  if (val < 0) {
    val += 360;
  }

  //convert to a double
  double new_x = x / 100.0;
  double new_y = y / 100.0;
  double distance = sqrt((new_x * new_x) + (new_y * new_y));

  internal_variable_degrees = distance > 15 ? val : 0;
  internal_variable_isJoyStickEngaged = distance > 15;
  internal_variable_isJoystickButtonPressed = digitalRead(SW_PIN) == LOW;

}
