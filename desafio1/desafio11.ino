// Desafio 1: Simulação de Movimento Circular com Funções Trigonométricas
#include <math.h>

double anguloAtual = 0.0;
const double incrementoAngulo = 0.1;
const double raio = 50.0;

void setup() {
	Serial.begin(9600);
  	Serial.println("Simulando movimento circular...");
}

void loop() {
	double coordenadaX = raio * cos(anguloAtual);
  	double coordenadaY = raio * sin(anguloAtual);
  
  	Serial.print("Angulo (rad): ");
  	Serial.print(anguloAtual, 2);
  	Serial.print(" -> X: ");
  	Serial.print(coordenadaX, 2);
  	Serial.print(", Y: ");
  	Serial.print(coordenadaY, 2);
  
  	anguloAtual += incrementoAngulo;
  
  if (anguloAtual >= (2 * M_PI)) {
  	anguloAtual -= (2 * M_PI);
  }
  
  delay(1000);
}