#include <AFMotor.h>
#include<SoftwareSerial.h>

AF_DCMotor motor1(1);  // Moteur 1, broche de contrôle 1
AF_DCMotor motor2(2);  // Moteur 2, broche de contrôle 3
AF_DCMotor motor3(3);  // Moteur 3, broche de contrôle 2
AF_DCMotor motor4(4);  // Moteur 4, broche de contrôle 4
void setup() {
  Serial.begin(9600);
//  bluetooth.begin(9600);

  motor1.setSpeed(100);
  motor2.setSpeed(100);
  motor3.setSpeed(100);
  motor4.setSpeed(100);
}


void loop() {
  turnClockwise();
}

void turnClockwise() {
  motor1.run(FORWARD);  // Faire 200 pas (un tour complet)
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);

}


