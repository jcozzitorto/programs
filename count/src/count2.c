#include <stdio.h>

#define IN 	1
#define OUT 	0

int main(int argc, char *argv[]) {
	int c, nc, nl, nw, state;

	FILE *fp;

	fp = fopen(argv[1], "r");
	
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
}
	
