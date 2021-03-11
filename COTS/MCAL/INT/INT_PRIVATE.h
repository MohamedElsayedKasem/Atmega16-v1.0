/*
 * INT_PRIVATE.h
 *
 *  Created on: Mar 9, 2021
 *      Author: Mohamed Elsayed
 */

#ifndef COTS_MCAL_INT_INT_PRIVATE_H_
#define COTS_MCAL_INT_INT_PRIVATE_H_




#define MCUCR	*((volatile u8*) 0x55)
#define MCUCSR	*((volatile u8*) 0x54)
#define GICR	*((volatile u8*) 0x5B)
#define GIFR	*((volatile u8*) 0x5A)
#define SREG	*((volatile u8*) 0x5F)

#define GIE		7
#define ISC00	0
#define ISC01	1
#define ISC10	2
#define ISC11	3
#define ISC2	6

#define INT0_LOW_lEVEL		0
#define INT0_ON_CHANGE		1
#define INT0_FALLING		2
#define INT0_RISING			3

#define INT1_LOW_lEVEL		4
#define INT1_ON_CHANGE		5
#define INT1_FALLING		6
#define INT1_RISING			7

#define INT2_FALLING		8
#define INT2_RISING			9

#define INT0				6
#define INT1				7
#define INT2				5

void __vector_1(void) __attribute__((signal));
void __vector_2(void) __attribute__((signal));
void __vector_3(void) __attribute__((signal));


#endif /* COTS_MCAL_INT_INT_PRIVATE_H_ */
