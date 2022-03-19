// C++ code
//

int button = 13;
int led = 12;
int lastButtonState = 0;
int buttonState = 0;
int count = 0;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop()
{
  buttonState = digitalRead(button);
  if(buttonState!= lastButtonState){
      if(int count = 4; count > 1){
        digitalWrite(led, HIGH);
      }else{
       digitalWrite(led, LOW);
} 
  delay(5);//debounce
    }
  
  lastButtonState=buttonState;
}
