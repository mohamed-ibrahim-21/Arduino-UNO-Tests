const int sensorPin = 2; 
int lastState = HIGH;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(sensorPin);

  if (state != lastState) {
    lastState = state;

    if (state == LOW) {
      Serial.println("BOX_ON");
    } else {
      Serial.println("BOX_OFF");
    }

    delay(50);
  }
}
