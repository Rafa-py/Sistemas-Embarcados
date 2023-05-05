// C++ code
//
const int led = 7;


void setup()
{
  pinMode(led, OUTPUT);  
}

void loop()
{
  // Ligando e desligado led vermelho
  digitalWrite(led, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
