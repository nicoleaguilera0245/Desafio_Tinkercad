// Desafio 3: Jogo de Adivinhação

int numeroSecreto;
bool jogoAtivo = true;

void setup() {
	Serial.begin(9600);
  	randomSeed(analogRead(A0));
  	numeroSecreto = random(1, 101); // Número secreto entre 1 e 100
  
  	Serial.println("Bem-vindo(a) ao jogo de adivinhacao!");
  	Serial.println("Tente adivinhar um numero entre 1 e 100.");
  	Serial.println("Digite o numero no campo de entrada do monitor serial.");
}

void loop() {
  if (Serial.available() > 0) {
  	String entrada = Serial.readStringUntil('\n');
    int palpite = entrada.toInt();
    
    if (palpite == 0 && entrada != "0") {
    Serial.println("Entrada invalida. Digite um numero.");
    } else {
      if (palpite == numeroSecreto) {
      	Serial.println("Parabens! Voce acertou!");
        Serial.println("Reiniciando o jogo...");
        numeroSecreto = random(1, 101);
      } else if (palpite < numeroSecreto) {
      	Serial.println("O numero secreto e MAIOR. Tente novamente.");
      } else {
      	Serial.println("O numero secreto e MENOR. Tente novamente.");
      }
    }
  }
}