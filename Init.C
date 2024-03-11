
#include "XL_common.h"

u8 IR_LED_ON_F;
u8 short_mode_init_F ;

void Led_mode_deal()
{
	if( IR_LED_ON_F )
   	{
       	if(  short_mode_init_F == 1 )  // ON_F  short_mode_init_F = 1  long_mode_init_F
       	{
       	   	short_mode_init_F =0;

            if( led_mode >= Color_mode_Max + RTC_mode_Max + MIC_mode_Max + 1  + 1 )// fangwei xianzhi
            {
                led_mode = 1;
            }
            else if( led_mode >= Color_mode_Max + RTC_mode_Max + MIC_mode_Max + 1 )// auto_mode
            {
                RTC_mode++;// = 1;//led_mode - Color_mode_RGB_Max;
                if( RTC_mode >= RTC_mode_Max + 1)
                    RTC_mode = 1;
            }
            else if( led_mode >= Color_mode_Max + RTC_mode_Max + 0 + 1 )// music_mode
            {
                RTC_mode      = led_mode - Color_mode_Max;
                Color_mode = 1;
            }
            else if( led_mode >= Color_mode_Max + 0 + 0 + 1 )// RTC_mode
            {
                RTC_mode      = led_mode - Color_mode_Max;
                Color_mode = 1;
                //if( RTC_mode == 5 )
                //    RTC_led_level = led_level_Max;
            }
            else //if( led_mode >= Color_mode_Max + 0 + 0 + 1 )// 
            {
                RTC_mode      = 0;
                Color_mode = led_mode;
            }

           	if( RTC_mode == 6 )  //  short_mode_init_F == 1 &&   IR_level_add_F IR_speed_add_F  IR_level_sub_F  IR_speed_sub_F
           	{ 
                Color_mode = Color_mode_RGB_Max;
           	}

       	}
   	}
}

/*

void INIT_LEVEL_TAB(void)
{
   	if(Color_mode)
	{
        T1DATB = LED_R_PWM;    	//R
        T1DATC = LED_G_PWM;    	//G
   	   	T1DATA = LED_B_PWM; //B
   	}
}
*/
