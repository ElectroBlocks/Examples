String serialMessageDEV = "";
struct RGB {
    double red;
    double green;
    double blue;
};
int BLUE_PIN_1 = 9; // Define pin number for the blue LED
int RED_PIN_1 = 11; // Define pin number for the red LED
int GREEN_PIN_1 = 10; // Define pin number for the green LED

double num = 0;

String name = "";

boolean awesome = false;

struct RGB deep_blue = {0, 0, 0};



// Initialise the program settings and configurations
void setup() {
   Serial.begin(115200);
   Serial.setTimeout(100);
   pinMode(RED_PIN_1, OUTPUT); // Set the red LED pin as an output
   pinMode(GREEN_PIN_1, OUTPUT); // Set the green LED pin as an output
   pinMode(BLUE_PIN_1, OUTPUT); // Set the blue LED pin as an output
   pinMode(13, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  deep_blue = { 0, 89, 255};
  awesome = true;
  name = String("Robo1000");
  num = 33;
  if ((num == 33)) {
    digitalWrite(13, HIGH); // Set defined pin to HIGH (turn it on).
  }
  delay(1000); // Wait for the given/defined milliseconds.
  Serial.println(String("Hi, ") + name);
  Serial.flush(); // Waits until outgoing buffer is empty
  delay(1000); // Wait for the given/defined milliseconds.
  if (awesome) {
    digitalWrite(13, LOW); // Set defined pin to LOW (turn it off).
  }
  setLedColor(deep_blue); // Set the RGB LED colour.
}

// Set the brightness of each LED based on the RGB color values provided
void setLedColor(RGB color) {
    analogWrite(RED_PIN_1, color.red);  // Adjust the red LED brightness
    analogWrite(GREEN_PIN_1, color.green); // Adjust the green LED brightness
    analogWrite(BLUE_PIN_1, color.blue); // Adjust the blue LED brightness
}
