#include <Arduino.h>
#include <LiquidCrystal.h>

//Parameter --> (rs,en,d4,d5,d6,d7)
LiquidCrystal lcd (8, 9, 4, 5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  //setCursor(column,row)
  lcd.setCursor(4,0);
  lcd.print("JANCUK!!!");
  while(1); //wait
}