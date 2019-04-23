int analogPin = 0;
float last = 0.0;
float threshold = 3.0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(analogPin);
  float voltage = lightLevel * (5.0 / 1024.0);

//  if (voltage > threshold) {
//    Serial.println(1);
//  }
//  else {
//    Serial.println(0);
//  }
  
  if (last < threshold && voltage > threshold) {
    Serial.println(1);
  }
  else if (last > threshold && voltage < threshold) {
    Serial.println(0);
  }
  else {
    Serial.println(9);
  }
  last = voltage;
}
