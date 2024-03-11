
#include    "XL_common.h" 

u8 LED_duty;
u8 key_1_tick;
u8 KEY_long_time_F;


void PWM_Init(void);
/*
void   	key_init(void)//
{
   	KEY   = 1;
   	P13PU = 1; //
}

void key_fuction() // color_light_key   strobe   
{
   	if (KEY == 0)
   	{
   	   	if (key_1_tick >= key_long_time)
   	   	{
   	   	   	KEY_long_time_F = 1;
   	   	   	key_1_tick =  key_long_time;

   	   	   	short_mode_init_F = 1;

   	   	}
   	}
   	else
   	{
   	   	if (KEY_long_time_F == 0)
   	   	{
   	   	   	if (key_1_tick > key_short_time)
   	   	   	{

   	   	   	}
   	   	}

   	   	key_1_tick = 0;
   	   	KEY_long_time_F = 0; // KEY_long_time_F
   	}
}

*/

/*
 void TIMER1_INT_Init(void)
 {
       T1CR = 0x02;     //ʱ��ԴΪCPUʱ�ӣ���ʱ��8��Ƶ 
       T1CNT = 100-1;   //100us
       T1LOAD = 100-1;
       T1EN = 1;
       T1IE = 1; 
 }
*/

