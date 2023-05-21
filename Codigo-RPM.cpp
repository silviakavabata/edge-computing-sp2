// C++ code
//
int ldr = A0;
int led = 13;
int ping = 0;
int ping_por_rotacao = 9; //quantidade de vezes que é necessario o ldr contar para uma rotação completa
int rpm = 0;
unsigned long ultimo_tempo = 0;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(ldr, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int leitura_ldr = analogRead(ldr);
  digitalWrite(led, HIGH);
  delay(200); //simular roda da agua girando, normalmente não havera delay
  digitalWrite(led, LOW);
  delay(200);
  digitalWrite(led, HIGH);
  
  
  if (leitura_ldr > 500) { //atualizar o valor de ping toda vezes que ldr receber luz
    ping ++;
  }
  
  //calcular rpm
  unsigned long tempo_atual = millis();
  if (tempo_atual - ultimo_tempo >= 1000) {
    float segundos = (tempo_atual - ultimo_tempo) / 1000.0 ;
    float rotacao_completa = ping / (float)ping_por_rotacao;
    rpm = (int)(rotacao_completa/segundos * 60.0);
    Serial.println(rpm);
    ping = 0; //zera contador de pulsos para proxima testagem
    ultimo_tempo=tempo_atual; //volta a 0 o tempo para reiniciar testagem
  }
}