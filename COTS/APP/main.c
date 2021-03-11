/*
 * main.c
 *
 *  Created on: Oct 15, 2020
 *      Author: Mohamed Elsayed
 */

#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include <util/delay.h>

#include "../MCAL/DIO/DIO_PRIVATE.h"
#include "../MCAL/INT/INT_INTERFACE.h"

void test (void)
{
	TOGGLE_BIT(PORTA.Register,0);
}

int main(void)
{

	EXTINT_VIDInt2(INT2_RISING);
	EXTINT_VIDInt_Enable(INT2);
	EXTINT_VIDCallBack(INT2,test);
	INT_VIDGIE_Enable();
	DDRA.PIN0=DIO_OUTPUT;

	while(1)
	{

	}
	return 0;
}
