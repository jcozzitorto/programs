#include <stdio.h>
#include <ctype.h>

int main() {
	FILE *fp;

	char c;
	int wc = 0;
	int cc = 0;
	int lc = 0;

	fp = fopen("/home/jasonc/programs/wc/file.txt", "r");

	while(c != EOF) {
		c= getc(fp);
		cc++;
		if (isspace(c)) {
			wc++;
		}
		if(c == '\n') {
			lc++;
		}
	}
	
	printf("C\tW\tL\n");
	printf("%d\t%d\t%d\n", cc, wc, lc);

	fclose(fp);
	return 0;
}
