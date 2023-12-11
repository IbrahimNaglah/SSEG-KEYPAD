#include<avr/io.h>
#include <util/delay.h>

#include "PORT.h"
#include "BIT_math.h"
#include "DDR.h"

void lcdcmd (unsigned char cmd)///Handles commands
{
	//if cmd is 81 first we send upper nibble 8 then send 1
	CLEAR_BIT(LCD_command,RS); ///RS = 0 for command
	//RW = 0 always so connected to ground
	LCD_data = cmd & 0xF0; ///send upper nibble
	SET_BIT(LCD_command,EN); ///EN=1 for H to L pulse
	_delay_ms(1);
	CLEAR_BIT(LCD_command,EN);/// EN = 0 for H to L pulse

	LCD_data = cmd<<4; ///send lower nibble
	SET_BIT(LCD_command,EN); ///EN=1 for H to L pulse
	_delay_ms(1);
	CLEAR_BIT(LCD_command,EN);/// EN = 0 for H to L pulse
}


void lcdData(unsigned char data)
{
	//Same concept as previous function
	SET_BIT(LCD_command,RS); ///RS = 1 for data

	LCD_data = data & 0xF0;
	SET_BIT(LCD_command,EN); ///EN=1 for H to L pulse
	_delay_ms(1);
	CLEAR_BIT(LCD_command,EN);/// EN = 0 for H to L pulse

	LCD_data = data<<4;
	SET_BIT(LCD_command,EN); ///EN=1 for H to L pulse
	_delay_ms(1);
	CLEAR_BIT(LCD_command,EN);/// EN = 0 for H to L pulse
}

void lcdInit()
{
	// DDR
	SET_BIT(LCDdata,D1);
	SET_BIT(LCDdata,D2);
	SET_BIT(LCDdata,D3);
	SET_BIT(LCDdata,D4);

	SET_BIT(LCDcmd,RS);
	SET_BIT(LCDcmd,EN);

	// PORT
	CLEAR_BIT(LCD_command,EN);

	//commands
	lcdcmd(0x33);
	lcdcmd(0x32);
	lcdcmd(0x28); ///4 bit mode
	lcdcmd(0x0E); /// display on cursor on
	lcdcmd(0x01); /// clear LCD
	_delay_ms(2);
}


void lcdPrint(char *str)
{
	unsigned char i = 0;

	while(str[i]!=0)
	{
		lcdData(str[i]);
		i++;
	}
}
