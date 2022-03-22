// C++ code
//
void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  PiscaLedVermelho12();
 }

void PiscaLedVermelho12()
{
  digitalWrite(12, HIGH);
  delay(500); // Wait for 000 millisecond(s)
  digitalWrite(12, LOW);
  delay(500); // Wait for 1000 millisecond(s)
}
