#include <Wire.h>
#include <Adafruit_MCP4725.h>

Adafruit_MCP4725 dac;

void setup(void) {
  Serial.begin(9600);
  dac.begin(0x60);
  Serial.println("Generating a Triangle Waveform");
}

void loop(void) {
    uint32_t DAC_Output;

    for (DAC_Output = 0; DAC_Output < 4095; DAC_Output++)
    {
      dac.setVoltage(DAC_Output, false);
      delayMicroseconds(220);
    }
    for (DAC_Output = 4095; DAC_Output > 0; DAC_Output--)
    {
      dac.setVoltage(DAC_Output, false);
      delayMicroseconds(220);
    }
}
