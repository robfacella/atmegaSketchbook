int red = 0;
int blue = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
}
void rt() {
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(11, LOW);
  delay(1000);
}
void bt() {
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(1000);
}
void loop() {
  // put your main code here, to run repeatedly:
  bt();
  rt();
}
