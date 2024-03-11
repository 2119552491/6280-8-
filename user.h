/******************************************************************************
;  *   	@�ͺ�				  : MC30P6280
;  *   	@��������             : 2021.08.04
;  *   	@��˾/����			  : SINOMCU-FAE
;  *   	@����΢����֧��       : 2048615934
;  *   	@����΢����           : http://www.sinomcu.com/
;  *   	@��Ȩ                 : 2021 SINOMCU��˾��Ȩ����.
;  *---------------------- ���� ---------------------------------
;  *   				��������ʱʹ��ȫ�ֱ���	               	
******************************************************************************/
#ifndef USER
#define USER

#include "mc30-common.h"
#include "mc30P6280.h"

#define byte unsigned char
#define word unsigned int

#define u8 unsigned char
#define u16 unsigned int
#define u32 unsigned long int
#define uint8_t  unsigned char
#define uint16_t unsigned int
#define uint32_t unsigned long int

#define DEF_SET_BIT0           	   	0x01
#define DEF_SET_BIT1           	   	0x02
#define DEF_SET_BIT2           	   	0x04
#define DEF_SET_BIT3           	   	0x08
#define DEF_SET_BIT4           	   	0x10
#define DEF_SET_BIT5           	   	0x20
#define DEF_SET_BIT6           	   	0x40
#define DEF_SET_BIT7           	   	0x80

#define DEF_CLR_BIT0           	   	0xFE
#define DEF_CLR_BIT1           	   	0xFD
#define DEF_CLR_BIT2           	   	0xFB
#define DEF_CLR_BIT3           	   	0xF7
#define DEF_CLR_BIT4           	   	0xEF
#define DEF_CLR_BIT5           	   	0xDF
#define DEF_CLR_BIT6           	   	0xBF
#define DEF_CLR_BIT7           	   	0x7F

#define ENABLE 	           	   	1
#define DISABLE            	   	0

#define FAIL   	           	   	1
#define PASS               	   	0



//#define  	FLAG_TIMER0_500ms  	flag1.bits.bit0	   	 // ��־λ

#endif

/**************************** end of file *********************************************/