#include <IRremote.hpp> // Include the IRremote library for infrared communication
bool developer_ir_remote_found = false; // whether ir remote was pressed
int developer_ir_remote_command = -1; // the button pressed by the ir remote




// Initialise the program settings and configurations
void setup() {
   IrReceiver.begin(2, true); //
   pinMode(8, OUTPUT);  // Configures led pin as an output
   pinMode(7, OUTPUT);  // Configures led pin as an output

}

// The void loop function runs over and over again forever.
void loop() {
  if (developer_ir_remote_found) {
    if ((developer_ir_remote_command == 70)) {
      digitalWrite(8, HIGH); // Set defined pin to HIGH (turn it on).
    }
    if ((developer_ir_remote_command == 69)) {
      digitalWrite(7, HIGH); // Set defined pin to HIGH (turn it on).
    }
  }
  delay(1000); // Wait for the given/defined milliseconds.
  irRemoteLoopScan(); // Checks for then ir loop scan.
}

void irRemoteLoopScan() {
  if (!IrReceiver.decode()) {
    developer_ir_remote_found = false;
    developer_ir_remote_command = -1;
    IrReceiver.resume();
    return;
  }

  // Short-circuit noisy/overflow frames
  if (IrReceiver.decodedIRData.flags & IRDATA_FLAGS_WAS_OVERFLOW) {
    // Too long/garbled signal, skip
    IrReceiver.resume();
    developer_ir_remote_found = false;
    developer_ir_remote_command = -1;
    return;
  }

  // Ignore repeat frames (user holding the button)
  if (IrReceiver.decodedIRData.flags & IRDATA_FLAGS_IS_REPEAT) {
    IrReceiver.resume();
    developer_ir_remote_found = false;
    developer_ir_remote_command = -1;
    return;
  }

  developer_ir_remote_found = true;
  developer_ir_remote_command = IrReceiver.decodedIRData.command;
  IrReceiver.resume();
}
