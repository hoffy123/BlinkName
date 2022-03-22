/*
 * Project morse_code_v1
 * Description:
 * Author:
 * Date:
 */

// setup() runs once, when the device is first turned on.
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