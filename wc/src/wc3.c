#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	//char * arg[] = argv[1];
	char c;

	int wc = 0;
	int cc = 0;
	int lc = 0;
	
	FILE *fp;
	fp = fopen("argv[1]", "r");

	if(argc > 1) {
		return 0;
	}

	while (c != EOF) {
		c = getc(fp);
		cc++;

		if(isspace(c)) {
			wc++;
		}

		if(c == '\n') {
			lc++;
		}
	}

	printf("W\tC\tL\n");
	printf("%d\t%d\t%d\n", wc, cc, lc);

	fclose(fp);
}



