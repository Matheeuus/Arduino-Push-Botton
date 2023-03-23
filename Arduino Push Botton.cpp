// C++ code
//
int botao = 0;

void setup()
{
  pinMode(5, INPUT);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  pinMode(8, INPUT);

  botao = 0;
}

void loop()
{
  if (digitalRead(5) == HIGH) {
    digitalWrite(7, HIGH);
  }
  if (digitalRead(6) == HIGH) {
    digitalWrite(7, LOW);
  }
  if (digitalRead(8) == 1) {
    botao = (botao + 1);
    if (botao % 2 == 0) {
      digitalWrite(7, LOW);
    } else {
      digitalWrite(7, HIGH);
    }
  }
  delay(100); // Wait for 100 millisecond(s)
}