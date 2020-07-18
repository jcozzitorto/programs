#include <stdio.h>

int main() {
	double cc;

	for (cc = 0; getchar() != EOF; ++cc) {
		;
	}

	printf("%.0f", cc);

	return 0;
}
	
