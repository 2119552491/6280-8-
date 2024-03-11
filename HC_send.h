



extern void send_three_byte();
extern void send_one_byte();
extern void send_000();
extern void send_all_byte(); 


extern byte led_level_temp;
extern byte led_num;
extern byte send_count;
extern byte Time_Count;


#define YG_shuzu 			  	 0
#define XL_huancai 			  	 1

#define XL_send_GRB			 	  1
#define XL_send_BRG			 	  0

#if 0 
#define Led_num_1_4_Max   			25
#define Led_num_1_2_Max   			Led_num_1_4_Max + Led_num_1_4_Max
#define Led_num_Max   				Led_num_1_2_Max + Led_num_1_2_Max //+ liushui_color_num
#define Led_num_Min	  				10


#define send_data_table_1_2_num		 Led_num_1_2_Max

#define send_data_table_num			 10


extern byte step_1_value;
extern byte step_2_value;
extern byte step_3_value;


//extern byte send_count;

extern byte send_data_table[]; // 81 send_data_table


extern void send_000();
extern void clean_shuzu_deal();
extern void send_all_byte ();
extern void RGB_color_deal ();
extern void INIT_LEVEL_TAB_send();
extern void send_one_byte();
extern void send_all_byte();
extern void HC_INIT_LEVEL_TAB_send();
extern void Color_INIT_LEVEL_TAB_send();
extern void shuzu_paixu_deal();
extern void shuzu_send_deal();
#endif