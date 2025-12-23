#define joystick1X 35
#define joystick1Y 32

void setup() {
  pinMode(joystick1X, INPUT);
  pinMode(joystick1Y, INPUT);
  Serial.begin(9600);
}

void loop() {
  int x,y;
  x = analogRead(joystick1X);
  y = analogRead(joystick1Y);
  Serial.print(x);
  Serial.print("  ,   ");
  Serial.print(y);
  delay(100);
}
