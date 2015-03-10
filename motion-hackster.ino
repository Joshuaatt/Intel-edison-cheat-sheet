#include <Wire.h>
#include <Adafruit_MotorShield.h>
#include "utility/Adafruit_PWMServoDriver.h"

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS = Adafruit_MotorShield();
// Or, create it with a different I2C address (say for stacking)
// Adafruit_MotorShield AFMS = Adafruit_MotorShield(0x61);

// Connect a stepper motor with 200 steps per revolution (1.8 degree)
// to motor port #2 (M3 and M4)
Adafruit_StepperMotor *myMotor = AFMS.getStepper(200, 2);
int led = 5;
boolean breakLoop = false;

void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");

  AFMS.begin();  // create with the default frequency 1.6KHz
  //AFMS.begin(1000);  // OR with a different frequency, say 1KHz

  myMotor->setSpeed(10);  // 10 rpm
  pinMode(led, OUTPUT);
}

void loop() {
  if (breakLoop != true) {
  for (int i=0; i <= 15; i++){
    Serial.println("Take a step");
    myMotor->step(10, FORWARD, SINGLE);
    Serial.println("Okay, took a step, waiting for the wobble to stop..");
    delay(2000);

    digitalWrite(led, HIGH);
    Serial.println("Taking a picture..");
    delay(250);
    digitalWrite(led, LOW);

    Serial.println("Okay, picture took, now we're waiting for the camera to save it");
    Serial.println("We are now on frame...");
    Serial.println(i);

    delay(2300);
    if (i == 30) {
      //breakLoop = true;
    //  break;
    }
  }
  }
    Serial.println("OKAY LETS GO BACK THE OTHER WAY :D");

  if (breakLoop != true) {
  for (int i=0; i <= 15; i++){
    Serial.println("Take a step");
    myMotor->step(10, BACKWARD, SINGLE);
    Serial.println("Okay, took a step, waiting for the wobble to stop..");
    delay(2000);

    digitalWrite(led, HIGH);
    Serial.println("Taking a picture..");
    delay(250);
    digitalWrite(led, LOW);

    Serial.println("Okay, picture took, now we're waiting for the camera to save it");
    Serial.println("We are now on frame...");
    Serial.println(i);

    delay(2300);
    if (i == 30) {
      //breakLoop = true;
    //  break;
    }
  }
  }

}
