#include <Arduino.h>

#define LEDPIN 13 //Defines the pin used for the LED as pin 13
#define TIMEUNIT 500 //Defines the amount if milliseconds in a time unit
#define INPUT "SOS" //Defines the input we want to write with morse

unsigned int wordLength; //Creates an unsigned integer, word

char in[] = INPUT; //Creates a character array for each letter in the input

void setup() {
  pinMode(LEDPIN, OUTPUT); //Sets LEDPIN as an output
  digitalWrite(LEDPIN, LOW); //Ensures LEDPIN starts low

  wordLength = strlen(INPUT); //Determines how many characters are in the input
}

void loop() {
  for (int i = 0; i < wordLength; i++) //Runs a for loop for every character in the input
    char letter = in[i]; //Assigns the current letter to a character 'letter'
    morseConverter(letter); //Runs the current letter through the morse converter
}

void dot() { //A function which produces a dot with the LED
  digitalWrite(LEDPIN, HIGH); //Turns on the LED
  delay(1 * TIMEUNIT); //Waits for one time unit before turning off the LED
  digitalWrite(LEDPIN, LOW); //Turns off the LED
  delay(1 * TIMEUNIT); //Waits for a time unit before the next part of the letter
}

void dash() { //A function which produces a dash with the LED
  digitalWrite(LEDPIN, HIGH); //Turns on the LED 
  delay(3 * TIMEUNIT); //Waits for three time unit before turning off the LED
  digitalWrite(LEDPIN, LOW); //Turns off the LED
  delay(1 * TIMEUNIT); //Waits for a time unit before the next part of the letter
}

void newLetter() {
  delay(3 * TIMEUNIT); //Waits for three time units before the next letter begins
}

void newWord() {
  delay(1 * TIMEUNIT); //Waits for 1 time units before the next word begins, since newLetter will be triggered before and after this function, resulting in 7 time units tital
}