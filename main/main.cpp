#include "Arduino.h"
extern "C" void app_main()
{
initArduino();
pinMode(5, OUTPUT);
digitalWrite(5, HIGH);
//do your own thing
}
