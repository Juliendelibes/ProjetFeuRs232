/*
 * Alimentation.c
 *
 *  Created on: 25 janv. 2018
 *      Author: install
 */



int alimentation(void)
{
	unsigned char Alim;
AD1_Measure(1);
AD1_GetChanValue(0,&Alim);
uart1_SendStr("testalim=");
uart1_SendNum(Alim);
uart1_CRLF();
}


