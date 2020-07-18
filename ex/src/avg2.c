#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int s; 
	int i;
	int c = 0;
	float avg;

	char str[255];

	while(1){
		printf("Value: ");
		scanf("%s", str);

		if(strcmp(str, "n") == 0) {
			break;
		}
	
		i = atoi(str);
		s = s + i;
		++c;
	}

	avg = (float)(s / c);
	printf("%.2f\n", avg);

	return 0;
}

