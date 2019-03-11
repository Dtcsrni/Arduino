 
int pin1=0;//Pines de entrada de sensores infrarrojos
int pin2=0;
int pin3=0;
int pin4=0; 

int luz1=0;//Pines de salida a leds
int luz2=0;
int luz3=0;
int luz4=0;
 
 
 void setup() {
  // put your setup code here, to run once:

pinMode(pin1, INPUT);//Definir pines de entrada para sensores
pinMode(pin2, INPUT);
pinMode(pin3, INPUT);
pinMode(pin4, INPUT);

pinMode(luz1, OUTPUT);//Definir pines de salida para leds
pinMode(luz2, OUTPUT);
pinMode(luz3, OUTPUT);
pinMode(luz4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(pin1==1){//Si se detecta señal en sensor 1
  luz1 = 1;//se prende la priner luz
}
if(pin2==1&&pin1==0){//si se detecta señal en el sensor 2 y ya no en el 1
  luz2=1;//se prende la luz 2
  luz1=0//y se apaga la luz 1
}
if(pin3==1&&pin2==0){
  luz3=1;
  luz2=0;
}
if(pin4==1&&pin3==0){
  luz4=1;
  luz3=0;
}
if(pin4==0){//si ya no hay señal en el sensor 4
  luz4=0;//se apaga la ultima luz
}

}
