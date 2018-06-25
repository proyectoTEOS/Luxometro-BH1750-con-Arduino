/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  Google Plus https://goo.gl/gBnUdh
  WEB https://goo.gl/jtiYJy
*/

#include <Wire.h>
#include <BH1750.h> //https://github.com/claws/BH1750
uint16_t lightLevelT;
String resultSerialT;

BH1750 lightRegisterT;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  lightRegisterT.begin();
}


void loop() {
  lightLevelT = lightRegisterT.readLightLevel();
  resultSerialT = "Flujo luminoso: " + String(lightLevelT) + " lx";
  Serial.println(resultSerialT);
  delay(1000);
}
