
#include "XL_common.h"

#if 1//RGB_Color
/*
byte LED_R_PWM_expect_fade;
byte LED_G_PWM_expect_fade;
byte LED_B_PWM_expect_fade;

byte LED_R_PWM_temp;
byte LED_G_PWM_temp;
byte LED_B_PWM_temp;
*/

u8 LED_R_PWM_expect , LED_G_PWM_expect , LED_B_PWM_expect;

byte led_mode , Color_mode 	, RTC_mode;
byte led_level, led_level_1_16 , led_speed ,RTC_led_level;

byte temp_byte_value;
/*
byte  LED_duty; 

*/
void LED_PWM_16_LEVEL_TABLE(); 
void RGB_color_deal(); 
void led_color_deal();
#if 1 

void LED_PWM_16_LEVEL_TABLE()
{
	led_level_temp = 0;
	while( temp_byte_value -- )
	{
		led_level_temp +=led_level_1_16;
	}
}

void RGB_color_deal(void)
{
    //disgint;
	RTC_led_level = led_level;
	led_level_1_16 = ( ( RTC_led_level ) >> 4 ); // + 8 led_level_255_1

	temp_byte_value = HC_R_LED_Color_LEVEL_TABLE[Color_mode] ;
	LED_PWM_16_LEVEL_TABLE();
	LED_R_PWM_expect = led_level_temp;
	//send_one_byte();//

	temp_byte_value = HC_G_LED_Color_LEVEL_TABLE[Color_mode] ;
	LED_PWM_16_LEVEL_TABLE();
	LED_G_PWM_expect = led_level_temp;
	//send_one_byte();//

	temp_byte_value = HC_B_LED_Color_LEVEL_TABLE[Color_mode] ;
	LED_PWM_16_LEVEL_TABLE();
	LED_B_PWM_expect = led_level_temp;
/*
        if( Color_mode == 0 )
            LED_W_PWM = RTC_led_level;
        else
            LED_W_PWM = 0;

        if( RTC_mode )
            LED_W_PWM = 0;
*/
}
#endif
void led_color_deal()
{
	
}
#endif
