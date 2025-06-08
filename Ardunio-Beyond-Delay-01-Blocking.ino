#include <Arduino.h>

uint8_t ledPin1 = 13;
uint8_t ledPin2 = 12;
uint8_t ledPin3 = 10;

void blinkDelay(int duration,int ledPin)
{
  digitalWrite(ledPin, HIGH);
  delay(duration);
  digitalWrite(ledPin, LOW);
  delay(duration);
}

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  blinkDelay(1000, ledPin1); // LED 1: 1 second on, 1 second off
  blinkDelay(200, ledPin2);  // LED 2: 200 ms on, 200 ms off
  blinkDelay(100, ledPin3);  // LED 3: 100 ms on, 100 ms off
}