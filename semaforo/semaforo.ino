//código com botao
//variaveis para a via dos carros
int CarroVerde = 12;
int CarroAmarelo = 11;
int CarroVermelho = 10;

//variaveis para a via dos pedestres
int verdePedestre = 9;
int vermelhoPedestre = 8;

//variaveis do botão
int Botao = 2;
int estadoBotao = 0;

void setup()
{
  pinMode(CarroVermelho, OUTPUT);
  pinMode(CarroAmarelo, OUTPUT);
  pinMode(CarroVerde, OUTPUT);
  
  pinMode(vermelhoPedestre, OUTPUT);
  pinMode(verdePedestre, OUTPUT);
  
  pinMode(Botao, INPUT);
}

void loop()
{
  digitalWrite(vermelhoPedestre, HIGH);
  digitalWrite(CarroVerde, HIGH);
  
  estadoBotao = digitalRead(Botao); 
  
  if (estadoBotao == HIGH) 
  {
    delay(3000);
    
    digitalWrite(CarroVerde, LOW);
    digitalWrite(CarroAmarelo, HIGH);
    delay(3000);
    
    digitalWrite(CarroAmarelo, LOW);
    digitalWrite(CarroVermelho, HIGH);
    digitalWrite(vermelhoPedestre, LOW);
    digitalWrite(verdePedestre, HIGH);
    delay(3000);

    digitalWrite(verdePedestre, LOW);

    for( int contador = 0; contador <= 3; contador++ ) 
    {
      digitalWrite(vermelhoPedestre, HIGH);
      delay(250);
      
      digitalWrite(vermelhoPedestre, LOW);
      delay(250);
    }
    
    digitalWrite(CarroVermelho, LOW);
  }
}
