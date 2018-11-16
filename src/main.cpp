#include <mbed.h>
#include <Thread.h>

const int led_mask[] = {1,2,4};
BusOut leds(LED1,LED2,LED3);

int main()
{
    unsigned n = 0;
    while(1)
    {
        leds = led_mask[n%3];
        n++;
        ThisThread::sleep_for(1000);
    }
}