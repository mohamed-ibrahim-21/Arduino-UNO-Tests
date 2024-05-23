#define sw 13
#define led 2
void setup(){
  serial.begin(9600);
  pinMode(sw,INPUT_PULLUP);
  pinMode(led,OUTPUT);
}

void loop(){
  if(digitalRead(se)==HIGH){
    digitalWrite(led,HIGH);
  }
  else{
    digitalWrite(led,LOW);
  }

}