/*
 * INT_PROGRAM.c
 *
 *  Created on: Mar 9, 2021
 *      Author: Mohamed Elsayed
 */

#include"../../LIB/STD_TYPES.h"
#include"../../LIB/BIT_MATH.h"
#include"INT_PRIVATE.h"

static void (*PTR_ExtInt[3]) (void) ;

void EXTINT_VIDInt0(u8 COPY_U8SenseControl)
{

	switch (COPY_U8SenseControl)
	{
	case (INT0_LOW_lEVEL):	CLEAR_BIT(MCUCR,ISC01);	CLEAR_BIT(MCUCR,ISC00);	break;
	case (INT0_ON_CHANGE):	CLEAR_BIT(MCUCR,ISC01);	SET_BIT(MCUCR,ISC00);	break;
	case (INT0_FALLING):	SET_BIT(MCUCR,ISC01);	CLEAR_BIT(MCUCR,ISC00);	break;
	case (INT0_RISING):		SET_BIT(MCUCR,ISC01);	SET_BIT(MCUCR,ISC00);	break;
	}

}


void EXTINT_VIDInt1(u8 COPY_U8SenseControl)
{
	switch (COPY_U8SenseControl)
	{
	case (INT1_LOW_lEVEL):	CLEAR_BIT(MCUCR,ISC11);	CLEAR_BIT(MCUCR,ISC10);	break;
	case (INT1_ON_CHANGE):	CLEAR_BIT(MCUCR,ISC11);	SET_BIT(MCUCR,ISC10);	break;
	case (INT1_FALLING):	SET_BIT(MCUCR,ISC11);	CLEAR_BIT(MCUCR,ISC10);	break;
	case (INT1_RISING):		SET_BIT(MCUCR,ISC11);	SET_BIT(MCUCR,ISC10);	break;
	}
}


void EXTINT_VIDInt2(u8 COPY_U8SenseControl)
{
	switch (COPY_U8SenseControl)
	{
	case (INT2_FALLING): 	CLEAR_BIT(MCUCSR,ISC2); break;
	case (INT2_RISING):		SET_BIT(MCUCSR,ISC2); break;
	}

}

void EXTINT_VIDInt_Enable(u8 COPY_U8IntNumber)
{
	switch(COPY_U8IntNumber)
	{
	case (INT0): SET_BIT(GICR,INT0); break;
	case (INT1): SET_BIT(GICR,INT1); break;
	case (INT2): SET_BIT(GICR,INT2); break;
	}
}

void EXTINT_VIDInt_Disable(u8 COPY_U8IntNumber)
{
	switch(COPY_U8IntNumber)
	{
	case (INT0): CLEAR_BIT(GICR,INT0); break;
	case (INT1): CLEAR_BIT(GICR,INT1); break;
	case (INT2): CLEAR_BIT(GICR,INT2); break;
	}
}

void INT_VIDGIE_Enable(void)
{
	SET_BIT(SREG,GIE);
}
void INT_VIDGIE_Disable(void)
{
	CLEAR_BIT(SREG,GIE);
}

void EXTINT_VIDCallBack(u8 COPY_U8IntNumber, void (*PTR_Function) (void) )
{
	switch (COPY_U8IntNumber)
	{
	case (INT0): PTR_ExtInt[0] = PTR_Function; break;
	case (INT1): PTR_ExtInt[1] = PTR_Function; break;
	case (INT2): PTR_ExtInt[2] = PTR_Function; break;
	}

}

void __vector_0(void)
{
	PTR_ExtInt[0]();
}

void __vector_1(void)
{
	PTR_ExtInt[1]();
}

void __vector_3(void)
{
	PTR_ExtInt[2]();
}
