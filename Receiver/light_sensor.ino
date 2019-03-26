int analogPin = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  int lightLevel = analogRead(analogPin);
  float voltage = lightLevel * (5.0 / 1024.0);
  Serial.println(voltage);
}
