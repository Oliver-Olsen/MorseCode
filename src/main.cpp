#include <Arduino.h>
#define LEDPIN 13 //
#define TIMEUNIT 500

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
  Serial.begin(115200); 
}

void loop() {
  // put your main code here, to run repeatedly:
  
}

// put function definitions here:
int myFunction(char word) {
  return word;
}