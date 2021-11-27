#include <stdio.h>

int raspechatka (FILE *fout, int a) //Gubenko Olesya 112
{
	int i, mask=1<<30;
	if(a<0)
		fprintf(fout, "1");
	else
		fprintf(fout, "0");
	for(i=2; i<33; i++) {
		if ((a&mask)!=0)
			fprintf(fout, "1");
		else
			fprintf(fout, "0");
		if ((i%8)==0)
			fprintf(fout, " ");
		mask=mask>>1;
	}
	fprintf(fout, "       %d\n", a);
	return 0;
}
