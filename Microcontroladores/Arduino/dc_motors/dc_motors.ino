/****************************************************
*   File:   dc_motors.ino                           *
*   Author: William Torres @williamtorres1          *
*****************************************************/

#define speedPin 3
#define input1 2
#define input2 4

void stopMotor();
void goForward(int speed);
void goBackward(int speed);

/*
  Desafio: Fazer dois motores girarem em sentidos opostos, use um potenciômetro
    para decidir em qual estado os motores estarão.
*/

void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(input1, INPUT);
  pinMode(input2, INPUT);
}

void loop() {
  stopMotor();
  goForward(100);
  goBackward(100);
}

void stopMotor() {
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);

  delay(2000);
}

void goForward(int speed = 200) {
  analogWrite(speedPin, constrain(speed, 0, 255));
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  delay(2000);

}

void goBackward(int speed = 200){
  analogWrite(speedPin, constrain(speed, 0, 255));
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  delay(2000);

}
