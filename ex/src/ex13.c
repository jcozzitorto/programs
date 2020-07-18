#include <stdio.h>
#include <stdlib.h>

int main() {
	int x, y, z, r, max;

	printf("Enter first integer: ");
	scanf("%d", &x);

	printf("Enter second integer: ");
	scanf("%d", &y);

	printf("Enter third integer: ");
	scanf("%d", &z);

	r = (x + y + abs(x - y)) / 2;

	max = (r + z + abs(r - z)) / 2;

	printf("Max value is: %d\n", max);

	return 0;
}
