1. update the esp-idf according to [this guide](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/#updating-esp-idf).
2. clone `$esp-idf/examples/get-started/hello_world` to a folder and navigate to it.
3. Execute this to install the Arduino library:
```
mkdir -p components && \
cd components && \
git clone https://github.com/espressif/arduino-esp32.git arduino && \
cd arduino && \
git submodule update --init --recursive && \
cd ../.. && \
make menuconfig
```
4. Enable "Include only specific Arduino libraries", then disable SD_MMC.
5. Set "Flash Size" to 4MB in "Serial flasher config" and enable C++ exceptions.
6. Edit main/CMakeLists.txt and change "hello_world_main.c" to "main.cpp".
7. paste this into your main.cpp to see if it worked. 
```
#include "Arduino.h"
extern "C" void app_main()
{
initArduino();
pinMode(4, OUTPUT);
digitalWrite(4, HIGH);
//do your own thing
}```
