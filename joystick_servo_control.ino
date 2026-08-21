#include <Servo.h>
Servo motorum;
const int butonPin = 2;

void setup() {
  motorum.attach(3); 
  pinMode(butonPin, INPUT_PULLUP);
}
void loop() {

  if (digitalRead(butonPin) == LOW) {
    motorum.write(90);
  } else {
    int xdeger = analogRead(A0);
    int aci = map(xdeger, 0, 1023, 0, 180);
    motorum.write(aci);
  }

  delay(15);
}
