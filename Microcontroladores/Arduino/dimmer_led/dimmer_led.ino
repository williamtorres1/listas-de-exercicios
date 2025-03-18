#include <SoftwareSerial.h>
#define pino 9
int shinebright = 0; 
/*
  Desafio: Dimmer utilizando a comunicação serial e o PWM.
  Obs.: Lembre que o Serial.read() vai ler a tabela ASCII e que o PWM
    só funciona de 0 até 255.
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(pino, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()){
    shinebright = Serial.parseInt();
    //Serial.println(shinebright);
    //shinebright = map(shinebright, 0, 255, 0, 255);
    shinebright = constrain(shinebright, 0, 255);
    Serial.println(shinebright);
   // if(shinebright != 10)
      analogWrite(pino, shinebright);
    delay(2000);
  }
}
