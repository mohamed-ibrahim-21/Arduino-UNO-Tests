int arr[5] = {4,7,8,12,13};

int d=50;

void setup() {
  // put your setup code here, to run once:
  for(int i = 0 ; i<5 ; i++)
    pinMode(arr[i], OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0 ; i<5 ; i++){
    for(int j = 0 ; j<5 ; j++){
      digitalWrite(arr[j], LOW);
    }
     
    digitalWrite(arr[i], HIGH);
    delay(d);
  }

  for(int i = 3 ; i>=0 ; i--){
    for(int j = 0 ; j<5 ; j++)
      digitalWrite(arr[j], LOW);

    digitalWrite(arr[i], HIGH);
    delay(d);
  }
}
