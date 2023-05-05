// C++ code
//
const int vermelho = 7;
const int verde = 6;
const int azul = 5;
const int branco = 12;


void setup()
{
  pinMode(7, OUTPUT);  
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);  
  pinMode(12, OUTPUT);


}

void loop()
{
  // Ligando e desligado led vermelho
  digitalWrite(vermelho, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(vermelho, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Ligando e desligado led verde
  digitalWrite(verde, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(verde, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Ligando e desligado led azul
  digitalWrite(azul, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(azul, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  // Ligando e desligado led branco
  digitalWrite(branco, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(branco, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}
