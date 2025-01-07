#include <Arduino.h>
#define LEDPIN 13
#define TIMEUNIT 500


// Function for converting a single character to morse code
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
  // Function finds the corrosponding case for the incomming letter.
  // and calls for either the dots and or dash functions.
  // if a space is entered, then the deault catches the space and handles it.
  switch (word)
  {
    case "a":
    dot(), dash();
    break;
    

    case "b":
    dash(), dot(), dot(), dot();
    break;
    

    case "c":
    dash(), dot(), dash(), dot();
    break;
    
    
    case "d":
    dash(), dot(), dot();
    break;
    
    
     case "e":
    dot();
    break;
    
    
    case "f":
    dot(), dot(), dash(), dot();
    break;
    
    
    case "g":
    dash(), dash(), dot();
    break;
    
    
    case "h":
    dot(), dot(), dot(), dot();
    break;
    
    
    case "i":
    dot(), dot();
    break;
    
    
    case "j":
    dot(), dash(), dash(), dash();
    break;
    
    
    case "k":
    dash(), dot(), dash();
    break;
    
    
    case "l":
    dot(), dash(), dot(), dot();
    break;
    
    
    case "m":
    dash(), dash();
    break;
    
    
    case "n":
    dash(), dot();
    break;
    
    
    case "o":
    dash(), dash(), dash();
    break;

    
    case "p":
    dot(), dash(), dash(), dot();
    break;
    

    case "q":
    dash(), dash(), dot(), dash();
    break;
  
  
    case "r":
    dot(), dash(), dot();
    break;
  
  
    case "s":
    dot(), dot(), dot();
    break;
  
  
    case "t":
    dash();
    break;
  
  
    case "u":
    dot(), dot(), dash();
    break;
  
  
    case "v":
    dot(), dot(), dot(), dash();
    break;
  
  
    case "w":
    dot(), dash(), dash();
    break;
  
  
    case "x":
    dash(), dot(), dot(), dash();
    break;
  
  
    case "y":
    dash(), dot(), dash(), dash();
    break;
  
  
    case "z":
    dash(), dash(),dot(), dot();
    break;
    

    case "0":
    dash(), dash(), dash(), dash(), dash();
    break;
    

    case "1":
    dot(), dash(), dash(), dash(), dash();
    break;
    

    case "2":
    dot(), dot(), dash(), dash();
    break;
    

    case "3":
    dot(), dot(), dot(), dash(), dash();
    break;
    

    case "4":
    dot(), dot(), dot(), dot(), dash();
    break;
    

    case "5":
    dot(), dot(), dot(), dot(), dot();
    break;
    

    case "6":
    dash(), dot(), dot(), dot(), dot();
    break;
    

    case "7":
    dash(), dash(), dot(), dot(), dot();
    break;
    
    
    case "8":
    dash(), dash(), dash(), dot(), dot();
    break;
  
  
    case "9":
    dash(), dash(), dash(), dash(), dot();
    break;
  

  default:
    newWord();
    break;
  }
  newLetter();
}