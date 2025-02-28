#include <silniki.h> // biblioteka sterująca silnikami
#include <output.h> //biblioteka przechowująca wyjścia



void setup() {

  output();

  bmp.begin(); //temp

  Serial.begin(9600);
}


  
void loop() {
  
  silnik1();

  silnik2();

  silnik3();

  silnik4();

  silnik5();

      
}
