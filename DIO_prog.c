#include "BIT_math.h"
#include "STD_types.h"
#include "DIO_private.h"
#include "DIO_int.h"

void DIO_voidSetPinDir(u8 Port, u8 Pin, u8 Value)
{
	switch(Port)
	{
		case DIO_PORTA: if(Value==DIO_OUTPUT) SET_BIT(DDRA,Pin); else if(Value==DIO_INPUT) CLEAR_BIT(DDRA,Pin); break;
		case DIO_PORTB: if(Value==DIO_OUTPUT) SET_BIT(DDRB,Pin); else if(Value==DIO_INPUT) CLEAR_BIT(DDRB,Pin); break;
		case DIO_PORTC: if(Value==DIO_OUTPUT) SET_BIT(DDRC,Pin); else if(Value==DIO_INPUT) CLEAR_BIT(DDRC,Pin); break;
		case DIO_PORTD: if(Value==DIO_OUTPUT) SET_BIT(DDRD,Pin); else if(Value==DIO_INPUT) CLEAR_BIT(DDRD,Pin); break;
	}
}


void DIO_voidSetPinVal(u8 Port, u8 Pin, u8 Value)
{
	switch(Port)
	{
		case DIO_PORTA: if(Value==DIO_HIGH) SET_BIT(PORTA,Pin); else if(Value==DIO_LOW) CLEAR_BIT(PORTA,Pin); break;
		case DIO_PORTB: if(Value==DIO_HIGH) SET_BIT(PORTB,Pin); else if(Value==DIO_LOW) CLEAR_BIT(PORTB,Pin); break;
		case DIO_PORTC: if(Value==DIO_HIGH) SET_BIT(PORTC,Pin); else if(Value==DIO_LOW) CLEAR_BIT(PORTC,Pin); break;
		case DIO_PORTD: if(Value==DIO_HIGH) SET_BIT(PORTD,Pin); else if(Value==DIO_LOW) CLEAR_BIT(PORTD,Pin); break;	
	}
}

u8 DIO_u8GetPinVal(u8 Port, u8 Pin)
{
	switch(Port)
	{
		case DIO_PORTA: return GET_BIT(PINA,Pin); break;
		case DIO_PORTB: return GET_BIT(PINB,Pin); break;
		case DIO_PORTC: return GET_BIT(PINC,Pin); break;
		case DIO_PORTD:	return GET_BIT(PIND,Pin); break;
	}
	return '\0';
}

