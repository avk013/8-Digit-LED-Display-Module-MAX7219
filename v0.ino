#include <LedControl.h>

LedControl lc=LedControl(12,11,10,1);
void setup () 
{
lc.shutdown(0,false); // Enable display 
lc.setIntensity(0,3); // Set brightness level (0 is min, 15 is max) 
lc.clearDisplay(0); // Clear display register 
}

void to8d(int strok, int pos){
String c=String(strok);
byte a=c[0]-'0';
byte b=c[1]-'0';
// если цифры нет двигаем разряды
  if (b==208) {b=a;a=0;} 
    // номер устровйства, позиция, значение, точка
  lc.setDigit(0,pos+1,a,false);
  lc.setDigit(0,pos,b,false);}
void loop () 
{
    to8d(10,0);

    to8d(38,3);

    to8d(4,6);
    
    delay(1000);
}
