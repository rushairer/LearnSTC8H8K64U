#include <fw_hal.h>

void GPIO_Init(void)
{
    GPIO_P1_SetMode(GPIO_Pin_0, GPIO_Mode_Output_PP);
}

void main(void)
{
    GPIO_Init();

    while (1)
    {

        P10 = SET;
        SYS_Delay(500);

        P10 = RESET;
        SYS_Delay(500);
    }
}
