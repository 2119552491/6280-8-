
#include "XL_common.h"
void RTC_mode_3_qicailiushui_012345678900_time_deal() // 
{
//	if( Led_time_1ms_tick >= led_speed  )  // ON_F && IR_MIC_F == 2 22 
	{
//		Led_time_1ms_tick= 0;
//		time_led_speed_ms_tick++;	// time_LED_LEVEL_Max_tick Led_time_1ms_tick

//		if ( time_led_speed_ms_tick >=  6 ) // 255 led_speed_Max led_level LED_LEVEL_Max RTC_mode_15_count
		{
//			time_led_speed_ms_tick = 0;


			if( INIT_bits2.back_F == 0 )
			{
				Time_Count++;
				temp_byte_value = led_num_MAX - step_1_value;
				if( Time_Count >=  temp_byte_value )
				{
					Time_Count = 0;
					step_1_value++;
					if( step_1_value >= led_num_MAX )
					{
						INIT_bits2.back_F = 1; 
						step_1_value = led_num_MAX;
						//Time_Count = 0;
					}
				}
			}
			else
			{
				Time_Count++;
				temp_byte_value = led_num_MAX - step_1_value;
				if( Time_Count >=  temp_byte_value )
				{
					Time_Count = 0;
					step_1_value--;
					if( step_1_value >= led_num_MAX )
					{
						INIT_bits2.back_F = 0;
						step_1_value = 0;
						led_color_deal();
					}
				}
			}
			RGB_color_deal();
///////////////////////////////////////////////////////////// 1
			led_num    = step_1_value;
			send_all_byte();
///////////////////////////////////////////////////////////// 2
			if( INIT_bits2.back_F == 0 )
				temp_byte_value =  led_num_MAX - step_1_value - Time_Count;
			else
				temp_byte_value = Time_Count ;
			led_num = temp_byte_value;
			send_000();

/////////////////////////////////////////////////////////// 3
			send_three_byte();

//////////////////////////////////////////////////////////// 4
			if( INIT_bits2.back_F == 0 )
				temp_byte_value = Time_Count ;
			else
				temp_byte_value =  led_num_MAX - step_1_value - Time_Count;
			led_num = temp_byte_value;
			send_000();
////////////////////////////////////////////////////////////

		}
	}
}

#if 0



#endif