#include <LiquidCrystal.h>

//includes do Jogo 1

//

//includes do Jogo 2 

//
int game = 0;
bool is_startin = 0;

LiquidCrystal lcd(8,9,4,5,6,7);

//

//funções e inclusões do Jogo 1
  
//
//funções e inclusões do Jogo 1

//
void Game1Setup()
{
  //Setup do Jogo 1
    //
    
    //
}
void Game2Setup(){
  //Setup do Jogo 2
  
  //
}
void Game1(){
 //Loop do jogo 1

 //
}
void Game2(){
 //Loop do jogo 

 //
}


void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(1,0);
  lcd.print("[UP] Jogo1");
  lcd.setCursor(1,1);
  lcd.print("[DOWN] Jogo2");
   delay(1000);
}

void loop() {

  if (is_startin==0){
    
    Serial.println(analogRead(0));
    
    if ((analogRead(0)) < 200 &&(analogRead(0)) ) {
      game=1;//jogo 1
      Game1Setup();
      is_startin = 1; 
    }
    
    else if ((analogRead(0)) > 200 && (analogRead(0)) < 400) {      
       game=2;//jogo 2
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
