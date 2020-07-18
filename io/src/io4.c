#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	FILE *fp1;
	FILE *fp2;

	char *file1 = argv[1];
	char *file2 = argv[2];

	fp1 = fopen(argv[1], "r");
	if(fp1 == NULL)
	{	printf("File not opened\n");
		return 0;
	}
	fp2 = fopen(argv[2], "w");
	if(fp2 == NULL)
	{
		printf("File not opened\n");
		return 0;
	}

	char *c;
	
	while ((fscanf(fp1, "%c")) == 1)
	{
		printf( "%c", c);
	}	

	fclose(fp1);
	fclose(fp2);

	return 0;
}
				

