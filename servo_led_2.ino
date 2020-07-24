#include <Servo.h>

Servo servo;

void setup() {
  // put your setup code here, to run once:
  pinMode(16,OUTPUT);
   servo.attach(2); // 2 = D4
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(16,HIGH);
  delay(200);
  digitalWrite (16, LOW);
  delay(100);
  servo.write(180);
  delay(1000);
  servo.write(0);
  delay(1000);
}
