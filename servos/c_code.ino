#include <Servo.h> // Includes the Servo library for controlling servo motors
Servo servo_8; // Creates a servo object
Servo servo_7; // Creates a servo object

double i = 0;




// Initialise the program settings and configurations
void setup() {
   servo_8.attach(8); // Attaches the servo motor to defined pin
   servo_7.attach(7); // Attaches the servo motor to defined pin
  servo_8.write(0); // Rotate servo position to 0 degrees
  servo_7.write(180); // Rotate servo position to 180 degrees
}

// The void loop function runs over and over again forever.
void loop() {
  for (i = 0; i <= 90; i += 5) {
    servo_8.write(i); // Rotate servo position to i degrees
    servo_7.write((180 - i)); // Rotate servo position to (180 - i) degrees
    delay(50); // Wait for the given/defined milliseconds.

  }
  for (i = 90; i >= 0; i -= 5) {
    servo_8.write(i); // Rotate servo position to i degrees
    servo_7.write((180 - i)); // Rotate servo position to (180 - i) degrees
    delay(50); // Wait for the given/defined milliseconds.

  }
}
