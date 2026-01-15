#include <Arduino.h>

// Pin definitions
const int outputPin = 3;  // Pin to control (e.g., LED or relay)
const int sensorPin = 6;  // Pin connected to soil moisture sensor

void setup() 
{
  pinMode(outputPin, OUTPUT); 
  pinMode(sensorPin, INPUT); 
}

void loop() 
{ 
  int soil = digitalRead(sensorPin); // Read the soil moisture sensor

  if (soil == HIGH)  
  {
    digitalWrite(outputPin, LOW); // Turn off output (e.g., LED off)
    
  }
  else
  {
    digitalWrite(outputPin, HIGH); // Turn on output (e.g., LED on)
  }
  
  delay(400); // Delay for stability
}