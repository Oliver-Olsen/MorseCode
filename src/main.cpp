#include <Arduino.h>
//Oliver Olsen s205443
//Nils Wulff   s223968


// Question a1:
// To write the numbers from 0-9 you would only need 4 bits (1001 = 9).

// The reason why 5 bits is required, is due to the letters. Most/some of the
// 4 bit length combinations are already taken. Therefore it is easier to use the 5-bit setup,
// and make a pattern, so it is easy to tell one number from another.

// Static variables
#define LEDPIN 13     //Defines the pin used for the LED as pin 13
#define TIMEUNIT 400  //Defines the amount if milliseconds in a time unit
#define MSG "SOS"     //Defines the input we want to write with morse
//#define MSG "Oiver og Linus"

int wordLength; //Creates an unsigned integer, word

char in[] = MSG; //Creates a character array for each letter in the input
char letter; 

// Function declarations 


void morseConverter(char word);   // Converts char to dots and dashes

void dot();                       // Function is called to blink once (quick)

void dash();                      // Function is called to blink onxe (long)

void newLetter();                 // Used time delay between letters

void newWord();                   // Used time delay between words

void msgEnd();                    // Used time delay at end of message


void setup() {
  Serial.begin(9600); 
  pinMode(LEDPIN, OUTPUT); //Sets LEDPIN as an output
  digitalWrite(LEDPIN, LOW); //Ensures LEDPIN starts low

  wordLength = strlen(MSG); //Determines how many characters are in the input
  
  //CODE STRUCTIRE:
  //SplitCodeFunction
  //ConverteLetterFunction
  //DisplayWordInMorse
}

void loop() {
  for (int i = 0; i < wordLength; i++) {//Runs a for loop for every character in the input
    letter = in[i]; //Assigns the current letter to a character 'letter'
    Serial.println(letter); 
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
  delay(1 * TIMEUNIT); 
}

void msgEnd() { //A delay function for ending the message
  newWord(); 
  newLetter(); 
}

void morseConverter(char letter){
  // Function finds the corrosponding case for the incomming letter.
  // and calls for either the dots and or dash functions.
  // if a space is entered, then the deault catches the space and handles it.
  // By using the given morse code from the lecture, we can now make a switch, for all the possible letters.
  

  // forces lower case (else the desault case will only be used with the eg. SOS code)
  letter = tolower(letter); 

  switch (letter)
  {
    case 'a': // Is the letter is an "a", then it calls the two frunctions dot(), dash(); (in this order).
    dot(), dash();
    break;  // Exits the switch
    

    case 'b':
    dash(), dot(), dot(), dot();
    break;
    

    case 'c':
    dash(), dot(), dash(), dot();
    break;
    
    
    case 'd':
    dash(), dot(), dot();
    break;
    
    
     case 'e':
    dot();
    break;
    
    
    case 'f':
    dot(), dot(), dash(), dot();
    break;
    
    
    case 'g':
    dash(), dash(), dot();
    break;
    
    
    case 'h':
    dot(), dot(), dot(), dot();
    break;
    
    
    case 'i':
    dot(), dot();
    break;
    
    
    case 'j':
    dot(), dash(), dash(), dash();
    break;
    
    
    case 'k':
    dash(), dot(), dash();
    break;
    
    
    case 'l':
    dot(), dash(), dot(), dot();
    break;
    
    
    case 'm':
    dash(), dash();
    break;
    
    
    case 'n':
    dash(), dot();
    break;
    
    
    case 'o':
    dash(), dash(), dash();
    break;

    
    case 'p':
    dot(), dash(), dash(), dot();
    break;
    

    case 'q':
    dash(), dash(), dot(), dash();
    break;
  
  
    case 'r':
    dot(), dash(), dot();
    break;
  
  
    case 's':
    dot(), dot(), dot();
    break;
  
  
    case 't':
    dash();
    break;
  
  
    case 'u':
    dot(), dot(), dash();
    break;
  
  
    case 'v':
    dot(), dot(), dot(), dash();
    break;
  
  
    case 'w':
    dot(), dash(), dash();
    break;
  
  
    case 'x':
    dash(), dot(), dot(), dash();
    break;
  
  
    case 'y':
    dash(), dot(), dash(), dash();
    break;
  
  
    case 'z':
    dash(), dash(),dot(), dot();
    break;
    

    case '0':
    dash(), dash(), dash(), dash(), dash();
    break;
    

    case '1':
    dot(), dash(), dash(), dash(), dash();
    break;
    

    case '2':
    dot(), dot(), dash(), dash();
    break;
    

    case '3':
    dot(), dot(), dot(), dash(), dash();
    break;
    

    case '4':
    dot(), dot(), dot(), dot(), dash();
    break;
    

    case '5':
    dot(), dot(), dot(), dot(), dot();
    break;
    

    case '6':
    dash(), dot(), dot(), dot(), dot();
    break;
    

    case '7':
    dash(), dash(), dot(), dot(), dot();
    break;
    
    
    case '8':
    dash(), dash(), dash(), dot(), dot();
    break;
  
  
    case '9':
    dash(), dash(), dash(), dash(), dot();
    break;
  

  default:
    newWord();
    break;
  }
  newLetter(); // This delay is added everytime at the end after the switch has been run.
}
