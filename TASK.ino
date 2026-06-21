int startValue = 5;
int ledPin =13;
void flashLED(int times){
  for (int i= 0;i< times; i++){
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);
  }
}
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);

  Serial.println("===SMART COUNTDOWN SYSTEM===");
  
  int counter = startValue ;
  while(counter >= 0){
    Serial.print("counter is: ");
    Serial.println(counter);

    flashLED(counter);
    delay(1000);
    counter = counter - 1;
    

  }

  Serial.println("===COUNTDOWN COMPLETE===");

}

void loop() {
  // put your main code here, to run repeatedly:

}
