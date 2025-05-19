#include <Wire.h>
#include <ds3231.h>
 
struct ts t; 
 
void setup() {
  Serial.begin(9600);
  Wire.begin();
  DS3231_init(DS3231_CONTROL_INTCN);
}
 
void loop() {
  DS3231_get(&t);
  Serial.print("Date : ");
  Serial.print(t.mday);
  Serial.print("/");
  Serial.print(t.mon);
  Serial.print("/");
  Serial.print(t.year);
  Serial.print("\t Hour : ");
  Serial.print(t.hour);
  Serial.print(":");
  Serial.print(t.min);
  Serial.print(".");
  Serial.println(t.sec);
 
  delay(1000);
}
