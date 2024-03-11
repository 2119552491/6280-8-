
#include "XL_common.h"


 volatile bit_flag flag1;

byte mode_6_step;

void RTC_mode_6_qicailiushui_012345_543210_time_deal() // 
{
   	if( Led_time_1ms_tick >= led_speed  )  // ON_F && IR_MIC_F == 2 22 
   	{
   	   	Led_time_1ms_tick= 0;
// 	   	time_led_speed_ms_tick++;  	// time_LED_LEVEL_Max_tick Led_time_1ms_tick

// 	   	if ( time_led_speed_ms_tick >=  6 ) // 255 led_speed_Max led_level LED_LEVEL_Max RTC_mode_15_count
   	   	{
// 	   	   	time_led_speed_ms_tick = 0;
   	   	   	if( flag1.back_F == 0 ) 
   	   	   	{
																if( mode_6_step != 3 )
																{
   	   	   	   		Time_Count++;
																}
   	   	   	   	if( Time_Count >=  send_data_table_num_1_2 )
   	   	   	   	{
   	   	   	   	   	flag1.back_F = 1;
																				mode_6_step++;
   	   	   	   	}
   	   	   	}
   	   	   	else
   	   	   	{
																if( mode_6_step != 3 )
   	   	   	   		Time_Count--;

   	   	   	   	if( Time_Count ==  0 )
   	   	   	   	{
   	   	   	   	   	flag1.back_F = 0;
   	   	   	   	   	led_color_deal();
																				mode_6_step++;
   	   	   	   	}
   	   	   	}

   	   	   	RGB_color_deal();
///////////////////////////////////////////////////////////// 1
   	   	   	led_num    = Time_Count;
   	   	   	send_all_byte();
//////////////////////////////////////////////////////////// 2
   	   	   	temp_byte_value = send_data_table_num_1_2 - Time_Count ;

   	   	   	led_num = temp_byte_value + temp_byte_value;
   	   	   	send_000();
//////////////////////////////////////////////////////////// 3
   	   	   	/*
   	   	   	temp_byte_value = send_data_table_num_1_2 - Time_Count ;

   	   	   	led_num = temp_byte_value;
   	   	   	send_000();
   	   	   	*/
///////////////////////////////////////////////////////////// 4
   	   	   	led_num    = Time_Count;
   	   	   	send_all_byte();
   	   	}
   	}
}

#if 0



#endif