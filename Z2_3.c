#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int mas[300], i, x = 0, zn;
	srand(time(0));
	
	printf("\nVvedite max zna4enie: ");
	scanf("%d", &zn);
	
	for(i = 0; x < zn; x = x + 2, i++) {
		mas[i] = x;
	}	
	
	for(i = 0; i < zn; i++) {
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}	
	
	return 0;
}