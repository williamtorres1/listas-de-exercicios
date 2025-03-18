/****************************************************
*   File:   servo_potentiometer.ino                 *
*   Author: Lais Viana @laisvianamelo               *   
*   Author: William Torres @williamtorres1          *
*****************************************************/
#include <SoftwareSerial.h>
#include <Servo.h>
#define ledPin 9
#define potentiometerPin A2

int ledBright = 0; 
int potentiometerValue = 0;

Servo servo;
/*
  Desafio: Controle um servo motor usando um potenciômetro.
  Dica: Use um potenciômetro para fazer o controle.
*/
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potentiometerPin, INPUT);
  servo.attach(ledPin);
}

void loop() {
 potentiometerValue = analogRead(potentiometerPin);
 ledBright = map(potentiometerValue, 0, 1023, 0, 180);
 servo.write(ledBright);
 analogWrite(ledPin, ledBright);
 delay(100);
}
