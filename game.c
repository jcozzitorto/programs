#include <stdio.h>
#include <time.h>

void delay(int s)
{
	int ms = 1000 * s;
	clock_t start_time = clock();
	while(clock() < start_time + ms)
		;
}

int main() {
	char c;
	int s = 20;
	printf("Play the game? ");
	scanf("%c", &c);

	if(c == 'y')
		while(s > 0)
		{
			delay(1);
			printf("%d\n", s);
			--s;
			srand(time(NULL));
		}
	
	printf("8=====D---\n");
}
