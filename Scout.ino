/*

 * SCOUT : Smart People Counter
 * Instructables : http://www.instructables.com/member/Geeve+George

*/


#include <rgb_lcd.h>
#include <SPI.h>
#include <Wire.h>

rgb_lcd lcd;

int SensorPin = A0;
int counter = 0;
void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(SensorPin,INPUT);

}

void loop() {
  int SensorVal = analogRead(SensorPin);
  

  if(SensorVal<770)
  {
    
    counter++;
    
    if(counter==1)
    {
      lcd.clear();
      lcd.print(counter);
      lcd.print(" person");
      
      delay(3000);
    }
    
    else if(counter>1)
    {
      lcd.clear();
      lcd.print(counter);
      lcd.print(" people");
      
      delay(3000);
    }
    
    
  }
  

}
