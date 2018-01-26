/*
 * Alimentation.c
 *
 *  Created on: 25 janv. 2018
 *      Author: install
 */

#include "BB_Projet.h"

unsigned short Test_Alimentation(void)
{
	double q=65536;
	double T;
unsigned short Alim;


	AD1_Measure(1);
AD1_GetChanValue(0,&Alim);

uart1_SendStr("Tension=");
uart1_SendNum(Alim);


T = (3.3/q)*Alim;


uart1_SendStr("Tension=");
uart1_SendFloatNum(T);
uart1_CRLF();
}

