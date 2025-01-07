#include <Arduino.h>
#define LEDPIN 13
#define TIMEUNIT 500



void charConverter(char word);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
  pinMode(LEDPIN, OUTPUT); 
  digitalWrite(LEDPIN, LOW); 

  //CODE STRUCTIRE:
  //SplitCodeFunction
  //ConverteLetterFunction
  //DisplayWordInMorse
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

void charConverter(char word){
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