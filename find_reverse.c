//functsiya ishet pervie N chisel, u kotorih vtoroi s kontsa bite - zerkalnoe otrazhenie poslednego

#include <stdio.h>
#include "my_functions.h"

int find_reverse(FILE *fout, int N)//Gubenko Olesya 112
{
	int mask_start=1, mask_end=1<<15, i, j, count=0;								//zavodim dve maski
	for (i=0; i<=N; i++) {
		for (j=0; j<8; j++) {
			if((((i&mask_start)!=0)&&((i&mask_end)!=0))||(((i&mask_start)==0)&&((i&mask_end)==0)))		//obiedinyaem maski s chislom
				count++;										//esli resultat obiedineniya sovpadaet, to obnovim schetchik
			mask_start=mask_start<<1;									//sdvigaem maski
			mask_end=mask_end>>1;
		}
		if (count==8)												//esli schetchik=8, znachit vse bity sovpali
			raspechatka(fout, i);										//togda raspechataem chislo
		count=0;												//obnulim schetchik
		mask_start=1;
		mask_end=1<<15;
	}
	return 0;
}
