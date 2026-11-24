#include <Arduino.h>
#define DAC_PIN 25
#define PWM_PIN 16
void setup()
{
  Serial.begin(115200);
  ledcAttach(PWM_PIN, 5000, 8);
}
void loop()
{
  dacWrite(DAC_PIN, 128);
  ledcWrite(PWM_PIN, 128);
  Serial.println("DAC=128 | PWM duty=128");
  delay(1000);
}