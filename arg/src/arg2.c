#include <stdio.h>

int main (int argc, char *argv[]) {
	if(argc > 0) {
		for(int i = 1; i < argc; ++i) {
			printf("%d %s\n", i, argv[i]);
		}
	}
		else {
		       	return 0;
		}

	return 0;
}
