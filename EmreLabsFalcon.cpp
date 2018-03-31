// emrelabs.com


#include "EmreLabsFalcon.h"


const uint8_t relayPinTable[NUMBER_OF_RELAY] = { A0, A1, A2, A3, A4, A5 };
const uint8_t digitalInputPinTable[NUMBER_OF_DIGITAL_INPUT] = { 2, 3, 4, 5, 6, 7 };
const uint8_t analogInputPinTable[NUMBER_OF_ANALOG_INPUT] = { A6, A7};


void EmreLabsFalcon::begin()
{
  for (int i = 1; i <= NUMBER_OF_DIGITAL_INPUT;  i++ )
  {
    pinMode(digitalInputPinTable[i - 1], INPUT);
  }

  for (int i = 1; i <= NUMBER_OF_RELAY;  i++ )
  {
    pinMode(relayPinTable[i - 1], OUTPUT);
    relay(i, RELAY_OFF);
  }
}

void EmreLabsFalcon::relay(uint8_t relayNumber, uint8_t relayState)
{
  if (relayNumber  > NUMBER_OF_RELAY)
  {
    return;
  }

  digitalWrite(relayPinTable[relayNumber - 1], relayState == RELAY_ON ? HIGH : LOW );
}

bool EmreLabsFalcon::readDigitalInput(uint8_t digitalInputNumber)
{
  if (digitalInputNumber == 0 ||
      digitalInputNumber  > NUMBER_OF_DIGITAL_INPUT)
  {
    return false;
  }

  return !digitalRead(digitalInputPinTable[digitalInputNumber - 1]);
}

uint16_t EmreLabsFalcon::readAnalogInput(uint8_t analogInputNumber)
{
  if (analogInputNumber == 0 ||
      analogInputNumber  > NUMBER_OF_ANALOG_INPUT)
  {
    return false;
  }

  return analogRead(analogInputPinTable[analogInputNumber - 1]);
}

