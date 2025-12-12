#include <Adafruit_CircuitPlayground.h>

float value;

int PixelColorNum;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {


  // Take 10 milliseconds of sound data to calculate
  value = CircuitPlayground.mic.soundPressureLevel(1);
  
  Serial.print("Sound Sensor SPL: ");
  Serial.println(value);

  delay(90);

  PixelColorNum = map(value, 43, 1023, 0, 255);
  CircuitPlayground.setPixelColor(1,255,0,255);
  CircuitPlayground.setPixelColor(2,255,0,255);
  CircuitPlayground.setPixelColor(3,255,0,255);
  CircuitPlayground.setPixelColor(4,255,0,255);
  CircuitPlayground.setPixelColor(5,255,0,255);
  CircuitPlayground.setPixelColor(6,255,0,255);
  CircuitPlayground.setPixelColor(7,255,0,255);
  CircuitPlayground.setPixelColor(8,255,0,255);
  CircuitPlayground.setPixelColor(9,255,0,255);
  CircuitPlayground.setPixelColor(0,255,0,255);
  CircuitPlayground.setBrightness(PixelColorNum);
}

//sound range 0-1023