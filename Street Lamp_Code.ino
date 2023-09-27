#include <LiquidCrystal.h>

LiquidCrystal lcd(4, 6, 10, 11, 12, 13);

int ldrPin=A0;
int lampPin=2;
int SensorOut=0;


void setup() {
  lcd.begin(16,2);
  pinMode(lampPin, OUTPUT);
}  

void loop() {
  SensorOut=analogRead(ldrPin);

  if (SensorOut < 370){
    digitalWrite(lampPin, HIGH);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Resistor Value: ");
    lcd.setCursor(0,1);
    lcd.print(SensorOut);
    }
  else{
    digitalWrite(lampPin, LOW);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Resistor value: ");
    lcd.setCursor(0,1);
    lcd.print(SensorOut);
    
    }
    delay(500);
 
}
