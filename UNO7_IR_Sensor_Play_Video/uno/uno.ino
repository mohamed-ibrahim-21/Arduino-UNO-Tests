const int sensorPin = 2;  // البن المتوصل بـ OUT
int lastState = HIGH;

void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600); // نفس البودريت اللي هنستخدمه في الكمبيوتر
}

void loop() {
  int state = digitalRead(sensorPin);

  // بعض الموديولات بتطلع LOW لما في حاجه قدامها
  if (state != lastState) {
    lastState = state;

    if (state == LOW) {        // جرّب LOW الأول، ولو لقيته العكس خليه HIGH
      Serial.println("BOX_ON");
    } else {
      Serial.println("BOX_OFF");
    }

    delay(50); // تهدئة بسيطة عشان ميقفلش ويفتح بسرعة
  }
}
