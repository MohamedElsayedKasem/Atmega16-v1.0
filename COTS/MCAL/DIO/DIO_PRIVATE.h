/*
 * DIO_PRIVATE.h
 *
 *	    Created on: Mar 2, 2021
 *      Author: Mohamed Elsayed
 *
 */


#ifndef COTS_MCAL_DIO_DIO_PRIVATE_H_
#define COTS_MCAL_DIO_DIO_PRIVATE_H_


#define DIO_OUTPUT  255U
#define DIO_INPUT	0U
#define DIO_HIGH	255U
#define DIO_LOW		0U



typedef union
{
	u8 	Register ;

	struct  {
	u8  PIN0:1;
	u8	PIN1:1;
	u8	PIN2:1;
	u8	PIN3:1;
	u8	PIN4:1;
	u8	PIN5:1;
	u8	PIN6:1;
	u8	PIN7:1;
	};

}DIO;



#define DDRA	(*((volatile DIO*)0x3A))	//PORTA Direction Register
#define DDRB	(*((volatile DIO*)0x37))	//PORTB Direction Register
#define DDRC	(*((volatile DIO*)0x34))	//PORTC Direction Register
#define DDRD	(*((volatile DIO*)0x31))	//PORTD Direction Register

#define PORTA	(*((volatile DIO*)0x3B))	//PORTA Data OUTPUT Register
#define PORTB	(*((volatile DIO*)0x38))	//PORTB Data OUTPUT Register
#define PORTC	(*((volatile DIO*)0x35))	//PORTC Data OUTPUT Register
#define	PORTD	(*((volatile DIO*)0x32))	//PORTD Data OUTPUT Register


#define PINA	(*((volatile DIO*)0x39))	//PORTA Data INPUT Register
#define PINB	(*((volatile DIO*)0x36))	//PORTB Data INPUT Register
#define PINC	(*((volatile DIO*)0x33))	//PORTC Data INPUT Register
#define PIND	(*((volatile DIO*)0x30))	//PORTD Data INPUT Register


#endif /* COTS_MCAL_DIO_DIO_PRIVATE_H_ */
