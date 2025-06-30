// Desafio 2: Monitor de Status Dinâmico com Objeto String

void setup() {
	Serial.begin(9600);
  	Serial.println("Iniciando Monitor de Status...");
}

void loop() {
	// Leitura de sensores (valores aleatórios)
  	int temperatura = random(20, 35); // 20ºC – 34ºC
  	int umidade = random(40, 80); // 40% – 79%
  
  	// Mensagem de status utilizando o objeto String
  	String mensagem = "Status -> Temperatura: ";
  	mensagem += temperatura;
  	mensagem += " C | Umidade: ";
  	mensagem += umidade;
  	mensagem += "%";
  
  	// Exibição no Monitor Serial
  	Serial.println(mensagem);
  
  	delay(1000);
}