/*
 Robotics with the BOE Shield – RightServoStayStill
 Transmit the center or stay still signal on pin 12 for center adjustment.
 */

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                            // Declare right servo

void setup()                                 // Built-in initialization block
{
  servoLeft.attach(13);                     // Attach right signal to pin 12
  servoLeft.writeMicroseconds(1500);        // 1.5 ms stay still signal
}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}