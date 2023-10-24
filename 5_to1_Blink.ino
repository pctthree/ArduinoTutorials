void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
pinMode(4,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
Serial.println("Start of Program");

  for (int i=0; i <=4; i++) {
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  
  }

digitalWrite(13,LOW);
delay(500);
}
