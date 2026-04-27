int LedV = 5;
int LedA = 4;
int LedR = 3;
int sensor = A0;
int umidade;
void setup()
{
  Serial.begin(9600);
  pinMode(LedV, OUTPUT);
  pinMode(LedA, OUTPUT);
  pinMode(LedR, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop()
{
  umidade = analogRead(A0);
  Serial.println(umidade);
  if(umidade > 657){
    digitalWrite(LedV, HIGH);
    digitalWrite(LedR, LOW);
    digitalWrite(LedA, LOW);
  }
  else if(438 < umidade && umidade < 657){
    digitalWrite(LedA, HIGH);
    digitalWrite(LedR, LOW);
    digitalWrite(LedV, LOW);
  }
  else if(umidade < 438){
    digitalWrite(LedR, HIGH);
    digitalWrite(LedV, LOW);
    digitalWrite(LedA, LOW);
  }
  else{
  	digitalWrite(LedR, LOW);
    digitalWrite(LedV, LOW);
    digitalWrite(LedA, LOW);
  }
}