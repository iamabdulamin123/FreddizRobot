// Robotics with the BOE Shield - ForwardOneSecond
// Make the BOE Shield-Bot roll forward for one seconds, then stop.

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
                                             // Full speed forward

  servoRight.writeMicroseconds(1310);        //INCLUDE IN EVERY SCRIPT (CENTRE THE ROBOT AFTER THE RESET CLICK) 
  delay(140);   
                                         
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(1000);                               // ...for 1 second
 
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}


//17cm in 1 second 

//speed = distance / time; so speed is 17cm / 1000microseconds = 0.017cm/microsecond at a rightservo pulse of 1300 and a right servo pulse of 1700 