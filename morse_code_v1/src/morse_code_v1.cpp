/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "c:/Users/Family/morse_code/src/morse_code_v1/src/morse_code_v1.ino"
/*
 * Project morse_code_v1
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
void setup();
void loop();
#line 9 "c:/Users/Family/morse_code/src/morse_code_v1/src/morse_code_v1.ino"
int led1 = D7; 

void setup() {
  pinMode(led1, OUTPUT);

}
void loop() {
// My firstname in Morse Code, Menachem
// -- . -. .- -.-. .... . --
// - = dash
// .= dot
//  = space
  //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
  //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
  //space
  digitalWrite(led1, LOW);
  delay(1000);
  // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
    //space
  digitalWrite(led1, LOW);
  delay(1000);
    //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
    // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  //space
  digitalWrite(led1, LOW);
  delay(1000);
   // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
  //space
  digitalWrite(led1, LOW);
  delay(1000);
  //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
   // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
    //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
  // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  //space
  digitalWrite(led1, LOW);
  delay(1000);
  // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  //space
  digitalWrite(led1, LOW);
  delay(1000);
    // dot
digitalWrite(led1, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(200);
  //space
  digitalWrite(led1, LOW);
  delay(1000);
  //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
  //dash
  digitalWrite(led1, HIGH);
  delay(900);
  digitalWrite(led1, LOW);
  delay(200);
}