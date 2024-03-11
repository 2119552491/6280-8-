
/*
//===============Define  Flag===============
typedef union {
   	unsigned char byte;
   	struct
   	{
   	   	u8 bit0 : 1;
   	   	u8 bit1 : 1;
   	   	u8 bit2 : 1;
   	   	u8 bit3 : 1;
   	   	u8 bit4 : 1;
   	   	u8 bit5 : 1;
   	   	u8 bit6 : 1;
   	   	u8 bit7 : 1;
   	}bits;
}bit_flag;
volatile bit_flag flag1;
*/

typedef struct 
{
   	u8 back_F : 1;//u8 short_mode_init_F ;
   	u8 bit1 : 1;
   	u8 bit2 : 1;
   	u8 bit3 : 1;
   	u8 bit4 : 1;
   	u8 bit5 : 1;
   	u8 bit6 : 1;
   	u8 bit7 : 1;
}bit_flag; 
extern volatile bit_flag flag1;
extern void RTC_mode_6_qicailiushui_012345_543210_time_deal( );
/*
extern void RTC_mode_1_qicailiushui_0123456789_time_deal( );

*/