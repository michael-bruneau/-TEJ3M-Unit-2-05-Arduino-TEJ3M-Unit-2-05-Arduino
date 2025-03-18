/*
  Created by: Michael Bruneau
  Created on: March 2025

  This Arduio program causes micro Servo to to turn back and forth from 180 degress to 0 degrees
*/

#include <Servo.h>

Servo servoNumber1;

// variables
int blinkDelay = 2000;
const int PIN_8 = 8;

void setup()
{
  // Setups pins
  servoNumber1.attach(PIN_8);
  servoNumber1.write(0);
}

void loop() {
  servoNumber1.write(180);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
  
  servoNumber1.write(0);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
}
