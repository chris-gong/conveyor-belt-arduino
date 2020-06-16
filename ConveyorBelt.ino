const int stepPin = 3; 
const int dirPin = 4; 

void setup() {
  
  pinMode(stepPin, OUTPUT); 
  pinMode(dirPin, OUTPUT);
  
}
void loop() {
  digitalWrite(dirPin, HIGH);
  for(int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH); 
    delay(1);
    digitalWrite(stepPin, LOW); 
    delay(1);
  }
  delay(1000);
}
