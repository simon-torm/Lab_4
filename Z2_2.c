#include <stdio.h>

int main ()
{
	int mas[300], i, max, min, zn;
	
	printf("\nVvedite MAX: ");
	scanf("%d", &max);
	printf("\nVvedite MIN: ");
	scanf("%d", &min);
	
	for(i = 0, zn = min; zn <= max; i++, zn++) {
		mas[i] = zn;
		printf("\nmas[%d] = %d", i, mas[i]);
	}	
	
	return 0;
}