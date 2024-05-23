#define buz 4
unsigned long time1 = 0; 
bool mask=0;
void setup() {
  pinMode(buz, OUTPUT);
  time1=millis();
}

void loop() {
  if(millis()-time1 >= 10000){
    digitalWrite(buz, HIGH);
    time1=millis();
    mask=1;
  }

  if((millis()-time1 >= 2000) && (mask==1)){
    digitalWrite(buz, LOW);
    mask=0;
  }
}
