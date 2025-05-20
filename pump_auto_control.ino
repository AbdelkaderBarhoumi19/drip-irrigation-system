// File: pump_auto_control.ino

const int relayPin = 8; // Digital pin connected to relay module

void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Pump ON");
  digitalWrite(relayPin, LOW);  // Active LOW relay
  delay(5000); // Run pump for 5 seconds

  Serial.println("Pump OFF");
  digitalWrite(relayPin, HIGH);
  delay(5000); // Wait 5 seconds before next cycle
}
