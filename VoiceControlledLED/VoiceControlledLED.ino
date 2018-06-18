/*ariviyal*/
#include <SoftwareSerial.h>
String value;
int TxD = 6;
int RxD = 7;
SoftwareSerial bluetooth(TxD, RxD);
void setup() 
{
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
Serial.begin(9600);      
bluetooth.begin(9600);
}
void loop() 
{
Serial.println(value);
if (bluetooth.available())
{
value = bluetooth.readString();
if (value== "all LED turn on")
{
digitalWrite(5, HIGH);
digitalWrite(4, HIGH);  
}
if (value == "all LED turn off")
{
digitalWrite(5, LOW); 
digitalWrite(4, LOW);       
}
if (value == "first LED turn on")
{
digitalWrite(5, HIGH); 
}
if (value == "second LED turn on")
{
digitalWrite(4, HIGH);       
}    
if (value == "first LED turn off")
{
digitalWrite(5, LOW); 
}
if (value == "second LED turn off")
{
digitalWrite(4, LOW);}
}
}
