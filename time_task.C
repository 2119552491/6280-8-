
#include "XL_common.h"

u8 time_50us_tick ,  time_1ms_tick , time_10ms_tick , time_100ms_tick;

u8 Led_time_1ms_tick;


void time_50us_tick_function(void);

void time_50us_tick_function()
{
    if( time_50us_tick >= 20 ) // time_50us_tick
    {
        time_50us_tick = time_50us_tick - 20 ; 
		time_1ms_tick++;
		Led_time_1ms_tick++;
  	if( flag1.back_F == 0 ) 
  	{
				led_speed = 29;
			}
			else
			{
				led_speed = 14;
			}

			GIE = 0; //disgint;
			RTC_mode_6_qicailiushui_012345_543210_time_deal();
			GIE = 1; //engint;
		if( time_1ms_tick >= 10 )
		{
			time_1ms_tick = 0;
			time_10ms_tick++;
			Led_mode_deal();
			if( time_10ms_tick >= 10 )
			{
				time_10ms_tick = time_10ms_tick - 10;
				time_100ms_tick++;

			}
		}
	}
}

