#include <Arduino.h>

#define IN_1 4
#define IN_2 5
#define IN_3 6
#define IN_4 7

#define EN_A 8
#define EN_B 9


#define TRIG 2
#define ECHO 3




void setup(void)
{

  Serial.begin(9600);


  pinMode(IN_1, OUTPUT);
  pinMode(IN_2, OUTPUT);

  pinMode(IN_3, OUTPUT);
  pinMode(IN_4, OUTPUT);

  pinMode(EN_A, OUTPUT);
  pinMode(EN_B, OUTPUT);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}


void loop(void)
{


  int Distance = 0;
  int Duration = 0;

  digitalWrite(TRIG, LOW);
  delay(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  Duration = pulseIn(ECHO, HIGH);

  Distance = Duration / 57.14;
  if (Distance > 10)
   {
      digitalWrite(IN_1, HIGH);
      digitalWrite(IN_2, LOW);
      analogWrite(EN_A, 255);

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      analogWrite(EN_B, 255);
    }
    else
    {
      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, LOW);
      analogWrite(EN_A, 0);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, LOW);
      analogWrite(EN_B, 0);
    }
  
  Serial.println(Distance);
  delay(500);
}
