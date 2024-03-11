
#include    "XL_common.h" 
u8 abuf;
u8 statusbuf;

/*
void TIMER1_INT_Init(void)
{
   	T1CR = 0x03;   	   	//Fcpu 8分频 	
   	T1CNT = 100-1;
   	T1LOAD = 100-1;	   	//100uS
   	T1EN = 1;
   	T1IE = 1;
}*/

//=================================================================================
void main(void)
{
   	GIE = 0;

   	__asm
   	movai 0x3F
   	movra FSR
   	movai 47
   	movra 0x3F
   	decr FSR
   	clrr INDF
   	djzr 0x3F
   	goto $ -3;
   	clrr 0x3F
   	__endasm;

   	P1 = 0x00; //1:input 0:output
   	DDR1 = 0x00;   	//1:input 0:output
   	PUCON = 0xff; //0:Effective 1:invalid
   	PDCON = 0xff; //0:Effective 1:invalid
   	ODCON = 0x00; //0:推挽输出  1:开漏输出

   	T0CR = 0x01; //时钟为CPU时钟    定时器64分频  1ms
   	T0CNT = 256 - 46;
   	T0IE = 1;

				led_mode = Color_mode_Max + 6;
   	IR_LED_ON_F = 1;
    led_level = LED_LEVEL_Max;
				short_mode_init_F = 1;

   	GIE = 1;
   	while (1)
   	{
   	   	time_50us_tick_function();
   	}
}

/************************************************
;  *    @Function Name       : Interrupt
;  *    @Description         : The interrupt function
;  *    @IN_Parameter          	 :
;  *    @Return parameter      	:
;  ***********************************************/
void int_isr(void) __interrupt
{
__asm
   	movra _abuf
   	swapar _STATUS
   	movra _statusbuf
__endasm;

   	if ((T0IF) && (T0IE))
   	{
   	   	T0IF = 0;
   	   	T0CNT = 256 - 46;
								time_50us_tick++;
   	   	test = ~test;
   	}
/*
   	if ((T1IF) && (T1IE))
   	{
   	   	T1IF = 0;
   	   	P12D = !P12D;
   	}*/
__asm
   	swapar _statusbuf
   	movra _STATUS
   	swapr _abuf
   	swapar _abuf
__endasm;
}


/**************************** end of file *********************************************/