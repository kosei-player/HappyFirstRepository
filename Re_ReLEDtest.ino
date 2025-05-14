#include<FastLED.h>

#define NUM 50

CRGB leds[NUM];

int GR=0;
int BA=0;
int RD=255;

void setup() {
   FastLED.addLeds<WS2812,6>(leds,NUM);
  // put your setup code here, to run once:

}
void loop() {
  // put your main code here, to run repeatedly:
 for(int BB=0; BB<=20; BB++)
 {
  leds[BB].r=BB*5;
  leds[BB].g=BB*10;
  leds[BB].b=BB*20;
 }
    
FastLED.show();
delay(10);
GR = (GR + 10) % 256;
RD = (RD + 10) % 256;
}