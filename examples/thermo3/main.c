#include <stdio.h>
#include "core/i2c.h"
#include "click/thermo3.h"

int main(void)
{
    float temperature = 0.f;

    i2c_init(0);
    i2c_select_bus(0);

    thermo3_click_enable(0);
    thermo3_click_get_temperature(&temperature);
    printf("temperature: %.3f°C\n", temperature);
    thermo3_click_disable();

    i2c_release(0);

    return 0;
}