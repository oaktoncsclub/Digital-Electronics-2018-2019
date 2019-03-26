#define EXTERNAL_LED 8
#define ONBOARD_LED 13
enum Interval {
  kIntervalMinimumConfirmed = 10, //ms
  kIntervalHumanObservable = 100,  //ms
  kTest = 20
};

/// put your setup code here, to run once:
void setup() {
  pinMode(EXTERNAL_LED, OUTPUT);
  pinMode(ONBOARD_LED, OUTPUT);
  Serial.begin(9600);
}

/// put your main code here, to run repeatedly:
void loop() {
  unsigned long t1 = millis();
  digitalWrite(EXTERNAL_LED, HIGH);
  digitalWrite(ONBOARD_LED, HIGH);
  delay(kTest);
  
  digitalWrite(EXTERNAL_LED, LOW);
  digitalWrite(ONBOARD_LED, LOW);
  delay(kTest);
  Serial.println(millis() - t1);
}
