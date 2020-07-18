#include <stdio.h>

int main() {
	FILE *fp;
	char c;

	fp = fopen("/home/jasonc/programs/io/file.txt", "r");

	while(c != EOF) {
		c = fgetc(fp);
		printf("%c", c);
	}

	fclose(fp);
	return 0;
}
