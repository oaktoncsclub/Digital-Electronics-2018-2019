#define EXTERNAL_LED 8
#define ONBOARD_LED 13
enum Interval {
  kIntervalMinimumConfirmed = 10, //ms
  kIntervalHumanObservable = 100  //ms
};

/// put your setup code here, to run once:
void setup() {
  pinMode(EXTERNAL_LED, OUTPUT);
  pinMode(ONBOARD_LED, OUTPUT);
}

/// put your main code here, to run repeatedly:
void loop() {
  digitalWrite(EXTERNAL_LED, HIGH);
  digitalWrite(ONBOARD_LED, HIGH);
  delay(kIntervalHumanObservable);
  
  digitalWrite(EXTERNAL_LED, LOW);
  digitalWrite(ONBOARD_LED, LOW);
  delay(kIntervalHumanObservable);
}
