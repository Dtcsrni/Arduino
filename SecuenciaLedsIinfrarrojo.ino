int pin1=2;//Pines de entrada de sensores infrarrojos
int pin2=3;
int pin3=4;
int pin4=5;

int valor=0;

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
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = digitalRead(pin1);
if(valor ==1){//Si se detecta señal en sensor 1
  
 digitalWrite(pin10,HIGH);
  //pin10 = 1;//se prende la priner luz
}
  valor = digitalRead(pin2);
  valor = digitalRead(pin1);
if(pin2==1&&pin1==0){//si se detecta señal en el sensor 2 y ya no en el 1
  digitalWrite(pin11,HIGH);
  digitalWrite(pin10,LOW);
  //pin11=1;//se prende la luz 2
  //pin10=0;//y se apaga la luz 1
}
 valor = digitalRead(pin3);
  valor = digitalRead(pin2);
if(pin3==1&&pin2==0){
  digitalWrite(pin12,HIGH);
  digitalWrite(pin11,LOW);
 // pin12=1;
  //pin11=0;
}
valor = digitalRead(pin4);
valor = digitalRead(pin3);
if(pin4==1&&pin3==0){
  digitalWrite(pin13,HIGH);
  digitalWrite(pin12,LOW);
  //pin13=1;
  //pin12=0;
}
valor = digitalRead(pin4);
if(pin4==0){//si ya no hay señal en el sensor 4
  digitalWrite(pin13,LOW);
  //pin13=0;//se apaga la ultima luz
}

}
