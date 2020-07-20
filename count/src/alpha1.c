#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char **argv) {

	FILE *fp = fopen(argv[1], "r");

	if (fp == NULL) {
		exit (1);
	}
	
	int a, c;
	int count[26];
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";

	for (int i = 0; i < 26; ++i) {
		count[i] = 0;
	}

	while (a < 26) {
		a = 'a';
	}
		
	while (1) {
		
		c = fgetc(fp);

		if (c == EOF) {
			break;
		}

		if (('a' <= c) && (c <= 'z')) {
			++count[c - 'a'];
		}

		
	}

	for (int j = 0; j < 26; ++j) {
		printf("%c ", alpha[j]);
	}
	
	printf("\n");
	
	for (int k = 0; k < 26; ++k) {
		printf("%d ", count[k]);
	}
	
	printf("\n");
	fclose(fp);
}
