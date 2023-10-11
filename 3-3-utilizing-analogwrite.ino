/*

*/
int light = 11;
int light2 = 9;
int light3 = 10;

void setup() {
  pinMode(light,OUTPUT);
  pinMode(light2,OUTPUT);
  pinMode(light3,OUTPUT);
    
}

void loop() {
  analogWrite(light,255);
  delay(1000);
  analogWrite(light,102);
  delay(1000);
  analogWrite(light,0);
  delay(1000);
  analogWrite(light2,255);
  delay(1000);
  analogWrite(light2,102);
  delay(1000);
  analogWrite(light2,0);
  delay(1000);
  analogWrite(light3,255);
  delay(1000);
  analogWrite(light3,102);
  delay(1000);
  analogWrite(light3,0);
  delay(1000);
    
}
