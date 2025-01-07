#include <Arduino.h>
#define LEDPIN 13
// put function declarations here:
void charConverter(char);

void setup() {
  // put your setup code here, to run once:
  unsigned char word = "test";
  charConverter(word);
  Serial.begin(115200); 





}

void loop() {
  // put your main code here, to run repeatedly:
  
}

// put function definitions here:

charConverter(unsigned char word){

}