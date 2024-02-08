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