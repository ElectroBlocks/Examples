
// Define an enumeration for motor direction with three possible values
typedef enum {
  CLOCKWISE = 0, // Motor turns in the clockwise direction
  ANTI_CLOCKWISE = 1,  // Motor turns in the anti-clockwise direction
  STOP = -1 // Motor stops
} Direction;

// Pin assign for the motor control
const int motor1Pin1 = 8;  // Control pin for motor direction 1
const int motor1Pin2 = 7;  // Control pin for motor direction 2
const int enablePin1 = 9; // PWM pin to enable the motor1
const int motor2Pin1 = 5; // Control pin for motor2 direction 1
const int motor2Pin2 = 4; // Control pin for motor2 direction 2
const int enablePin2 = 3; // PWM pin to enable the motor2

// Function to move the motor based on specified speed and direction
void moveMotor(int motor, int speed, Direction direction) {
  int enablePin = motor == 1 ? enablePin1 : enablePin2; // Set the enable pin to enablePin1
  int pin1 = motor == 1 ? motor1Pin1 : motor2Pin1; // Set pin1 to control direction 1
  int pin2 = motor == 1 ? motor1Pin2 : motor2Pin2; // Set pin2 to control direction 2
  // Control the motor direction based on the specified direction
  if (speed > 255) {
    speed = 254;
  } else if (speed < 1) {
    speed = 1;
  }

  switch (direction) {
    case CLOCKWISE:
      digitalWrite(pin1, HIGH);  // Set pin1 high to turn clockwise
      digitalWrite(pin2, LOW); // Set pin2 low
      analogWrite(enablePin, speed);  // Set motor speed
      break;
    case ANTI_CLOCKWISE:
      digitalWrite(pin1, LOW); // Set pin1 low to turn anti-clockwise
      digitalWrite(pin2, HIGH); // Set pin2 high
      analogWrite(enablePin, speed); // Set motor speed
      break;
    case STOP:
      analogWrite(enablePin, 0);  // Stop the motor
      break;
  }
}




// Initialise the program settings and configurations
void setup() {

   // Configuring motor control pins
   pinMode(motor1Pin1, OUTPUT); // Set motor1Pin1 as output
   pinMode(motor1Pin2, OUTPUT); // Set motor1Pin2 as output
   pinMode(enablePin1, OUTPUT); // Set enablePin1 as output
   pinMode(motor2Pin1, OUTPUT); // Set motor2Pin1 as output
   pinMode(motor2Pin2, OUTPUT); // Set motor2Pin2 as output
   pinMode(enablePin2, OUTPUT); // Set enablePin2 as output
   // Motor pin setup complete

}

// The void loop function runs over and over again forever.
void loop() {
  moveMotor(1, 150, CLOCKWISE);
  delay(3000); // Wait for the given/defined milliseconds.
  moveMotor(1, 0, STOP);
  delay(3000); // Wait for the given/defined milliseconds.
  moveMotor(1, 150, ANTI_CLOCKWISE);
  delay(3000); // Wait for the given/defined milliseconds.
  moveMotor(1, 0, STOP);
  delay(3000); // Wait for the given/defined milliseconds.
  moveMotor(2, 150, CLOCKWISE);
  delay(3000); // Wait for the given/defined milliseconds.
  moveMotor(2, 0, STOP);
  delay(3000); // Wait for the given/defined milliseconds.
  moveMotor(2, 150, ANTI_CLOCKWISE);
  delay(3000); // Wait for the given/defined milliseconds.
  moveMotor(2, 0, STOP);
  delay(3000); // Wait for the given/defined milliseconds.
}
