#define IN_1 13
#define IN_2 12
#define IN_3 11
#define IN_4 10

#define button_A 9
#define button_B 8
#define button_C 7

#define Buzzer	6

#define Echo 5
#define Triger 4

void X_ray(void);
void pharmacy(void);
void laboratory(void);

void setup() {
  Serial.begin(9600);
  
  pinMode(Buzzer, OUTPUT);

  pinMode(button_A,INPUT);
  pinMode(button_B,INPUT);
  pinMode(button_C,INPUT);
  
  pinMode(IN_1,OUTPUT);
  pinMode(IN_2,OUTPUT);
  pinMode(IN_3,OUTPUT);
  pinMode(IN_4,OUTPUT);

  pinMode(Triger,OUTPUT);
  pinMode(Echo,INPUT);

}

void loop() {
  int Button_1 = digitalRead(button_A);
  int Button_2 = digitalRead(button_B);
  int Button_3 = digitalRead(button_C);
      
  int Distance = 0;
  int Duration = 0;

  digitalWrite(Triger, LOW);
  delay(2);
  digitalWrite(Triger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Triger, LOW);

  Duration = pulseIn(Echo, HIGH);

  Distance = Duration / 57.14;
  
  if(Distance >= 4)
  {    
    digitalWrite(Buzzer, LOW); 
    if(Button_1 == HIGH)
    {
     X_ray();
     Serial.println(" => You Are In X_ray Room.");
     Serial.println("================================");
    }
    if(Button_2 == HIGH)
    {
      pharmacy();
     Serial.println(" => You Are In pharmacy Room.");
     Serial.println("================================");    
    }
    if(Button_3 == HIGH)
    {
      laboratory();
     Serial.println(" => You Are In laboratory Room.");
     Serial.println("================================");      
    }
  }
  else
  {
    digitalWrite(IN_1,LOW);
    digitalWrite(IN_2,LOW);
    digitalWrite(IN_3,LOW);
    digitalWrite(IN_4,LOW);
    digitalWrite(Buzzer, HIGH);
    Serial.println("* Some thing Wrong!!!!"); 
    Serial.println("=======================");      
        
  }
  Serial.print("Distance : ");
  Serial.println(Distance);
  Serial.println("******************");   
  delay(250);
}


void X_ray(void)
{
 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(2000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(500);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(1000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);
 
 delay(500);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);
 

}
void pharmacy(void)
{

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(4000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(500);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(1000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);
 
 delay(500);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);



}
void laboratory(void)
{

  digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(6000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(500);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 
 delay(200);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,HIGH);
 digitalWrite(IN_4,LOW);

 delay(1000);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

 digitalWrite(IN_1,HIGH);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);
 
 delay(500);

 digitalWrite(IN_1,LOW);
 digitalWrite(IN_2,LOW);
 digitalWrite(IN_3,LOW);
 digitalWrite(IN_4,LOW);

 delay(200);

}
