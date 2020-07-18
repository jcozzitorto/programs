#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, z;

	printf("Input first number: ");
	scanf("%d", &x);

	printf("Input second number: ");
	scanf("%d", &y);

	z = x * y;

	printf("%d * %d = %d\n", x, y, z);

	return 0;
}
