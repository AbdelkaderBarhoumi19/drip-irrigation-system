// File: water_level.ino

const int waterLevelPin = 7; // digital pin connected to OKD-1052P

void setup() {
  pinMode(waterLevelPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int waterState = digitalRead(waterLevelPin);
  
  if (waterState == HIGH) {
    Serial.println("Water level: LOW");
  } else {
    Serial.println("Water level: OK");
  }

  delay(1000);
}
