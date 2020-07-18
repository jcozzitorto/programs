#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "This place has a REALLY good reputation";
	int i = 0;
	int len = strlen(str);

	while(i < len) {
		printf("%c", str[i]);
		i++;
	}

	printf("\n");

	return 0;
}
