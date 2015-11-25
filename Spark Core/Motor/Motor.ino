#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_PWMServoDriver.h"

int pushButton = 2;
int val;
Adafruit_MotorShield AFMS = Adafruit_MotorShield();
Adafruit_DCMotor *myMotor = AFMS.getMotor(1);

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  AFMS.begin();
  

  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  val = digitalRead(pushButton);

  if(val != 1) {
    myMotor->setSpeed(255);
    myMotor->run(FORWARD);
  } else {
    myMotor->setSpeed(0);
  }
}



