#include <Arduino.h>

#define LEDPIN 13 //Defines the pin used for the LED as pin 13
#define TIMEUNIT 500 //Defines the amount if milliseconds in a time unit
#define INPUT "SOS" //Defines the input we want to write with morse

unsigned int wordLength; //Creates an unsigned integer, word

char in[] = INPUT; //Creates a character array for each letter in the input
char letter; 

// Function for converting a single character to morse code
void charConverter(char word);

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
  for (int i = 0; i < wordLength; i++) {//Runs a for loop for every character in the input
    letter = in[i]; //Assigns the current letter to a character 'letter'
    morseConverter(letter); //Runs the current letter through the morse converter
  }
  msgEnd(); //Upon completing the message, assumes next input is a new word
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

void newLetter() { //A delay function for sepereating letters
  delay(3 * TIMEUNIT); //Waits for three time units before the next letter begins
}

void newWord() {
  delay(7 * TIMEUNIT); 

}void msgEnd() { //A delay function for ending the message
  newWord(); 
  newLetter(); 
}

void charConverter(char word){
  // Function finds the corrosponding case for the incomming letter.
  // and calls for either the dots and or dash functions.
  // if a space is entered, then the deault catches the space and handles it.
  word = tolower(word); 

  switch (word)
  {
    case 'a':
    dot(), dash();
    break;
    

    case 'b':
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
