
#include "XL_common.h"


void RTC_mode_2_qicailiushui_111112222233333_time_deal() // 
{
//	if( Led_time_1ms_tick >= led_speed  )  // ON_F && IR_MIC_F == 2 22 
	{
//		Led_time_1ms_tick= 0;
//		time_led_speed_ms_tick++;	// time_LED_LEVEL_Max_tick Led_time_1ms_tick

//		if ( time_led_speed_ms_tick >=  6 ) // 255 led_speed_Max led_level LED_LEVEL_Max RTC_mode_15_count
		{
//			time_led_speed_ms_tick = 0;
			led_num    = led_num_MAX - 1 +  led_num_MAX ;
			while( led_num -- ) //  send_data_table_num
			{
				Time_Count++;
				if( Time_Count >= 5 + 1 )
				{
					Time_Count = 1;
					Color_mode+=8;//1
					if( Color_mode >= 48 + 1 )// 6 + 1
					{
						Color_mode = 1;     
					}
				//	Color_mode = LED_7_Smooth_Mode_TABLE[ fade_Time_Count ];
				}
				HC_INIT_LEVEL_TAB_send (); //Color_INIT_LEVEL_TAB_send
			} 
		}
	}
}

#if 0



#endif