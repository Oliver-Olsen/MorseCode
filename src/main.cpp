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
  
  //CODE STRUCTIRE:
  //SplitCodeFunction
  //ConverteLetterFunction
  //DisplayWordInMorse
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

void morseConverter(char word){
  switch (word)
  {
    case "a":
    dot(), dash();
    break;
    

    case "b":
    dash(), dot(), dot(), dot();
    break;
    

    case "c":
    1;
    break;
    
    
    case "d":
    1;
    break;
    
    
     case "e":
    1;
    break;
    
    
    case "f":
    1;
    break;
    
    
    case "g":
    1;
    break;
    
    
    case "h":
    1;
    break;
    
    
    case "i":
    1;
    break;
    
    
    case "j":
    1;
    break;
    
    
    case "k":
    1;
    break;
    
    
    case "l":
    1;
    break;
    
    
    case "m":
    1;
    break;
    
    
    case "n":
    1;
    break;
    
    
    case "o":
    1;
    break;

    
    case "p":
    1;
    break;
    

    case "q":
    1;
    break;
  
  
    case "r":
    1;
    break;
  
  
    case "s":
    1;
    break;
  
  
    case "t":
    1;
    break;
  
  
    case "u":
    1;
    break;
  
  
    case "v":
    1;
    break;
  
  
    case "w":
    1;
    break;
  
  
    case "x":
    1;
    break;
  
  
    case "y":
    1;
    break;
  
  
    case "z":
    1;
    break;
    

    case "0":
    1;
    break;
    

    case "1":
    1;
    break;
    

    case "2":
    1;
    break;
    

    case "3":
    1;
    break;
    

    case "4":
    1;
    break;
    

    case "5":
    1;
    break;
    

    case "6":
    1;
    break;
    

    case "7":
    1;
    break;
    
    
    case "8":
    1;
    break;
  
  
    case "9":
    1;
    break;
  

  default:
    break;
  }
  newLetter();
}
