#include <AFMotor.h>

AF_Stepper motor1(200, 1);  // Moteur 1, broche de contrôle 1
AF_Stepper motor2(200, 3);  // Moteur 2, broche de contrôle 3
AF_Stepper motor3(200, 2);  // Moteur 3, broche de contrôle 2
AF_Stepper motor4(200, 4);  // Moteur 4, broche de contrôle 4

void setup() {
  Serial.begin(9600);
  Serial.println("Initialisation des moteurs");

  motor1.setSpeed(100);
  motor2.setSpeed(100);
  motor3.setSpeed(100);
  motor4.setSpeed(100);
}


void loop() {
  turnClockwise();
  delay(2000);  // Attendre pendant 2 secondes
}

void turnClockwise() {
  Serial.println("Tourner dans le sens des aiguilles d'une montre");
  motor1.step(200, FORWARD, SINGLE);  // Faire 200 pas (un tour complet)
  motor2.step(200, FORWARD, SINGLE);
  motor3.step(200, FORWARD, SINGLE);
  motor4.step(200, FORWARD, SINGLE);
}
