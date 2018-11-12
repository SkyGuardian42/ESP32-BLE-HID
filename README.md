1. clone `$esp-idf/examples/get-started/hello_world` to a folder and navigate to it
2. Execute this:
```mkdir -p components && \
cd components && \
git clone https://github.com/espressif/arduino-esp32.git arduino && \
cd arduino && \
git submodule update --init --recursive && \
cd ../.. && \
make menuconfig
```
3. Enable "Include only specific Arduino libraries", then disable SD_MMC
4. Set "Flash Size" to 4MB in "Serial flasher config" and enable C++ exceptions
5. Edit main/CMakeLists.txt and change "hello_world_main.c" to "main.cpp"
6. paste 
```#include "Arduino.h"
extern "C" void app_main()
{
initArduino();
pinMode(4, OUTPUT);
digitalWrite(4, HIGH);
//do your own thing
}```
