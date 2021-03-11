/*
 * INT_INTERFACE.h
 *
 *  Created on: Mar 9, 2021
 *      Author: Mohamed Elsayed
 */

#ifndef COTS_MCAL_INT_INT_INTERFACE_H_
#define COTS_MCAL_INT_INT_INTERFACE_H_

#define INT0_LOW_lEVEL	 	0
#define INT0_ON_CHANGE		1
#define INT0_FALLING		  2
#define INT0_RISING			  3

#define INT1_LOW_lEVEL		4
#define INT1_ON_CHANGE		5
#define INT1_FALLING		  6
#define INT1_RISING			  7

#define INT2_FALLING		  8
#define INT2_RISING			  9

#define INT0				      6
#define INT1				      7
#define INT2				      5


void EXTINT_VIDInt0(u8 COPY_U8SenseControl);
void EXTINT_VIDInt1(u8 COPY_U8SenseControl);
void EXTINT_VIDInt2(u8 COPY_U8SenseControl);

void EXTINT_VIDInt_Enable(u8 COPY_U8IntNumber);
void EXTINT_VIDInt_Disable(u8 COPY_U8IntNumber);
void EXTINT_VIDCallBack(u8 COPY_U8IntNumber, void (*PTR_Function) (void) );
void INT_VIDGIE_Enable(void);
void INT_VIDGIE_Disable(void);

#endif /* COTS_MCAL_INT_INT_INTERFACE_H_ */
