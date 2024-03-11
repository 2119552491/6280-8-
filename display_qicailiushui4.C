
#include "XL_common.h"
void RTC_mode_4_qicailiushui_0123456789_9876543210_time_deal() // 
{
//	if( Led_time_1ms_tick >= led_speed  )  // ON_F && IR_MIC_F == 2 22 
	{
	//	Led_time_1ms_tick= 0;
//		time_led_speed_ms_tick++;	// time_LED_LEVEL_Max_tick Led_time_1ms_tick

//		if ( time_led_speed_ms_tick >=  6 ) // 255 led_speed_Max led_level LED_LEVEL_Max RTC_mode_15_count
		{
//			time_led_speed_ms_tick = 0;


			if( INIT_bits2.back_F == 0 )
			{
				Time_Count++;
				if( Time_Count >=  led_num_MAX )
				{
					INIT_bits2.back_F = 1;
				}
			}
			else
			{
				Time_Count--;
				if( Time_Count ==  0 )
				{
					INIT_bits2.back_F = 0;
					led_color_deal();
				}
			}
			RGB_color_deal();
///////////////////////////////////////////////////////////// 1
			led_num    = Time_Count;
			send_all_byte();

//////////////////////////////////////////////////////////// 4
			if( INIT_bits2.back_F == 0 )
				temp_byte_value = Time_Count ;
			else
				temp_byte_value =   led_num_MAX - step_1_value - Time_Count ;
			led_num = temp_byte_value;
			send_000();
		}
	}
}

#if 0



#endif