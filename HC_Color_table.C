
#include "XL_common.h"

#if 1//XL_led_huancai_Color

#if 1

#define lev_1			15
#define lev_2			lev_1 + lev_1
#define lev_3			lev_1 + lev_1 + lev_1
#define lev_4			lev_1 + lev_1 + lev_1 + lev_1

#define lev_5			lev_1 + lev_1 + lev_1 + lev_1 + lev_1
#define lev_6			lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_7			lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_8			lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 

#define lev_9			lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_10		lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_11		lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_12		lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 

#define lev_13		lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_14		lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_15		lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 
#define lev_16		lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1 + lev_1


const unsigned char   HC_R_LED_Color_LEVEL_TABLE[]=
{
  0  ,
  lev_16 ,lev_15 , lev_14 , lev_13 , lev_12 ,lev_11 , lev_10 , lev_9 , lev_8 , lev_7 , lev_6  , lev_5  , lev_4  , lev_3  , lev_2  , lev_1  ,      
  0 , 0 ,  0 ,  0 ,  			0 ,  0 , 0 , 0 , 			0 , 0 , 0 , 0 ,			 0 , 0 , 0 , 0 ,
  0 		 , lev_1 , lev_2  , lev_3  , lev_4  ,lev_5  , lev_6  , lev_7 , lev_8 , lev_9 , lev_10 , lev_11 , lev_12 , lev_13 , lev_14 , lev_15 , 
  lev_10,
};

const unsigned char   HC_G_LED_Color_LEVEL_TABLE[]=
{
  0  ,
  0 		 , lev_1 , lev_2  , lev_3  , lev_4  ,lev_5  , lev_6  , lev_7 , lev_8 , lev_9 , lev_10 , lev_11 , lev_12 , lev_13 , lev_14 , lev_15 , 
  lev_16 ,lev_15 , lev_14 , lev_13 , lev_12 ,lev_11 , lev_10 , lev_9 , lev_8 , lev_7 , lev_6  , lev_5  , lev_4  , lev_3  , lev_2  , lev_1  ,      
  0 , 0 ,  0 ,  0 ,  				0 ,  0 , 0 , 0 , 			0 , 0 , 0 , 0 , 				0 , 0 , 0 , 0 ,
  lev_10,
};

const unsigned char   HC_B_LED_Color_LEVEL_TABLE[]=
{
  0  ,
  0 , 0 ,  0 ,  0 ,  				0 ,  0 , 0 , 0 ,				 0 , 0 , 0 , 0 ,			 0 , 0 , 0 , 0 ,
  0 		 , lev_1 , lev_2  , lev_3  , lev_4  ,lev_5  , lev_6  , lev_7 , lev_8 , lev_9 , lev_10 , lev_11 , lev_12 , lev_13 , lev_14 , lev_15 , 
  lev_16 ,lev_15 , lev_14 , lev_13 , lev_12 ,lev_11 , lev_10 , lev_9 , lev_8 , lev_7 , lev_6  , lev_5  , lev_4  , lev_3  , lev_2  , lev_1  ,      
  lev_10,
};

#endif
#endif

/***
code unsigned char   HC_R_LED_Color_LEVEL_TABLE[]=
{
  15  ,
  15 , 12 , 9 , 6 , 3 , 0 ,       
   0 , 0 ,  0 , 0 , 0 , 0 , 
   0 , 3 ,  6 , 9 , 12 ,15 , 

};

code unsigned char   HC_G_LED_Color_LEVEL_TABLE[]=
{
  0  ,
   0 , 3 ,  6 , 9 , 12 ,15 , 
  15 , 12 , 9 , 6 , 3 , 0 ,       
   0 , 0 ,  0 , 0 , 0 , 0 , 
};

code unsigned char   HC_B_LED_Color_LEVEL_TABLE[]=
{
  0  ,
   0 , 0 ,  0 , 0 , 0 , 0 , 
   0 , 3 ,  6 , 9 , 12 ,15 , 
  15 , 12 , 9 , 6 , 3 , 0 ,       
};
*/
			   