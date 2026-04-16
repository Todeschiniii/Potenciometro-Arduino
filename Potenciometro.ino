// C++ code

int led = 9;    // pino PWM
int pot = A0;	// potenciômetro
int valor = 0; 
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  valor = analogRead(pot); // 0 á 1023
  valor = valor / 4;	   // converte para 0 á 255
    
  analogWrite(led, valor); // controla o brilho
}