#include "stc8h.h"
#include "gpio.h"
#include "delay.h"

#define PIN_LED P10


void main(void)
{
    // Setup
    P_SW2 |= 0x80; // enable access to extended registers (MUST!)

    PIN_output(PIN_LED);


    while (1)
    {
        PIN_toggle(PIN_LED);
        delay_s_ms(300); // 延时一小段时间，控制音符之间的间隔
    }
}
