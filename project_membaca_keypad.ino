//Proyek #34: Membaca Keypad
#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11, 10, 9, 8, 7);
const byte JmlBaris = 4;
const byte JmlKolom = 3;
char keys[JmlBaris][JmlKolom] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

  byte PinBaris[JmlBaris] = {3, 2, 1, 0}; 

byte PinKolom[JmlKolom] = {4, 5, 6}; 
int count=0;
Keypad keypad = Keypad(makeKeymap(keys), PinBaris, PinKolom, JmlBaris, JmlKolom );
void setup(){
  lcd.begin(16,2);
}
  
void loop()
{
  
  char key = keypad.getKey();
  if (key != NO_KEY)
  {
    lcd.print(key); 
    count++;   
  }
}
