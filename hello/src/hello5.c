#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "Hello";
	int len = strlen(str);

	for(int i = 0; i < len; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}
