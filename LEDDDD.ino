#include<FastLED.h>

#define NUM 50

CRGB leds[NUM];
int BB=0;
int GRA=0;
int Mist=0;
int Blue=0;
int Grean=0;

void setup() {
   FastLED.addLeds<WS2812,6>(leds,NUM);
  // put your setup code here, to run once:

}
void loop() 
{
  // put your main code here, to run repeatedly:
 for(int BB=0; BB<=256; BB++)
 {
    for(int GRA=0; GRA<=50; GRA++)
    {
       for(int Mist=0; Mist<=50; Mist++)
       {
        leds[Mist].r=0;
        leds[Mist].g=30;
        leds[Mist].b=0;
        leds[GRA].r=GRA*BB;
        leds[GRA].g=GRA*BB;
        leds[GRA].b=GRA*BB;
        leds[GRA+10].r=GRA*BB+10;
        leds[GRA+10].g=GRA*BB+10;
        leds[GRA+10].b=GRA*BB+10;
        leds[GRA+25].r=GRA*BB+10;
        leds[GRA+25].g=GRA*BB+10;
        leds[GRA+25].b=GRA*BB+10;
        FastLED.show();
        delay(0);
       }

    }
 } 
}