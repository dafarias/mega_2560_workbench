#include <Arduino.h>

// define pins
const uint8_t RED_PIN = 6;
const uint8_t GREEN_PIN = 3;
const uint8_t BLUE_PIN = 5;

void setup()
{
    randomSeed(analogRead(A0));
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);
    Serial.begin(9600);
}



uint8_t tweakIntensity(uint8_t pin)
{
    uint8_t new_light_value = random(0, 256);
    // get the current value of the pin, and return a random value
    // between 0 and 255, to play with the intensity of the led.

    return new_light_value;
}


void loop()
{   
    uint8_t red_light = tweakIntensity(RED_PIN);
    uint8_t green_light = tweakIntensity(GREEN_PIN);
    uint8_t blue_light = tweakIntensity(BLUE_PIN);

    analogWrite(RED_PIN, red_light);
    analogWrite(GREEN_PIN, green_light);
    analogWrite(BLUE_PIN, blue_light);

    Serial.print("R=");  Serial.print(red_light);
    Serial.print(" G="); Serial.print(green_light);
    Serial.print(" B="); Serial.println(blue_light);

    delay(5000);
}
