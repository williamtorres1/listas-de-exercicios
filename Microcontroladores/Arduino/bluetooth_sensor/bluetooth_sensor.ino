#include <SoftwareSerial.h>
SoftwareSerial serialbluetooth(8,9);

#define enablePin 3
#define ledPinRed 4
#define ledPinYellow 5
#define ledPinGreen 6

/*
* Crie um circuito no arduino e programe para rodar servo motores
    como se estivesse abrindo um portão basculante de garagem, ou seja,
    faça os motores subirem noventa graus e depois descerem noventa graus para fechar a garagem.

  Incremente também um sinalizador de garagem que alterne as luzes e emite um som
    alerta para que os outros carros passando por perto escutem.
  Tudo isso controlado por bluetooth no celular.
  
  Utilize também um LCD que emita as mensagens "Abrindo portão" enquanto ele estiver
    abrindo e depois mostre "Fechando o portão" ao fechar o mesmo.
*/

void setup() {
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(enablePin, OUTPUT);
  serialbluetooth.begin(38400);
  Serial.begin(9600);
  Serial.println("Pronto para enviar comandos AT...");
}

void loop() {
  char bluetoothRead = '\0';
  char commandAT = '\0';

  digitalWrite(enablePin, HIGH);

  if (Serial.available() > 0) {
    commandAT = Serial.read();
    serialbluetooth.write(commandAT);
  }

  if (serialbluetooth.available() > 0) {
    Serial.write(serialbluetooth.read());
  }

  // if (serialbluetooth.available() > 0) {
  //   bluetoothRead = serialbluetooth.read();
  //   switch(bluetoothRead) {
  //     case 'A': {
  //       digitalWrite(ledPinRed, HIGH);
  //       break;
  //     }
  //     case 'a': {
  //       digitalWrite(ledPinRed, LOW);
  //       break;
  //     }
  //     case 'B': {
  //       digitalWrite(ledPinYellow, HIGH);
  //       break;
  //     }
  //     case 'b': {
  //       digitalWrite(ledPinYellow, LOW);
  //       break;
  //     }
  //     case 'C': {
  //       digitalWrite(ledPinGreen, HIGH);
  //       break;
  //     }
  //     case 'c': {
  //       digitalWrite(ledPinGreen, LOW);
  //       break;
  //     }
  //     case 'D': {
  //       digitalWrite(ledPinRed, HIGH);
  //       digitalWrite(ledPinYellow, HIGH);
  //       digitalWrite(ledPinGreen, HIGH);
  //       break;
  //     }
  //     case 'd': {
  //       digitalWrite(ledPinRed, LOW);
  //       digitalWrite(ledPinYellow, LOW);
  //       digitalWrite(ledPinGreen, LOW);
  //       break;
  //     }
  //   }
  //}
}





