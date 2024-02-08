void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}/*
 * Robotics with the BOE Shield - RightServoTest
 * Right servo turns clockwise three seconds, stops 1 second, then
 * counterclockwise three seconds.
 */

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                            // Declare right servo
 
void setup()                                 // Built in initialization block
{
  servoLeft.attach(13);                     // Attach right signal to pin 12

  servoLeft.writeMicroseconds(1300);        // Right wheel clockwise
  delay(3000);                               // ...for 3 seconds
 
  servoLeft.writeMicroseconds(1500);        // Stay still
  delay(1000);                               // ...for 3 seconds

  servoLeft.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(3000);                               // ...for 3 seconds
 
  servoLeft.writeMicroseconds(1500);        // Right wheel counterclockwise

}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}
