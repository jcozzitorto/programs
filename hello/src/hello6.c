#include <stdio.h>
#include <string.h>

void print_str(char str[]) {
	int len = strlen(str);
	
	for(int i = 0; i < len; i++) {
		printf("%c", str[i]);
	}

	printf("\n");
}

int main() {
	char str[] = "Japanese MILFs";
	print_str(str);

	return 0;
}

