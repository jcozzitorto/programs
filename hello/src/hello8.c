#include <stdio.h>
#include <string.h>

void print_str(char str[]) {
	int i = 0;
	int len = strlen(str);

	while(i < len) {
		printf("%c", str[i]);
		i++;
	}

	printf("\n");
}

int main() {
	char str[] = "This guy FUCKED UP, that's what happened!";
	print_str(str);

	return 0;
}
	
