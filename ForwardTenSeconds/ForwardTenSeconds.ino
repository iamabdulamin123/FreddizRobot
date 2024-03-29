// Robotics with the BOE Shield - ForwardTenSeconds
// Make the BOE Shield-Bot roll forward for ten seconds, then stop.

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12

  servoRight.writeMicroseconds(1310);        //INCLUDE IN EVERY SCRIPT (CENTRE THE ROBOT AFTER THE RESET CLICK) 
  delay(135);                                // ^^
  // Full speed forward
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1328);        // Right wheel clockwise
  delay(10000);                              // ...for 10 seconds
 
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}