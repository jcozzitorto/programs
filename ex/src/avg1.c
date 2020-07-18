#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	int s = 0;
	int c = 0;
	float a = 0;
	int  conv;
	
	
	for(int i = 1; i < argc; ++i) {
		conv =  atoi(argv[i]);
		s = s + conv;
		++c; 
	}

	a = (float)s / c;
	printf("%.2f\n", a);

	return 0;
}

