/*
  Created by: Michael Bruneau
  Created on: March 2025

  This Arduio program causes micro Servo to to turn back and forth from 180 degress to 0 degrees
*/

#include <Servo.h> 

Servo sevoNumber1;

// variables
int blinkDelay = 2000;
const int PIN_8 = 8;

void setup()
{
  // Setups pins
  sevoNumber1.attach(PIN_8);
  sevoNumber1.write(0);
}

void loop() {
  sevoNumber1.write(180);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
  
  sevoNumber1.write(0);
  delay(blinkDelay); // Wait for 1000 millisecond(s)
}
