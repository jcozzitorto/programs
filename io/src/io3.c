#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	FILE *fp;

	char *file = argv[1];
	fp = fopen(argv[1], "w");

	for(int i = 2; i < argc; ++i)
	{
		fprintf(fp, "%s ", argv[i]);
	}	
	
	printf("\n");

	fclose(fp);
	return 0;
}

