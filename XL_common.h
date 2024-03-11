

#include    "user.h" 
#include    "time_task.h" 
#include    "key.h" 
#include    "Init.h"

#include    "HC_send.h"
//#include    "EEPROM.h"
#include    "display_qicailiushui6.h"
#include    "RGB_Color.h"
#include    "HC_Color_table.h"
/*
#include    "superled_TAB_Huancai_Color.h"
#include    "display_qicailiushui.h"
#include    "display_qicailiushui2.h"
#include    "display_qicailiushui3.h"
#include    "display_qicailiushui4.h"
#include    "display_qicailiushui5.h"

#include    "display_qicailiushui7.h"
#include    "display_qicailiushui8.h"
*/

#define download_mode  1
/*
        VDD     VSS
        P15     P10
        P14     P11     test
        P13     P12     W2811
*/

#define test            P11D
  
#define WS2812_IO           P12D

#define key_short_time 2//
#define key_long_time  50//



#define send_data_table_num_1_2    	 15
#define LED_num_MAX    	                 send_data_table_num_1_2 + send_data_table_num_1_2

 


#define engint GIE = 1     	 
#define disgint GIE = 0    	

#define GOTO    goto   	 

#define SYSCLK_8M				0




//disgint;  engint


