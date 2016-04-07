#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int mas[300];
	int i;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = (rand() % 200) - 100;
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	return 0;
}