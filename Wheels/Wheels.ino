#include <AFMotor.h>
#include<SoftwareSerial.h>

#define rxPin A5
#define txPin A4

// Set up a new SoftwareSerial object
SoftwareSerial mySerial =  SoftwareSerial(rxPin, txPin);
AF_DCMotor motor1(1);  // Moteur 1, broche de contrôle 1
AF_DCMotor motor2(2);  // Moteur 2, broche de contrôle 3
AF_DCMotor motor3(3);  // Moteur 3, broche de contrôle 2
AF_DCMotor motor4(4);  // Moteur 4, broche de contrôle 4

void setup() {
  Serial.begin(9600);
// Define pin modes for TX and RX
    pinMode(rxPin, INPUT);
    pinMode(txPin, OUTPUT);
    
    // Set the baud rate for the SoftwareSerial object
    mySerial.begin(9600);

  motor1.setSpeed(100);
  motor2.setSpeed(100);
  motor3.setSpeed(100);
  motor4.setSpeed(100);
}


void loop() {
  if (mySerial.available() > 0) {
        char c = mySerial.read();
        Serial.print(c);
    }
  turnClockwise();
}

void turnClockwise() {
  motor1.run(FORWARD);  // Faire 200 pas (un tour complet)
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);

}


