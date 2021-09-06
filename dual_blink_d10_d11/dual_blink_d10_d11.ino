int red = 0;
int blue = 0;
int dC = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}
void rt() {
  if (red == 0){
    digitalWrite(11, HIGH);
    delay(dC);
    red = 1;
  }
  else {
    digitalWrite(11, LOW);
    delay(dC);
    red = 0;
  }
}
void bt() {
  digitalWrite(10, HIGH);
  delay(dC);
  digitalWrite(10, LOW);
  delay(dC);
}
void loop() {
  // put your main code here, to run repeatedly:
  bt();
  rt();
}
