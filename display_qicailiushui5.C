
#include "XL_common.h"

#define liuxing_num    16

/*
code unsigned char mode_5_TABLE[]=
{

	 11,

	 1  ,   
	 6 ,
	 11 ,//1
};
*/
void RTC_mode_5_qicailiushui_001234500_time_deal() // 
{
//	if( Led_time_1ms_tick >= led_speed  )  // ON_F && IR_MIC_F == 2 22 
	{
	//	Led_time_1ms_tick= 0;
//		time_led_speed_ms_tick++;	// time_LED_LEVEL_Max_tick Led_time_1ms_tick

//		if ( time_led_speed_ms_tick >=  6 ) // 255 led_speed_Max led_level LED_LEVEL_Max RTC_mode_15_count
		{
//			time_led_speed_ms_tick = 0;
			Time_Count++;
			if( Time_Count >= led_num_MAX + liuxing_num + 1 )
			{
				Time_Count = 1;
				fade_Time_Count+=2;
				if( fade_Time_Count >= 5 + 1 )
				{
					fade_Time_Count = 1;  
				} 
				Color_mode = LED_7_Smooth_Mode_TABLE[ fade_Time_Count ];// LED_7_Smooth_Mode_TABLE  mode_5_TABLE
				RTC_led_level = led_level_Max; 
				/*
				temp_byte_value = 24;
				while( temp_byte_value -- )
				{
					RTC_led_level  = RTC_led_level + led_level_1_16 ;
				}*/
			}
			if( Time_Count <= liuxing_num )
			{
				RTC_led_level -= led_level_1_16;
				RGB_color_deal();
			}
			else
			{
				LED_G_PWM  = 0;
				LED_R_PWM  = 0;
				LED_B_PWM  = 0;
			}
			send_data_table[0] = LED_G_PWM;
			send_data_table[1] = LED_R_PWM;
			send_data_table[2] = LED_B_PWM;
			suzhu_zhengxiang_liushui();//  suzhu_zhengxiang_liushui
			send_shuzu_func();//  suzhu_zhengxiang_liushui

		}
	}
}

