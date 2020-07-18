#include <stdio.h>

int main() {
	int fahr, celsius;

	int low = 0;
	int high = 300;
	int inc = 20;

	fahr = low;

	printf("F\tC\n");

	while(fahr <= high) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + inc;
	}

	return 0;
}

