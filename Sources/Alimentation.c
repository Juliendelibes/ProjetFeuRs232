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
	double Ta;
	unsigned short presence;

	AD1_Measure(1);
	AD1_GetChanValue(0,&presence);
	Ta = (3.3/q)*presence;

	//uart1_SendStr("Tension=");
	//uart1_SendFloatNum(T);
	//uart1_CRLF();

	if(Ta<2)
{
	return 0;
	//uart1_SendStr("Tension non ok");
	//uart1_CRLF();

}

else
{
	return 1;
	//uart1_SendStr("Tension ok");
	//uart1_CRLF();
}
}

unsigned int Test_Batterie(void)
{
	double q=65536;			//
	unsigned short Tb;				//
	unsigned short Tbat;	//

	//Mesure de l'ADC sur channel 1 de la tension de batterie
	AD1_MeasureChan(1,1);
	AD1_GetChanValue(1,&Tbat);
	// Calcul de la tension
	Tb = ((3.3/q)*Tbat)*5211.983;


	uart1_SendStr("Tension batterie = ");
	uart1_SendNum(Tb);
	uart1_SendStr(" mv");
	uart1_CRLF();
}
