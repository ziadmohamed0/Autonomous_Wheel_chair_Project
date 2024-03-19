#include <Arduino.h>

#define IN_1  2
#define IN_2  3
#define IN_3  4
#define IN_4  5

#define EN_A  6
#define EN_B  7

#define TRIG 10
#define ECHO 11

int Destance;
int Duration;

void setup(void)
{
  Serial.begin(9800);


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
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  Duration = pulseIn(ECHO, HIGH);
  Destance = Duration * 0.034 / 2;

  if (Destance > 10)
  {
    digitalWrite(IN_1 , LOW);
    digitalWrite(IN_2 , HIGH);
    analogWrite(EN_A , 255);

    digitalWrite(IN_3 , LOW);
    digitalWrite(IN_4 , HIGH);
    analogWrite(EN_B , 255);
  }
  else 
  {
//    analogWrite(EN_B , 0);
//    analogWrite(EN_A , 0);
//
//    delay(500);
    
    digitalWrite(IN_1 , LOW);
    digitalWrite(IN_2 , LOW);
    analogWrite(EN_A , 0);

    digitalWrite(IN_3 , LOW);
    digitalWrite(IN_4 , HIGH);
    analogWrite(EN_B , 0);
  }

  Serial.print(Destance);
  delay(500);
}


void Return_Ultra()
{
  }
