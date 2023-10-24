

int oneMag = 0;
int twoMag = 0;
int threeMag = 0;
int fourMag = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(13, HIGH);

  for (int i=1; i <=16; i++) {

    delay(500);
    oneMag = oneMag + 1;

    if (oneMag == 2) {
      oneMag = 0;
      twoMag = twoMag + 1;
      if (twoMag == 2) {
        twoMag = 0;
        threeMag = threeMag + 1;
        if (threeMag == 2) {
          threeMag = 0;
          fourMag = fourMag + 1;
        }
      }
    }
  
    digitalWrite(2,oneMag);
    if (oneMag == 0) {
      digitalWrite(2,LOW);
    }
    else {
      digitalWrite(2,HIGH);
    }
    
    if (twoMag == 0) {
      digitalWrite(3,LOW);
    }
    else {
      digitalWrite(3,HIGH);
    }
    
    if (threeMag == 0) {
      digitalWrite(4,LOW);
    }
    else {
      digitalWrite(4,HIGH);
    }
    
    if (fourMag == 0) {
      digitalWrite(5,LOW);
    }
    else {
      digitalWrite(5,HIGH);
    }
 
   

  }
  

digitalWrite(13,LOW);
digitalWrite(5,LOW);
fourMag = 0;
delay(1000);
}
