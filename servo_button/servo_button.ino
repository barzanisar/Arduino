#include <Servo.h>

Servo servo1, servo2, servo3, servo4;

#define button1 12
int buttonPressed;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(4);
  pinMode(button1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Wait until a button is pressed
  while (true)
  {
    if (digitalRead(button1) == HIGH)
    {
      buttonPressed = 1;
      break;
    }
  } 

  if (buttonPressed == 1)
  {
    servo1.writeMicroseconds(2000);
    delay(950);
    servo1.writeMicroseconds(1500);
    delay(950);

  }
}
