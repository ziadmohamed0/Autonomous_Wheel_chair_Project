#define IN_1 D1
#define IN_2 D2
#define IN_3 D3
#define IN_4 D4

#define Buzzer	D0

#define TRIG D5
#define ECHO D6




void setup(void)
{

  Serial.begin(9600);


  pinMode(IN_1, OUTPUT);
  pinMode(IN_2, OUTPUT);

  pinMode(IN_3, OUTPUT);
  pinMode(IN_4, OUTPUT);

  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  
  pinMode(Buzzer, OUTPUT);
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

      digitalWrite(IN_3, HIGH);
      digitalWrite(IN_4, LOW);
      digitalWrite(Buzzer, LOW);
    }
    else
    {
      digitalWrite(IN_1, LOW);
      digitalWrite(IN_2, LOW);

      digitalWrite(IN_3, LOW);
      digitalWrite(IN_4, LOW);
      delay(25);
      digitalWrite(Buzzer, HIGH);
      
    }
  
  Serial.println(Distance);
  delay(500);
}
