#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

int find_reverse(FILE *fout, int N)
{
	int mask=1, i, j, count=0, last_bite[8], previous_bite[8];
	for (i=0; i<=N; i++) {
		for (j=0; j<8; j++) {
			if((i&mask)!=0)
				last_bite[j]=1;
			else
				last_bite[j]=0;
			mask=mask<<1;
		}
		for (j=0; j<8; j++) {
			if((i&mask)!=0)
				previous_bite[j]=1;
			else
				previous_bite[j]=0;
			mask=mask<<1;
		}
		for (j=0; j<8; j++) {
			if (last_bite[j]==previous_bite[7-j])
				count++;
		}
		if (count==8)
			raspechatka(fout, i);
		count=0;
		mask=1;
	}
	return 0;
}