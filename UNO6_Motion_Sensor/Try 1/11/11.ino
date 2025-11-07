int sensor = 2; // البن اللي واصل فيه الحساس
void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(sensor);
  if (motion == HIGH) {
    Serial.println("motion_detected");
    delay(5000); // انتظار 5 ثواني لتجنب التكرار
  }
}
