
// Include the Stepper library for controlling stepper motors
#include <Stepper.h>
// Define the number of steps per revolution for the stepper motor
const int stepsPerRevolution = 2048;
// Initialize the stepper motor with the number of steps per revolution
// and the defined/given control pins
// Pins listed in motor phase (spin) order
Stepper stepperMotor(stepsPerRevolution, 11, 9, 10, 8);




// Initialise the program settings and configurations
void setup() {
   // Set the speed of the stepper motor to defined/given speed in RPM.
   stepperMotor.setSpeed(10);

}

// The void loop function runs over and over again forever.
void loop() {
  stepperMotor.step(2048);
  delay(2000); // Wait for the given/defined milliseconds.
  stepperMotor.step(-2048);
  delay(2000); // Wait for the given/defined milliseconds.
}
