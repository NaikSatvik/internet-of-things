const int POTENTIOMETER_PIN = A0; // Arduino pin connected to Potentiometer pin
const int LED_PIN           = 13;  // Arduino pin connected to LED's pin

void setup() {
  pinMode(LED_PIN, OUTPUT); // set arduino pin to output mode
}

void loop() {
  int analogValue = analogRead(POTENTIOMETER_PIN); // read the input on analog pin
  analogWrite(LED_PIN, analogValue/4);
}
