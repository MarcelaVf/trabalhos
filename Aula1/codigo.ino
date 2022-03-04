// C++ code
//
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

void loop()
{
  int var = digitalRead(2);
  digitalWrite(3, var);
  delay(10);
}
