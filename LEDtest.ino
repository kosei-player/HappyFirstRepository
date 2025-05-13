#include<FastLED.h>

#define NUM 50

CRGB leds[NUM];

int GR=0;
int BR=0;
int BA=0;

void setup() {
   FastLED.addLeds<NEOPIXEL,6>(leds,NUM);
  // put your setup code here, to run once:

}
void loop() {
  // put your main code here, to run repeatedly:
 for(int BB=0; BB<=9; BB++)
 {
   if(BB<=1)
   {
    BR++;
   } 
    if(BB<=3)
   {
    BR++;
   } 
    if(BB<=5)
   {
    BR++;
   } 
    if(BB<=7)
   {
    BR++;
   } 
    if(BB<=9)
   {
    BR++;
   } 
  
  
    for(int i=0; i<=9; i++)
   {
    leds[i].r=255;
    leds[i].g=GR;
    leds[BB].b=BR;
   }
   FastLED.show();
   GR++;
   if(BR>=255)
   {
    BR=0;
   }    
  }
}
