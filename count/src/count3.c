#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv) {

	int cc, wc, lc;
	cc = wc = lc = 0;

	FILE *fp = fopen(argv[1], "r");

	if (fp == NULL) {
		return 1;
	}

	//char c = fgetc(fp);

	while (1) {
		
		char c = fgetc(fp);
		
		if ((isalpha(c)) || (isdigit(c))){
			++cc;
		}

		else if (c == ' ') {
			++wc;
		}

		else if (c == '\n') {
			++lc;
		}

		else if (c == EOF) {
			break;
		}
	}

	printf("C\tW\tL\n");
	printf("%d\t%d\t%d\n", cc, wc, lc);

	fclose(fp);
	return 0;
}
