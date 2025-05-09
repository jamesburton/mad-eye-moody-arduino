#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//const int minDelay = 500;
const int minDelay = 250;
const int maxDelay = 3000;
//const int minPos = 45;
const int minPos = 60;
//const int maxPos = 135;
const int maxPos = 140;
const int servoPin = 9;

void setServoPos(int pos)
{
  //myservo.attach(servoPin);
  myservo.write(pos);
  //delay(50);
  //myservo.detach();
}

void setup() {
  myservo.attach(servoPin);
  setServoPos((maxPos + minPos) / 2);
}

void loop() {
  delay(random(minDelay, maxDelay));
  setServoPos(random(minPos, maxPos));
}
