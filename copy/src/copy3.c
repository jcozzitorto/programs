#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	
	FILE *fpi = fopen(argv[1], "r");
	FILE *fpo = fopen(argv[2], "w");

	if ((argc < 2) || (fpi == NULL) || (fpo == NULL)) {
		exit(1);
	}
		
	char c = fgetc(fpi);

	while (c != EOF) {

		fputc(c, fpo);
		c = fgetc(fpi);
	}

}


