const int buzzerPin = 8;   // Buzzer connected to pin 8

void setup() {
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
}

void loop() {
  digitalWrite(buzzerPin, HIGH);  // Buzzer ON
  delay(1000);                    // Wait 1 second
  
  digitalWrite(buzzerPin, LOW);   // Buzzer OFF
  delay(1000);                    // Wait 1 second
}
