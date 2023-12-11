

#ifndef KEYPAD_INT_H_
#define KEYPAD_INT_H_


#define KEYPAD_DDR DIO_PORTC
#define KEYPAD_PORT DIO_PORTC
#define KEYPAD_PIN DIO_PORTC

#define KEYPAD_ROW1 DIO_PIN0
#define KEYPAD_ROW2 DIO_PIN1
#define KEYPAD_ROW3 DIO_PIN2
#define KEYPAD_ROW4 DIO_PIN3
#define KEYPAD_COL1 DIO_PIN4
#define KEYPAD_COL2 DIO_PIN5
#define KEYPAD_COL3 DIO_PIN6
#define KEYPAD_COL4 DIO_PIN7

#define KEY_R1C1 '7'
#define KEY_R1C2 '8'
#define KEY_R1C3 '9'
#define KEY_R1C4 '/'

#define KEY_R2C1 '4'
#define KEY_R2C2 '5'
#define KEY_R2C3 '6'
#define KEY_R2C4 '*'

#define KEY_R3C1 '1'
#define KEY_R3C2 '2'
#define KEY_R3C3 '3'
#define KEY_R3C4 '-'

#define KEY_R4C1 'N'
#define KEY_R4C2 '0'
#define KEY_R4C3 '='
#define KEY_R4C4 '+'


void KeyPad_Init(void);
u8 KeyPad_getkey(void);


#endif /* INCFILE1_H_ */