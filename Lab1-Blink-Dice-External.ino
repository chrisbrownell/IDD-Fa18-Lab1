/*
  Blink Dice

  This program repeatedly rolls a virtual die, producing a result between 1 and 6. 
  After a 2 second "roll", the result is communicated via a blinking LED on pin 9.

  This code is based on the public domain Blink program.
  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize pin 9 as an output.
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.print("Rolling...");        // log that the die is being "rolled"
  delay(2000);                       // stay on for 2 seconds
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // drumroll aka 0.5 second delay

  int rollResult = random(1,7);
  Serial.println(rollResult);
  for (int i=1; i <= rollResult; i++){  // flash the die-roll result number
    digitalWrite(9, HIGH); 
    delay(200);
    digitalWrite(9, LOW);
    delay(200);
  }
  delay(1000);
}
