#include <stdio.h>
#include <string.h>

void print_str(char str[]) {
	printf("%s\n", str);
}

int main() {
	char str[] = "Asian sex stories";
	print_str(str);

	return 0;
}
