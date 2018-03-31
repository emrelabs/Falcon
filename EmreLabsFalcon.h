// emrelabs.com


#ifndef EMRELABSFALCON_H
#define EMRELABSFALCON_H


#include <Arduino.h>

#define RELAY_ON  (1)
#define RELAY_OFF (0)

#define NUMBER_OF_RELAY         (6)
#define NUMBER_OF_DIGITAL_INPUT (6)
#define NUMBER_OF_ANALOG_INPUT  (2)

class EmreLabsFalcon
{
  public:
    void begin();

    void relay(uint8_t relayNumber, uint8_t relayState);
    bool readDigitalInput(uint8_t digitalInputNumber);
    uint16_t readAnalogInput(uint8_t analogInputNumber);

};


#endif // EMRELABSFALCON_H

