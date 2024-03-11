/*
#define LED_R 			   	 	PA.0   //15
#define LED_R_mode 	  	   	 	PAC.0   //15

#define LED_G 			   	 	PA.4   //15
#define LED_G_mode 	  	   	 	PAC.4   //15

#define LED_B 			   		PA.3  //15
#define LED_B_mode 	  	   	 	PAC.3   //15
*/




#define Color_mode_RGB_Max   49//20//7 

#define Color_mode_YW_Max   0//20//7 

#define Color_mode_Max   Color_mode_RGB_Max + Color_mode_YW_Max
#define RTC_mode_Max    8
#define MIC_mode_Max    3

#define RGB_Color 			  	 1


#define led_speed_1_4_Max 	   	5//15//3//2//10   1  15
#define led_speed_2_4_Max 	   	led_speed_1_4_Max + led_speed_1_4_Max //15//3//2//10


#define led_speed_Max      		24//led_speed_2_4_Max + led_speed_2_4_Max//15//165//20
#define led_speed_Min 	   		3//led_speed_1_4_Max//15//3//2//10

#define speed_variety_range  	led_speed_Min//15//2


#define led_speed_add_sub_F		1

#define led_speed_limit			0
#define led_speed_fanzhuang	 	0
#define led_speed_add_sub	 	1 

#define led_level_1_16_Max 	 			15 // 240+8//
#define led_level_1_8_Max 	 			led_level_1_16_Max + led_level_1_16_Max // 240+8//
#define led_level_1_4_Max 	 			led_level_1_8_Max + led_level_1_8_Max // 240+8//
#define led_level_2_4_Max 	 			led_level_1_4_Max + led_level_1_4_Max // 240+8//
#define led_level_3_4_Max 	 			led_level_1_4_Max + led_level_1_4_Max + led_level_1_4_Max// 240+8// short_key_Light_variety_range
#define led_level_7_8_Max 	 			led_level_3_4_Max + led_level_1_8_Max //+ led_level_1_4_Max// 240+8// short_key_Light_variety_range



#define led_level_variety_Max 			led_level_7_8_Max

#define LED_LEVEL_Max                  led_level_2_4_Max + led_level_2_4_Max//160 + 32//255
#define led_level_Max                  led_level_2_4_Max + led_level_2_4_Max//      160 + 32 //+ 32 128+2//128--   152//170//200//180//160//105        //26//410// 820//

#define led_level_Min                  16//     20  -  3//+ 32 + 32//16+2//16led_level_Max - 70//86//254//2048//4096//16//  8192//
#define LED_LEVEL_Min                  16//     20  -  3//+ 32 + 32//16+2//16led_level_Max - 70//86//254//2048//4096//16//  8192//

#define short_key_Light_variety_range	led_level_1_8_Max//led_level_1_4_Max
#define long_key_Light_variety_range	1//1024//1024//262144//131072//(256)<<11//led_level_1_8_Max//33//// 53//




#define led_mode_variety_range  16//128//256 //1024 - 2//  

#define led_mode_Max_1_4	 			led_mode_variety_range
#define led_mode_Max_2_4	 			led_mode_Max_1_4 + led_mode_Max_1_4
#define led_mode_Max_3_4	 			led_mode_Max_1_4 + led_mode_Max_1_4 + led_mode_Max_1_4
#define led_mode_Max_4_4	 			led_mode_Max_2_4 + led_mode_Max_2_4

#define led_mode_Min  	 		0 
#define led_mode_Mid  	 		led_mode_Max_2_4 
#define led_mode_Max  	 		led_mode_Max_4_4//led_mode_Mid  + led_mode_Mid//256//1024 


#define XL_level_zdy			0  // 25 - 50 - 75 - 100 
#define level_limit				0
#define level_fanzhuang			0
#define level_add_sub			1


extern u8 LED_R_PWM_expect;
extern u8 LED_G_PWM_expect;
extern u8 LED_B_PWM_expect;

extern byte led_level_1_16;
/*
extern byte LED_R_PWM_expect_fade;
extern byte LED_G_PWM_expect_fade;
extern byte LED_B_PWM_expect_fade;

extern byte LED_R_PWM_temp;
extern byte LED_G_PWM_temp;
extern byte LED_B_PWM_temp;
*/

extern byte RTC_mode;


extern byte RTC_led_level;
extern byte Color_mode;

extern byte led_mode;
extern byte led_level;
extern byte led_speed;
extern byte temp_byte_value;

extern byte LED_duty;
extern void RGB_color_deal();
extern void led_color_deal();