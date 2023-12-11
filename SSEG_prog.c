#define F_CPU 8000000UL

#include "DIO_private.h"
#include "STD_types.h"
#include "BIT_math.h"
#include "DIO_int.h"
#include "SSEG_int.h"
#include <util/delay.h>

void SSEG_voidInit(void)
{
	DIO_voidSetPinDir(DIO_SSEG_DDR,SSEG_PINA,DIO_OUTPUT);
	DIO_voidSetPinDir(DIO_SSEG_DDR,SSEG_PINB,DIO_OUTPUT);
	DIO_voidSetPinDir(DIO_SSEG_DDR,SSEG_PINC,DIO_OUTPUT);
	DIO_voidSetPinDir(DIO_SSEG_DDR,SSEG_PIND,DIO_OUTPUT);
}

void SSEG_voidDisplay(u8 SSEG_Num,u8 Data)
{

if(SSEG_Num==1)
{
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PINA,GET_BIT((Data),0));
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PINB,GET_BIT((Data),1));
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PINC,GET_BIT((Data),2));
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PIND,GET_BIT((Data),3));
}

if(SSEG_Num==2)
{
	Data = Data>>4;
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PINA2,GET_BIT((Data),4));
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PINB2,GET_BIT((Data),5));
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PINC2,GET_BIT((Data),6));
	DIO_voidSetPinVal(DIO_SSEG_PORT,SSEG_PIND2,GET_BIT((Data),7));	
}
		/*if(SSEG_Num==1)
		{
			SSEG_PORT = Data;
		}
		else if(SSEG_Num==2)
		{
			SSEG_PORT = Data>>4;
		}*/
	
}