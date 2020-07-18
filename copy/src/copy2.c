#include <stdio.h>

int main(int argc, char *argv[]) {
	FILE *fp;

        fp = fopen(argv[2], "w");

	char *c[] = argv[1];

	while ((c = getchar()) != EOF) {
		fprintf(fp, "%c ", putchar(c));
	}

	fclose(fp);

	return 0;
}

