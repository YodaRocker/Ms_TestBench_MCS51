#include <REGX51.H>
#include "lib_io.h"
#include "lib_timing.h"
#include "led_blinking.h"

main()
{
 for (;;)
 {
  led_blinking();
 }

 return(0);
}
