#include <Wire.h>
#include <Adafruit_MCP4725.h>

Adafruit_MCP4725 dac;
uint32_t DAC_Output;

void setup(void) {
  Serial.begin(9600);
  dac.begin(0x60);
  Serial.println("Generating a Square Waveform");
}

void loop(void) {
    DAC_Output = 0;
    dac.setVoltage(DAC_Output, false);
    delay(1400);
    DAC_Output = 4095;
    dac.setVoltage(DAC_Output, false);
    delay(25);
}
