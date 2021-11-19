//programma ishet pervie N chisel, u kotorih vtoroi s kontsa bite - zerkalnoe otrazhenie poslednego

#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

int main(void)//Gubenko Olesya 112
{
	char filename[120];
	int N;
	FILE *fout;
	printf("Programma ishet pervie N chisel, u kotorih vtoroi s kontsa bite - zerkalnoe otrazhenie poslednego.\n");
	printf("Enter the name of the file: ");
	scanf("%s", filename);
	fout=fopen(filename, "w");
	if(fout==NULL) {
		printf("File %s could not be opened\n", filename);
		return -1;
	}
	printf("Enter N: ");
	if (scanf("%d", &N)!=1) {
		printf("Unexpectable error, please, try again.\n");
		return -1;
	}
	find_reverse(fout, N);
	fclose(fout);
	return 0;
}
