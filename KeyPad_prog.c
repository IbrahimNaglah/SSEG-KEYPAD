#define F_CPU 8000000UL

#include "STD_types.h"
#include "DIO_int.h"
#include "KeyPad_int.h"
#include <util/delay.h>

void KeyPad_Init(void)
{
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_ROW1,DIO_OUTPUT);
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_ROW2,DIO_OUTPUT);
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_ROW3,DIO_OUTPUT);
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_ROW4,DIO_OUTPUT);
	
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_COL1,DIO_INPUT);
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_COL2,DIO_INPUT);
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_COL3,DIO_INPUT);
	DIO_voidSetPinDir(KEYPAD_DDR,KEYPAD_COL4,DIO_INPUT);
	
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_COL1,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_COL2,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_COL3,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_COL4,DIO_HIGH);
	
}

u8 KeyPad_getkey(void)
{
	
	
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW1,DIO_LOW);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW2,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW3,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW4,DIO_HIGH);
	
	if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL1)==0)
	{
		_delay_ms(3);
		return KEY_R1C1;
	}

	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL2)==0)
	{
		_delay_ms(3);
		return KEY_R1C2;
	}

	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL3)==0)
	{
		_delay_ms(3);
		return KEY_R1C3;
	}
	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL4)==0)
	{
		_delay_ms(3);
		return KEY_R1C4;
	}
	
	///////////////////////////////////////////////////
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW1,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW2,DIO_LOW);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW3,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW4,DIO_HIGH);
	
	if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL1)==0)
	{
		_delay_ms(3);
		return KEY_R2C1;
	}

	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL2)==0)
	{
		_delay_ms(3);
		return KEY_R2C2;
	}

	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL3)==0)
	{
		_delay_ms(3);
		return KEY_R2C3;
	}
	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL4)==0)
	{
		_delay_ms(3);
		return KEY_R2C4;
	}
	

	///////////////////////////////////////////////////
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW1,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW2,DIO_HIGH);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW3,DIO_LOW);
	DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW4,DIO_HIGH);
	
	if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL1)==0)
	{
		_delay_ms(3);
		return KEY_R3C1;
	}

	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL2)==0)
	{
		_delay_ms(3);
		return KEY_R3C2;
	}

	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL3)==0)
	{
		_delay_ms(3);
		return KEY_R3C3;
	}
	else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL4)==0)
	{
		_delay_ms(3);
		return KEY_R3C4;
	}
	
		///////////////////////////////////////////////////
		DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW1,DIO_HIGH);
		DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW2,DIO_HIGH);
		DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW3,DIO_HIGH);
		DIO_voidSetPinVal(KEYPAD_PORT,KEYPAD_ROW4,DIO_LOW);
		
		if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL1)==0)
		{
			_delay_ms(3);
			return KEY_R4C1;
		}

		else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL2)==0)
		{
			_delay_ms(3);
			return KEY_R4C2;
		}

		else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL3)==0)
		{
			_delay_ms(3);
			return KEY_R4C3;
		}
		else if(DIO_u8GetPinVal(KEYPAD_PIN,KEYPAD_COL4)==0)
		{
			_delay_ms(3);
			return KEY_R4C4;
		}
		
	
	return 0;
	
}