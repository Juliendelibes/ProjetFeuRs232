/*
 * Alimentation.c
 *
 *  Created on: 25 janv. 2018
 *      Author: install
 */

#include "BB_Projet.h"

bool Test_Alimentation(void)
{
	double q=65536;
	double T;
	unsigned short presence;



	AD1_Measure(1);
	AD1_GetChanValue(0,&presence);
	T = (3.3/q)*presence;

	//uart1_SendStr("Tension=");
	//uart1_SendFloatNum(T);
	//uart1_CRLF();


	if(T<2)
{
	0 == Test_Alimentation;
	//uart1_SendStr("Tension non ok");
	//uart1_CRLF();

}

else
{
	1  == Test_Alimentation;
	//uart1_SendStr("Tension ok");
	//uart1_CRLF();
}





}

