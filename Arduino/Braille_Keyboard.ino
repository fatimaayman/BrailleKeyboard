#include <Keyboard.h>

//Braille Language Matrix + end letter, Spacebar, and Backspace buttons
int Matrix [3][3] = {0};

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
//Set the input Matrix
  if(digitalRead(8) == LOW){
    Matrix [0][0] = 1;
  }
  if(digitalRead(5) == LOW){
    Matrix [0][1] = 1;
  }
//End Letter by pressing on input pin2
  if(digitalRead(2) == LOW){            
    Matrix [0][2] = 1;
  }
  if(digitalRead(10) == LOW){
    Matrix [1][0] = 1;
  }
  if(digitalRead(7) == LOW){
    Matrix [1][1] = 1;
  }
  if(digitalRead(4) == LOW){
    Matrix [1][2] = 1;
  }
  if(digitalRead(9) == LOW){
    Matrix [2][0] = 1;
  }
  if(digitalRead(6) == LOW){
    Matrix [2][1] = 1;
  }
  if(digitalRead(3) == LOW){
    Matrix [2][2] = 1;
  }

//Letter a
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("a");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0;
  Keyboard.releaseAll();
  }

//Letter b
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("b");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0;
  Keyboard.releaseAll();
  }

//Letter c
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("c");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [0][1] = 0;
  Keyboard.releaseAll();
  }

//Letter d
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("d");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [0][1] = 0;  Matrix [1][1] = 0;
  Keyboard.releaseAll();
  }

//Letter e
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("e");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][1] = 0;
  Keyboard.releaseAll();
  }

//Letter f
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("f");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [0][1] = 0; Matrix [1][0] = 0;
  Keyboard.releaseAll();
  }

//Letter g
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("g");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [0][1] = 0; Matrix [1][0] = 0; Matrix [1][1] = 0;
  Keyboard.releaseAll();
  }

//Letter h
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("h");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [1][1] = 0;
  Keyboard.releaseAll();
  }

//Letter i
if ((Matrix [0][0] == 0) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("i");
  delay(300);
  Matrix [0][2] = 0; Matrix [0][1] = 0; Matrix [1][0] = 0;
  Keyboard.releaseAll();
  }

//Letter j
if ((Matrix [0][0] == 0) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("j");
  delay(300);
  Matrix [0][2] = 0; Matrix [0][1] = 0; Matrix [1][0] = 0; Matrix [1][1] = 0;
  Keyboard.releaseAll();
  }

//Letter k
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("k");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  }

//Letter l
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("l");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  }

//Letter m
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("m");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][1] = 0; Matrix [0][2] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  }

//Letter n
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("n");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][1] = 0; Matrix [0][2] = 0;  Matrix [1][1] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  }

//Letter o
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("o");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][1] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  }

//Letter p
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("p");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][1] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  }  

//Letter q
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("q");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][1] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [1][1] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  } 

//Letter r
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("r");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [1][1] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  } 

//Letter s
if ((Matrix [0][0] == 0) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("s");
  delay(300);
  Matrix [0][1] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  } 

//Letter t
if ((Matrix [0][0] == 0) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 0) && (Matrix [2][2] == 0)){
  Keyboard.print("t");
  delay(300);
  Matrix [0][1] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [1][1] = 0; Matrix [2][0] = 0;
  Keyboard.releaseAll();
  }     

//Letter u
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 1) && (Matrix [2][2] == 0)){
  Keyboard.print("u");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [2][0] = 0; Matrix [2][1] = 0;
  Keyboard.releaseAll();
  }

//Letter v
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 1) && (Matrix [2][2] == 0)){
  Keyboard.print("v");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][0] = 0; Matrix [2][0] = 0; Matrix [2][1] = 0;
  Keyboard.releaseAll();
  }

//Letter w
if ((Matrix [0][0] == 0) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 1) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 0) && (Matrix [2][1] == 1) && (Matrix [2][2] == 0)){
  Keyboard.print("w");
  delay(300);
  Matrix [0][2] = 0; Matrix [0][1] = 0; Matrix [1][0] = 0; Matrix [1][1] = 0; Matrix [2][1] = 0;
  Keyboard.releaseAll();
  }

//Letter x
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 0) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 1) && (Matrix [2][2] == 0)){
  Keyboard.print("x");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][1] = 0; Matrix [0][2] = 0; Matrix [2][0] = 0; Matrix [2][1] = 0;
  Keyboard.releaseAll();
  }

//Letter y
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 1) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 1) && (Matrix [2][2] == 0)){
  Keyboard.print("y");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][1] = 0; Matrix [0][2] = 0; Matrix [1][1] = 0; Matrix [2][0] = 0; Matrix [2][1] = 0;
  Keyboard.releaseAll();
  }

//Letter z
if ((Matrix [0][0] == 1) && (Matrix [0][1] == 0) && (Matrix [0][2] == 1) && (Matrix [1][0] == 0) && (Matrix [1][1] == 1) && (Matrix [1][2] == 0) && (Matrix [2][0] == 1) && (Matrix [2][1] == 1) && (Matrix [2][2] == 0)){
  Keyboard.print("z");
  delay(300);
  Matrix [0][0] = 0; Matrix [0][2] = 0; Matrix [1][1] = 0; Matrix [2][0] = 0; Matrix [2][1] = 0;
  Keyboard.releaseAll();
  }

//SpaceBar
if (Matrix [1][2] == 1){
  Keyboard.print(" ");
  delay(300);  
  Matrix [0][2] = 0; Matrix [1][2] = 0; 
  Keyboard.releaseAll();
  }
  
//BackSpace
if (Matrix [2][2] == 1){
  Keyboard.press(KEY_BACKSPACE);
  delay(300); 
  Matrix [0][2] = 0; Matrix [2][2] = 0; 
  Keyboard.releaseAll();
  }
}
