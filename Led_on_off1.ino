int LED_INPUT = 9; //Numero de pin de inicializacion

void setup() 
{
  Serial.begin(9600); //Bits por Segundo, transmision de datos en serie
  pinMode(LED_INPUT,OUTPUT); //Epecificar el comportamiento del pin de entrada o salida

}

void loop() 
{
  char data; //Los datos resibidos se guardaran en esta variable
  if(Serial.available()) //Comprobamos si hay datos disponibles o no
  {
    data=Serial.read(); //Recibe datos
    if(data=='f') //Led encendido
    {
      digitalWrite(LED_INPUT,HIGH); //Escribe un valor alto o bajo a un pin digital
    }
    if(data=='b') //Led apagado
    {
      digitalWrite(LED_INPUT,LOW);
    }
  }
}
