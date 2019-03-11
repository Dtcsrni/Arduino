 
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

pinMode(pin1, INPUT);
pinMode(pin2, INPUT);
pinMode(pin3, INPUT);
pinMode(pin4, INPUT);

pinMode(luz1, INPUT);
pinMode(luz2, INPUT);
pinMode(luz3, INPUT);
pinMode(luz4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(pin1==1){
  luz1 = 1;
}
if(pin2==1&&pin1==0){
  luz2=1;
  luz1=0
}
if(pin3==1&&pin2==0){
  luz3=1;
  luz2=0;
}
if(pin4==1&&pin3==0){
  luz4=1;
  luz3=0;
}
if(pin4==0){
  luz4=0;
}

}
