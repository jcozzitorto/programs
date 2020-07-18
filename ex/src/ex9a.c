#include <stdio.h>
#include <stdlib.h>

int main() {

	float x, y, z;
	
	printf("Input first number: ");
	scanf("%f", &x);

	printf("Input second number: ");
	scanf("%f", &y);

	z = x * y;

	printf("%3.1f * %3.1f = %3.1f\n", x, y, z);

	return 0;
}
