// emrelabs.com

#include "EmreLabsFalcon.h"


EmreLabsFalcon falconIO;


// relay example use
// falconIO.relay(1, RELAY_ON);  // relay-1 on
// falconIO.relay(1, RELAY_OFF); // realy-1 off

// digital input example use
// if( falconIO.readDigitalInput(1) )
// {
// }

// analog input example use
// int analogValue = falconIO.readAnalogInput(1);


void setup() {
  
  falconIO.begin();

}

void loop() {

  // relay on-off test
  for(int i = 1; i <= 6 ; i++)
  {
    falconIO.relay(i, RELAY_ON);
    delay(500);
    falconIO.relay(i, RELAY_OFF); 
    delay(500);    
  }


}
