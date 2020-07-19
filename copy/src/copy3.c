#include <stdio.h>

int main(int argc, char **argv) {
	
	FILE *fpi = fopen(argv[1], "r");
	FILE *fpo = fopen(argv[2], "r+");

	if ((argc < 2) || (fpi == NULL) || (fpo == NULL)) {
		return 1;
	}

}


