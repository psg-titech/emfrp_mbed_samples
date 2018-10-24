#include <mbed.h>

extern "C" {
#include "FRPBlinker.h"
}

Timer timer;
DigitalOut _led1(LED1);

extern "C"
void Input(int *msec) {
    *msec = timer.read_ms();
}

extern "C"
void Output(int *led1) {
    _led1 = *led1;
}

int main() {
    timer.start();
    ActivateFRPBlinker();
}

