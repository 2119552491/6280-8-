
#include "XL_common.h"

void RTC_mode_8_fade_time_deal() // 
{
	temp_byte_value = eeprom_s2.led_speed + eeprom_s2.led_speed + eeprom_s2.led_speed;
	//temp_byte_value = temp_byte_value + temp_byte_value + temp_byte_value;
	if( Led_time_1ms_tick >= temp_byte_value  )  // ON_F && IR_MIC_F == 2 22 
	{
		Led_time_1ms_tick= 0;
		time_led_speed_ms_tick++;	// time_LED_LEVEL_Max_tick Led_time_1ms_tick

		temp_byte_value = Time_Count;   // LED_Flash_B_TABLE()  LED_Flash_R_G_TABLE()
		LED_7_Fade_Mode_TABLE(); // 
		led_num = led_num_MAX;
		send_all_byte();

		if ( time_led_speed_ms_tick >=  led_level_Max ) // 255 led_speed_Max led_level LED_LEVEL_Max RTC_mode_15_count
		{
			time_led_speed_ms_tick = 0;

			Time_Count++;
			if (RTC_mode == 8 && Time_Count >= 3 ) //   Led_time_50us_tick;  time_led_speed_ms_tick
			{
				Time_Count = 0;
			}
		}
	}
}

#if 0



#endif