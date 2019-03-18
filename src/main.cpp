#include <mbed.h>

static const uint8_t led_mask[] = { 0x01, 0x02, 0x04, 0x02 };
BusOut leds(LED1,LED2,LED3);

int main()
{
    int k = sizeof(led_mask), n = 0;
    while(1)
    {
        leds = led_mask[n%k];
        n++;
        ThisThread::sleep_for(1000);
    }
}