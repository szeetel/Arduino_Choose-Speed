
int in1 = 6;
int in2 = 7;

void setup() {
  Serial.begin(9600);


  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  //CLOCKWISE MAX SPEED
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);

  delay(2000);

}

void loop() {
  Serial.println("Speed");
  while (Serial.available() == 0) {
  }
  int menuChoice = Serial.parseInt();
  switch( menuChoice){
    case 1:
      Serial.println("HIGH");
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);

      break;
      
    case 2:
      Serial.println("LOW");
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);

      break;
    default:
      Serial.println("fuck yoi");
      
        
    
  }
 
}
