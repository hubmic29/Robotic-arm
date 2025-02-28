#include <Adafruit_NeoPixel.h>

#define PIN  4 
#define LICZBADIOD 8
 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(LICZBADIOD, PIN, NEO_GRB + NEO_KHZ800);
 

 void led_bialy()
{
  for(int i=0; i<LICZBADIOD; i++)
  {
    pixels.setPixelColor(i, 0, 0, 0); // Dioda "i" oraz skladowe R G B
    pixels.show(); // Wysylamy dane do lancucha
    delay(5); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }

}

  void led_czerwony()
{
  for(int i=0; i<LICZBADIOD; i++)
  {
    pixels.setPixelColor(i, 255,0,0); // Dioda "i" oraz skladowe R G B
    pixels.show(); // Wysylamy dane do lancucha
    delay(5); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }
}

  void led_niebieski()
{
  for(int i=0; i<LICZBADIOD; i++)
  {
    pixels.setPixelColor(i, 0,0,255); // Dioda "i" oraz skladowe R G B
    pixels.show(); // Wysylamy dane do lancucha
    delay(5); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }

}

   void led_zielony()
{
  for(int i=0; i<LICZBADIOD; i++)
  {
    pixels.setPixelColor(i, 0,255,2); // Dioda "i" oraz skladowe R G B
    pixels.show(); // Wysylamy dane do lancucha
    delay(5); // Opoznienie 500ms przed zaswieceniem kolejnej diody
  }
}