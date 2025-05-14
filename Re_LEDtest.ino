#include<FastLED.h>

#define NUM 50

CRGB leds[NUM];
int BB=0
int GRA=0

void setup() {
   FastLED.addLeds<WS2812,6>(leds,NUM);
  // put your setup code here, to run once:

}
void loop() 
{
  // put your main code here, to run repeatedly:

 for(int GRA=0; GRA<=30; GRA++)
 {
    for(int BB=0; BB<=10; BB++)
    {
    leds[BB].r=BB*GRA*5;
    leds[BB].g=BB*GRA*10;
    leds[BB].b=BB*GRA*15;
    }
 }   
FastLED.show();
delay(100);
}