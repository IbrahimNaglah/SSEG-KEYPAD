/*
 * LCD.h
 *
 *  Created on: Oct 28, 2023
 *      Author: HP
 */

#ifndef LCD_H_
#define LCD_H_

void lcdcmd (unsigned char cmd);
void lcdData(unsigned char data);
void lcdInit();
void lcdPrint(char *str);

#endif /* LCD_H_ */
