
#include <LiquidCrystal.h>
#define ECHO 0
#define TRIG 1

LiquidCrystal lcd{12, 11, 10, 9, 8, 7};

float time;

void setup() {
  lcd.begin(16, 2);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");

  digitalWrite(TRIG, LOW);
  delayMicroseconds(5);

  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG, LOW);

  time = pulseIn(ECHO, HIGH);

  int distance = time / 57.80346820;
  
  lcd.print(distance);
  lcd.print("cm");

  delay(500);
  lcd.clear();
}
