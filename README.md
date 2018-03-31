# Falcon
Arduino based input output card

// relay example use
falconIO.relay(1, RELAY_ON);  // relay-1 on
falconIO.relay(1, RELAY_OFF); // realy-1 off

// digital input example use
if( falconIO.readDigitalInput(1) )
{
}

// analog input example use
int analogValue = falconIO.readAnalogInput(1);
