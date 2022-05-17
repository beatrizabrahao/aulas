#include <Servo.h>

Servo s;
int pos;

const int led1 = 2;
const int led2 = 3;
const int bot1 = 5;
const int bot2 = 6;



void setup() {
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  
  pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);

  s.attach(9);
  Serial.begin(9600);
  s.write(160);
}

int var1;
int var2;

void loop() {
  var1 = digitalRead(bot1);
  var2 = digitalRead(bot2);
  
  if(var1){
    
   digitalWrite(led1, HIGH);
     digitalWrite(led2, LOW);

    for(pos = 100; pos < 160; pos++)
    {
      s.write(pos);
      delay(15);
    }
  }

  if(var2){

    digitalWrite(led2, HIGH);
     digitalWrite(led1, LOW);

    for(pos = 160; pos > 100; pos--)
    {
      s.write(pos);
      delay(15);
    }
  }
}
