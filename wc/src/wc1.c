#include <stdio.h>

int main() {
	FILE *fp;

	char c;
	int i = 0;

	fp=fopen("/home/jasonc/programs/wc/file.txt", "r");

	while(c != EOF) {
		c = getc(fp);
		i++;
	}

	printf("%d\n", i);

	fclose(fp);
	return 0;
}
