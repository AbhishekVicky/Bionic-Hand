#include <Servo.h>

Servo thumb;
Servo indexFinger;
Servo middleFinger;
Servo ringFinger;
Servo littleFinger;

void setup() {

  thumb.attach(3);
  indexFinger.attach(5);
  middleFinger.attach(6);
  ringFinger.attach(9);
  littleFinger.attach(10);

}

void loop() {

  // Close Hand
  thumb.write(180);
  indexFinger.write(180);
  middleFinger.write(180);
  ringFinger.write(180);
  littleFinger.write(180);

  delay(2000);

  // Open Hand
  thumb.write(0);
  indexFinger.write(0);
  middleFinger.write(0);
  ringFinger.write(0);
  littleFinger.write(0);

  delay(2000);

}
