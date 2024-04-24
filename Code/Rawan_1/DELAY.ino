#define IN_1 5
#define IN_2 6
#define IN_3 7
#define IN_4 8

void setup() {
  Serial.begin(9600);

  pinMode(IN_1,OUTPUT);
  pinMode(IN_2,OUTPUT);
  pinMode(IN_3,OUTPUT);
  pinMode(IN_4,OUTPUT);
}

void loop() {
 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(2000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(1000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(1000);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(2000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(1000);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);
 
 delay(1000);


}
