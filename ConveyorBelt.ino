const int stepPin = 3; 
const int dirPin = 4; 

//const int highButtonPin = 5;
//const int lowButtonPin = 6;
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin, OUTPUT); 
  pinMode(dirPin, OUTPUT);
  //pinMode(lowButtonPin, INPUT);
  //pinMode(highButtonPin, INPUT);
}
void loop() {

  /*int lowButtonState, highButtonState = 0;

  lowButtonState = digitalRead(lowButtonPin);
  highButtonState = digitalRead(highButtonPin);
  Serial.println(lowButtonState);
  if (lowButtonState == LOW || highButtonState == LOW) {
    if (lowButtonState == HIGH) {
      digitalWrite(dirPin, LOW);
      digitalWrite(stepPin, HIGH); 
      delay(1);
      digitalWrite(stepPin, LOW); 
      delay(1);
    }
    else {
      digitalWrite(dirPin, HIGH);
      digitalWrite(stepPin, HIGH); 
      delay(1);
      digitalWrite(stepPin, LOW); 
      delay(1);
    }
  }*/
  digitalWrite(dirPin, HIGH);
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH); 
    delay(1);
    digitalWrite(stepPin, LOW); 
    delay(1);
  }
  delay(1000);
}
