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
  delay(135);    

  // Turn left in place
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(540);                                // ...for 0.6 seconds

  // Turn right in place
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(540);                                // ...for 0.6 seconds

  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}  

void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}