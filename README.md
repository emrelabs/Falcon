# Falcon
Arduino based input output card

// relay example use <br />
falconIO.relay(1, RELAY_ON);  // relay-1 on <br />
falconIO.relay(1, RELAY_OFF); // realy-1 off <br />
<br />
// digital input example use <br />
if( falconIO.readDigitalInput(1) ) <br />
{ <br />
} <br />
<br />
// analog input example use <br />
int analogValue = falconIO.readAnalogInput(1); <br />

