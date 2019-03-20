//Prototipo de pasillo inteligente con arduino
//Erick Vega y Alonso Uribe
//Centro Universitario Hidalguense
//mod
int pin1=2;//Pines de entrada de sensores infrarrojos
int pin2=3;
int pin3=4;
int pin4=5;

int valor=0;
bool led=false;
bool inicio=false;

int pin10=8;//Pines de salida a leds
int pin11=9;
int pin12=10;
int pin13=11;
 
 
 void setup() {
  // put your setup code here, to run once:

pinMode(pin1, INPUT);//Definir pines de entrada para sensores
pinMode(pin2, INPUT);
pinMode(pin3, INPUT);
pinMode(pin4, INPUT);


pinMode(pin10, OUTPUT);//Definir pines de salida para leds
pinMode(pin11, OUTPUT);
pinMode(pin12, OUTPUT);
pinMode(pin13, OUTPUT);

pinMode(LED_BUILTIN, OUTPUT);
}

void repaso(){
  delay(500);
  digitalWrite(pin10,HIGH);
  delay(500);
  digitalWrite(pin11,HIGH);
  delay(500);
  digitalWrite(pin12,HIGH);
  delay(500);
  digitalWrite(pin13,HIGH);
  delay(500);
  digitalWrite(pin13,LOW);
  digitalWrite(pin12,LOW);
  digitalWrite(pin11,LOW);
  digitalWrite(pin10,LOW);
}

void loop() {
  
  if(!inicio){
  repaso();
  inicio=true;
  }
if(led==false) { 
digitalWrite(LED_BUILTIN, HIGH);
led=true;
}
else{
  digitalWrite(LED_BUILTIN, LOW);
  led=false;
}


  // put your main code here, to run repeatedly:
  
if(digitalRead(pin1) ==HIGH){//Si se corta señal en sensor 1
  
 digitalWrite(pin10,HIGH);
 digitalWrite(pin11,LOW);


  //pin10 = 1;//se prende la primer luz
}


  if(digitalRead(pin2)==HIGH&&digitalRead(pin1)==LOW){//si se detecta señal en el sensor 2 y ya no en el 1
  digitalWrite(pin11,HIGH);
  digitalWrite(pin10,LOW);
  //pin11=1;//se prende la luz 2
  //pin10=0;//y se apaga la luz 1
}

if(digitalRead(pin3)==HIGH&&digitalRead(pin2)==LOW){
  digitalWrite(pin12,HIGH);
  digitalWrite(pin11,LOW);
 // pin12=1;
  //pin11=0;
}

if(digitalRead(pin4)==HIGH&&digitalRead(pin3)==LOW){
  digitalWrite(pin13,HIGH);
  digitalWrite(pin12,LOW);
  //pin13=1;
  //pin12=0;
}

if(digitalRead(pin4)==LOW){//si ya no hay señal en el sensor 4
  delay(1000);
  digitalWrite(pin13,LOW);
  //pin13=0;//se apaga la ultima luz
}

}
