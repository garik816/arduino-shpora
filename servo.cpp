#include <Arduino.h>
#include <Servo.h>

#define eyePin 11
#define mouthPin 12

 Servo eyeServo;
 Servo mouthServo;

int pos = 0;

void setup() {
  Serial.begin(9600);

   eyeServo.attach(eyePin);
   mouthServo.attach(mouthPin);

   eyeServo.write(0);
   mouthServo.write(0);

  Serial.println("starting");
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
   eyeServo.write(pos);
   mouthServo.write(pos);
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
   eyeServo.write(pos);
   mouthServo.write(pos);            // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
