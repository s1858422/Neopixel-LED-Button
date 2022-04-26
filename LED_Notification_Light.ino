#include "FastLED.h"

#define NUM_LEDS 1

#define DATA_PIN 12

CRGB leds[NUM_LEDS];

const int BUTTON_PIN = 2;

int leds = 0;
int lastButtonState;    // the previous state of button
int currentButtonState; // the current state of button

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //  pinMode(BUTTON_PIN, INPUT_PULLUP);
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);

  currentButtonState = digitalRead(BUTTON_PIN);
}

void loop() {
  //  // put your main code here, to run repeatedly:
  lastButtonState    = currentButtonState;      // save the last state
  currentButtonState = digitalRead(BUTTON_PIN); // read new state

  if (lastButtonState == HIGH && currentButtonState == LOW) {
    Serial.println("The button is pressed");

     if(leds[0] = CRGB::White)
      leds[0] = CRGB::Black;
    else
    if(leds[0] = CRGB::Black)
      leds[0] = CRGB::White;
    
    
    
    
    
    //  leds[1] = CRGB::Blue;
    //  leds[2] = CRGB::White;
    //  strip.setBrightness(50);
    FastLED.show();
   

  }

}
