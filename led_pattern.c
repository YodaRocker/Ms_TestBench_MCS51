#include <REGX51.H>
#include "lib_io.h"
#include "lib_timing.h"
#include "led_pattern.h"

void led_blinking(void)
{
 P0=ledout(0xAA);
 delayms(100);

 P0=ledout(0x55);
 delayms(100);
}
