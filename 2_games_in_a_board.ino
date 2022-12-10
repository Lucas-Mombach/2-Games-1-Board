#include <LiquidCrystal.h>

//includes of Game1

//

//includes of Game2

//
int y = 0;
bool is_startin = 0;

LiquidCrystal lcd(8,9,4,5,6,7);

//
void Game1Setup()
{
//Game 1 Setup goes here
 //
  lcd.setCursor(1,0);
  lcd.clear();
  lcd.print("Game 1 waiting...");
  delay(1000);
  //
}
void Game2Setup(){
  //Game 2 Setup goes here
  lcd.setCursor(4,0);
  lcd.clear();
  lcd.print("Game 2 waiting..");
  delay(1000);
  //
}
void Game1(){
  lcd.setCursor(4,0);
  lcd.clear();
  lcd.print("Game 1");

}
void Game2(){
  lcd.setCursor(4,0);
  lcd.clear();
  lcd.print("Game 2");
}
//functions Game 1
  
//
//functions Game 2

//

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(1,0);
  lcd.print("[UP] Game1");
  lcd.setCursor(1,1);
  lcd.print("[DOWN] Game2");
   //UP
   delay(1000);
}

void loop() {
  // if com variavel que lembra que já passou do MENU
  
  if (is_startin==0){
    
    Serial.println(analogRead(0));
    
    if ((analogRead(0)) < 200 &&(analogRead(0)) ) {
      y=3;//Game1
      Game1Setup();
      is_startin = 1; 
    }
    
    else if ((analogRead(0)) > 200 && (analogRead(0)) < 400) {      
       y=100;//Game2
       Game2Setup();
       is_startin = 1;
    }
      
  }
  delay(1000);
  if (y==3){
      Game1();
    }
    else if (y==100) {
      Game2();
    }
  }
