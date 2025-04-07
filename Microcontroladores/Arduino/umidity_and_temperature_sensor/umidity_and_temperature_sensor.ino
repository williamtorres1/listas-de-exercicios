/****************************************************
*   File:   umidity_and_temperature_sensor.ino      *
*   Author: Lais Viana @laisvianamelo               *   
*   Author: William Torres @williamtorres1          *
*****************************************************/
#include "DHT.h"

/**
  Utilize o sensor de temperatura e umidade DHT11 para
    controlar o microclima de uma estufa, usando um servo
    motor para abrir e fechar a entrada de ar.
*/

#define dhtPin 2
#define dhtType DHT11

DHT dht(dhtPin, dhtType);

void setup(){
  pinMode(dhtPin, INPUT);
  Serial.begin(9600);
}
void loop(){
  float umidity = dht.readHumidity();
  float temperature = dht.readTemperature();
  Serial.println();
}