#include <LiquidCrystal.h>

//includes of Game1

//

//includes of Game2

//
int game = 0;
bool is_startin = 0;

LiquidCrystal lcd(8,9,4,5,6,7);

//

//functions and variables of Game 1
  
//
//functions and variables of Game 2

//
void Game1Setup()
{
//Game 1 Setup goes here
 //
  
  //
}
void Game2Setup(){
  //Game 2 Setup goes here
  
  //
}
void Game1(){
 //Loop of Game 1 goes here

 //
}
void Game2(){
  //Loop of Game 2 goes here

 //
}


void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(1,0);
  lcd.print("[UP] Game1");
  lcd.setCursor(1,1);
  lcd.print("[DOWN] Game2");
   delay(1000);
}

void loop() {

  if (is_startin==0){
    
    Serial.println(analogRead(0));
    
    if ((analogRead(0)) < 200 &&(analogRead(0)) ) {
      game=1;//Game1
      Game1Setup();
      is_startin = 1; 
    }
    
    else if ((analogRead(0)) > 200 && (analogRead(0)) < 400) {      
       game=2;//Game2
       Game2Setup();
       is_startin = 1;
    }
      
  }
  
  if (game==1){
      Game1();
    }
    else if (game==2) {
      Game2();
    }
  }
