#include <stdio.h>

int main(int argc, char *argv[]){
	char *file = argv[1];

	FILE *fp;

	char c;

	fp = fopen(file, "r");

	while(c != EOF) {
		c = fgetc(fp);
		printf("%c", c);
	}

	fclose(fp);
	return 0;
}
