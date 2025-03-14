// C++ code
//
#define ledRed 8
#define ledGreen 10
#define button 11

unsigned long int timmingOne = 0;
unsigned long int timmingTwo = 0;
unsigned int redState = 0;
unsigned int greenState = 0;
/*
  Monte um programa que faça com que 2 ou mais Leds pisquem de maneira assíncrona,
    com tempo de duração diferentes, utilizando a função millis() e adicione um
    botão que ao ser acionado inverte o tempo de piscada dos leds.
    
*/
void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, LOW);
}

void turnOnLeds(unsigned int frequenceOne, unsigned int frequenceTwo) {
  if (millis() - timmingOne >= frequenceOne){
      digitalWrite(ledRed, redState);
      redState = !redState;
      timmingOne = millis();
  }
  else if (millis() - timmingTwo >= frequenceTwo){
      digitalWrite(ledGreen, greenState);
      greenState = !greenState;   
      timmingTwo = millis();
  }
}

void loop()
{
  unsigned long int frequenceOne = 500;
  unsigned long int frequenceTwo = 2000;
  unsigned int buttonValue = 0;
  buttonValue = digitalRead(button);
  if (!buttonValue){
    turnOnLeds(frequenceTwo, frequenceOne);
  }
  else {
    turnOnLeds(frequenceOne, frequenceTwo);
  }
}