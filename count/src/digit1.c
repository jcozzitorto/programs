#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	FILE *fp = fopen(argv[1], "r");

	if (fp == NULL) {
		exit (1);
	}

	int a = 0;
	int c;
	int digit[10];
	char d[11] = "0123456789";

	for (int i = 0; i < 10; ++i) {
		digit[i] = 0;
	}
	
	while ((c = fgetc(fp)) != EOF) {
		++digit[c-'0'];
	}

	for (int i = 0; i < 10; ++i) {
		printf("%c ", d[i]);
	}

	printf("\n");
	
	for (int i = 0; i < 10; ++i) {
		printf("%d ", digit[i]);
	}

	printf("\n");
	fclose(fp);

}
