#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

	for(int i = 1; i < argc; ++i) {
		char * str = argv[i];

		if(str[0] == 'S') {
			;
		}

		else if(str[0] == 'L') {
			for(int j = 0; j < strlen(str); ++j) {
				if (isupper(str[j])) {
					printf("%c", tolower(str[j]));
				}

				else {
					printf("%c", str[j]);
				}

			}

		}

		else if(str[0] == 'U') {
			for(int k = 0; k < strlen(str); ++k) {
				if (islower(str[k])) {
					printf("%c", toupper(str[k]));
				}

				else {
					printf("%c", str[k]);
				}
			}

		}

		else if((str[0] != 'S') && (str[0] != 'L') && (str[0] != 'U')) {
			printf("FAIL");
		}
		
		printf("\n");

	}

	return 0;

}

