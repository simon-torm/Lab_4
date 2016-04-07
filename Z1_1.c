#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int mass[300];
	int h, i;
	printf("Vvedite h: ");
	scanf("%d", &h);
	
	srand(time(0));
	
	for(i = 0; i < h; i++) {
		mass[i] = rand() % 100;
		printf("\n\tmas[%d] = %d", i, mass[i]);
	}
}