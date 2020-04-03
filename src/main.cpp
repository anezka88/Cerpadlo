// Cerpadlo
#include <Arduino.h>
int tlacitko = 13;
int cerpadlo = 15;

void setup() {
  Serial.begin(9600);
  pinMode(tlacitko, INPUT_PULLUP);
  pinMode(cerpadlo, OUTPUT);
}

void loop() {
  int stav = digitalRead (tlacitko);
  Serial.println(stav);
  if (stav == 0)
  {
    digitalWrite (cerpadlo, 1);
  }
  else
  {
    digitalWrite (cerpadlo, 0);
  }
  
}