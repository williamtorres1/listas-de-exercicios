/****************************************************
*   File:   proximity_sensor.ino                    *
*   Author: Lais Viana @laisvianamelo               *   
*   Author: William Torres @williamtorres1          *
*****************************************************/
#include <SoftwareSerial.h>
#define redLed 2
#define yellowLed 3
#define blueLed 4
#define echoPin 5
#define trigPin 6

float duration = 0, distance = 0;

/*
  Controle LEDs com um sensor ultrassônico de forma a implementar
    um sensor de ré que indique a proximidade através dos LEDs.
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(trigPin, OUTPUT);
  Serial.begin(19200);
}

void loop() {
  // put your main code here, to run repeatedly
  digitalWrite(trigPin, LOW);
  delay(1);
  digitalWrite(trigPin, HIGH);
  delay(1);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration * 0.343) / 2;
   digitalWrite(blueLed, LOW);
  digitalWrite(yellowLed,LOW);
  digitalWrite(redLed,LOW);
  if (distance <= 300) {
  	digitalWrite(blueLed,HIGH);
  } if (distance <= 200) {
    digitalWrite(blueLed,LOW);
    digitalWrite(yellowLed,HIGH);
  } if (distance <= 100) {
    digitalWrite(blueLed,LOW);
    digitalWrite(yellowLed,LOW);
    digitalWrite(redLed,HIGH);
  }
  
  delay(10);

}
