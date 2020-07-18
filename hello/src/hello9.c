#include <stdio.h>
#include <string.h>

int main() {
	char c[] = "Hello world!";
	int len = strlen(c);

	for(int i = strlen(c); i >= 0; --i) {
		printf("%c", c[i]);
	}

	printf("\n");
	return 0;
}
