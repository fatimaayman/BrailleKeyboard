#include <Keyboard.h>

void setup() {
 //start serial connection
  Serial.begin(9600);
  //configure pins {2-7} as an input and enable the internal pull-up resistor
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  //if the button is pressed
  if (digitalRead(2) == LOW) {
    //Send the message
    Keyboard.print("1");
    delay(300);
    Keyboard.releaseAll();
  }
  if (digitalRead(3) == LOW) {
    //Send the message
    Keyboard.print("2");
    delay(300);
    Keyboard.releaseAll();
  }
  if (digitalRead(4) == LOW) {
    //Send the message
    Keyboard.print("3");
    delay(300);
    Keyboard.releaseAll();
  } 
  if (digitalRead(5) == LOW) {
    //Send the message
    Keyboard.print("4");
    delay(300);
    Keyboard.releaseAll();
  }
  if (digitalRead(6) == LOW) {
    //Send the message
    Keyboard.print("5");
    delay(300);
    Keyboard.releaseAll();
  }
  if (digitalRead(7) == LOW) {
    //Send the message
    Keyboard.print("6");
    delay(300);
    Keyboard.releaseAll();
  } 
  if (digitalRead(8) == LOW) {
    //Send the message
    Keyboard.print("7");
    delay(300);
    Keyboard.releaseAll();
  }
  if (digitalRead(9) == LOW) {
    //Send the message
    Keyboard.print("8");
    delay(300);
    Keyboard.releaseAll();
  }
  if (digitalRead(10) == LOW) {
    //Send the message
    Keyboard.print("9");
    delay(300);
    Keyboard.releaseAll();
  }
}
