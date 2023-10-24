int readPin=A3;
float floatV2=0;
int v2=0;
String outputString = ""; // for println

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  v2=analogRead(readPin);
  String printText = "Initial reading: ";

































  
  outputString = printText + v2;
  Serial.println(outputString);
  floatV2=analogRead(readPin);
  Serial.println(floatV2);
  floatV2=(5./1024.)*v2;
  Serial.println(floatV2);
  delay(500);
  
}
