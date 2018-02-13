/*
 * Bp.c
 *
 *  Created on: 13 févr. 2018
 *      Author: install
 */
#include "BB_Projet.h"


void test_alarme()
{
	if (BP1_GetVal()==0)
	{
		Alerte(1);
		WAIT2_Waitms(3000);
		Alerte(0);
	}
}

void Sorties_a_0(void)
{
	Sortie1_PutVal(0);
	Sortie2_PutVal(0);
	Sortie3_PutVal(0);
	Sortie4_PutVal(0);
}

void Sorties_a_1(void)
{
	Sortie1_PutVal(1);
	Sortie2_PutVal(1);
	Sortie3_PutVal(1);
	Sortie4_PutVal(1);
}
