#include "silniki.h"      //  biblioteka sterująca silnikami
#include "output.h"       //  biblioteka przechowująca wyjścia
#include "temp.h"         //  wyswietla temperature w obudowie
#include "wiatrak.h"      //  steruje wiatrakiem
#include "led.h"          //  steruje swiatłem led
#include "autohome.h"
#include <Servo.h>
Servo chwytak;


int es2 = 39;
int es3 = 40;
int es4 = 41;
int es5 = 42;


void setup() {
  //autohomeINPUT();
  //led_zielony();
  output();
  chwytak.attach(37);
  pinMode(es2, INPUT);
  pinMode(es3, INPUT);
  pinMode(es4, INPUT);
  pinMode(es5, INPUT);

  //bmp.begin(); //temp

  pixels.begin(); //led 
 //autohome();
  Serial.begin(9600);
}


  
void loop() {
  led_zielony();
  /*delay(5000);
  silnik2(1000, 200, HIGH);

  delay(1000);
  if ((digitalRead(es2) == LOW))
  {
    digitalWrite(dirPinA, LOW); // Ustaw kierunek
      for (int x = 0; x < 1; x++) 
      {
        digitalWrite(stepPinA, HIGH);
        delayMicroseconds(500);
        digitalWrite(stepPinA, LOW);
        delayMicroseconds(500);
      }
  }*/


  //silnik1( kroki, predkosc, kierunek "HIGH = prawo" LOW = lewo) 
  //silnik2( kroki, predkosc, kierunek "HIGH = gora" LOW = ) 
  //silnik3( kroki, predkosc, kierunek "HIGH = gora" LOW = dol) 
  //silnik4( kroki, predkosc, kierunek "HIGH = dol" LOW = gora) 
  //silnik5( kroki, predkosc, kierunek "HIGH = prawo" LOW = lewo) 
chwytak.write(0);
delay(10000);

silnik5(2600, 500, HIGH); 
silnik2(2500, 600, LOW);
silnik4(5000, 600, LOW);
silnik3(550, 600, HIGH);
silnik4(2000, 600, LOW);
silnik3(550, 600, HIGH);
silnik4(700, 600, LOW);
silnik2(500, 600, LOW);
silnik3(100, 600, HIGH);
silnik4(500, 600, LOW);
silnik3(100, 600, HIGH);
silnik4(200, 600, LOW);
silnik3(200, 600, HIGH);
silnik4(400, 600, LOW);
silnik2(450, 600, HIGH);
delay(1500);
chwytak.write(50); 
silnik4(400, 1000, HIGH);
silnik3(200, 1000, LOW);
silnik4(200, 1000, HIGH);

delay(500000);

/*
silnik4(250, 1300, HIGH);
silnik2(300, 500, HIGH);
silnik3(100, 1000, HIGH);
silnik4(700, 1200, HIGH);
silnik2(500, 500, HIGH);
silnik3(500, 1000, LOW);
silnik4(1000, 1000, HIGH);
silnik3(500, 1000, LOW);
silnik4(2000, 1200, HIGH);
silnik3(500, 1000, LOW);
silnik4(5000, 1200, HIGH);
silnik2(2500, 300, HIGH);
silnik5(2650, 1000, LOW);
//delay(500);
//chwytak.write(70);
//delay(500);
delay(1000000);


*/
//silnik3(100, 1000, HIGH);
//delay(1000);
//silnik3(100, 1000, LOW);
//delay(1000);
}





  



      


