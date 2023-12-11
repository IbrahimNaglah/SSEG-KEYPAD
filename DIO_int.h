#ifndef DIO_INIT_H_
#define DIO_INIT_H_



#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

#define DIO_LOW 0
#define DIO_HIGH 1

#define DIO_INPUT 0
#define DIO_OUTPUT 1


void DIO_voidSetPinDir(u8 Port, u8 Pin, u8 Value);
void DIO_voidSetPinVal(u8 Port, u8 Pin, u8 Value);
u8 DIO_u8GetPinVal(u8 Port, u8 Pin);



#endif /* INCFILE1_H_ */