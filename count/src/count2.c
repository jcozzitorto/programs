#include <stdio.h>
#include <stdlib.h>

#define IN 	1
#define OUT 	0

int main(int argc, char **argv) {
	int nc, nl, nw, state;
	char c;

	FILE *fp = fopen(argv[1], "r");
	
	if ((fp == NULL) || (argc < 2)) {
		printf("Invalid file\n");
		exit(0);
	}

	state = OUT;
	nc = nl = nw = 0;
	while ((c = getchar()) != EOF) {
		++nc;

		if (c == '\n')
			++nl;

		if ((c == ' ') || (c == '\n') || (c == '\t'))
			state = OUT;

		else if (state == OUT) {
			state = IN;
			++nw;
		}
	
		
	} 
	
	printf("%d, %d, %d\n", nc, nw, nl);

	fclose(fp);
	return(0);
}
	
