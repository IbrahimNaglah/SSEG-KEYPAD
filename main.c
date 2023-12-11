#define F_CPU 8000000UL

#include "BIT_math.h"
#include "STD_types.h"
#include "DIO_private.h"
#include "KeyPad_int.h"
#include "SSEG_int.h"
#include "LCD.h"
#include "DDR.h"

#include <util/delay.h>

#define r 10
int First_num, Second_num;
int result=0;
int cond = 0;

void calculator(u8 KeypadOUT)
{
	
	
	
	if((KeypadOUT!='+'||KeypadOUT!='-'||KeypadOUT!='*'||KeypadOUT!='/')&& cond==0)
	{
		First_num = (int)KeypadOUT;
		lcdData(KeypadOUT); _delay_ms(200);
		
	} 
	else if((KeypadOUT=='+'||KeypadOUT=='-'||KeypadOUT=='*'||KeypadOUT=='/')) cond+=1;
	else if(KeypadOUT == '=') {
		 result += (First_num)+(Second_num);
		  lcdData(' ');
		  _delay_ms(200);
		  lcdPrint(((char*)result));
		   result = 0; 
		 
		
			 cond = 0;
		 }
	else if(cond ==1)
	{
		Second_num = (int)KeypadOUT;
		lcdData(KeypadOUT); _delay_ms(200);
	} 
	
}


int main(void)
{
	u8 x;
	KeyPad_Init();
	//SSEG_voidInit();
	keypad = 0x0F; //Make PC0 to PC3 = O/P and PA4 to PA7 = I/P
	lcdInit();
	
    while (1) 
    {
		
		PORTC = 0xF0; /// 4 columns = 1 , 4 rows = 0
		if(PINC != 0xF0)///pressed condition
		{
			x = KeyPad_getkey();

			if(x == 'N')
			{
				main();
			}
			calculator(x);
		} 
		//if(PINC != 0xF0 && x != '\0') {PORTD = (x - '0');}
		//if(x!= '\0')  SSEG_voidDisplay(1,x);
		
		///Calculator:
		
    }
	
	return 0;
}

