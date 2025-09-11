#define OUTPUT_PIN 3
bool is_on = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(OUTPUT_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //is_on = !is_on;
  //digitalWrite(OUTPUT_PIN, is_on);
  digitalWrite(OUTPUT_PIN, HIGH);
  usleep(500);
  //delay(2);
  digitalWrite(OUTPUT_PIN, LOW);
  usleep(500);
  //delay(1);
}
