
#ifndef SSEG_INT_H_
#define SSEG_INT_H_

#define DIO_SSEG_PORT DIO_PORTD
#define DIO_SSEG_PIN DIO_PORTD
#define DIO_SSEG_DDR DIO_PORTD

#define SSEG_PIN PIND
#define SSEG_PORT PORTD
#define SSEG_DDR DDRD


#define SSEG_PINA DIO_PIN0
#define SSEG_PINB DIO_PIN1
#define SSEG_PINC DIO_PIN2
#define SSEG_PIND DIO_PIN3

#define SSEG_PINA2 DIO_PIN0
#define SSEG_PINB2 DIO_PIN1
#define SSEG_PINC2 DIO_PIN2
#define SSEG_PIND2 DIO_PIN3


void SSEG_voidInit(void);
void SSEG_voidDisplay(u8 SSEG_Num,u8 Data);


#endif 