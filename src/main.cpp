/*
  Titre      : Titre du programme
  Auteur     : Ousseynou Seck
  Date       : 27/11/2021
  Description: Une description du programme
  Version    : 0.0.1
*/





#include <Arduino.h>
#include "WIFIConnector_MKR1000.h"
#include "MQTTConnector.h"

const int sensorPin = A1;
const int ledrouge = 13; 
const int MS_DELAI = 1000;

//Welcome to Electronics University
//Subscribe us for learning something new.

void setup() {

 Serial.begin(9600); 

 wifiConnect();                  //Branchement au réseau WIFI 
 MQTTConnect();
 pinMode(sensorPin,INPUT);
 pinMode(ledrouge,OUTPUT);

}

void loop() {
  Serial.println(analogRead(sensorPin));
  int a=digitalRead(sensorPin);
   if(a==HIGH){
    digitalWrite(ledrouge,HIGH);
   }
  else{
  
     digitalWrite(ledrouge,LOW);
 }
 delay(MS_DELAI);

 } 