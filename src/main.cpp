#include <Arduino.h>
#define LEDPIN 13 //
#define TIMEUNIT 500

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
  pinMode(LEDPIN, OUTPUT); 
  digitalWrite(LEDPIN, LOW); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void dot() {
  digitalWrite(LEDPIN, HIGH); 
  delay(1 * TIMEUNIT); 
  digitalWrite(LEDPIN, LOW); 
  delay(1 * TIMEUNIT); 
}

void dash() {
  digitalWrite(LEDPIN, HIGH); 
  delay(3 * TIMEUNIT); 
  digitalWrite(LEDPIN, LOW); 
  delay(1 * TIMEUNIT); 
}

void newLetter() {
  delay(3 * TIMEUNIT); 
}

void newWord() {
  delay(7 * TIMEUNIT); 
}