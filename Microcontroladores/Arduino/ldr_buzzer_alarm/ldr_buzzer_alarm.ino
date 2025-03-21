/****************************************************
*   File:   proximity_sensor.ino                    *
*   Author: Lais Viana @laisvianamelo               *   
*   Author: William Torres @williamtorres1          *
*****************************************************/

/**
  Implemente um despertador com um sensor LDR que, ao receber
    um certo nível de luz, ative um buzzer como alarme.
*/
#define buzzerPin 9
#define ldrPin A0

void setup(){
	pinMode(buzzerPin, OUTPUT);
  	pinMode(ldrPin, INPUT);
    Serial.begin(9600);
}
void loop(){
  double ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);
  if (ldrValue <= 300) {
  	digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(200);
  }
}