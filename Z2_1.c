#include <stdio.h>

int main ()
{
	int mas[300], i, zn;
	
	printf("\nVvedite MAX: ");
	scanf("%d", &zn);
	
	for(i = 0; i <= zn; i++) {
		mas[i] = i;
		printf("\nmas[%d] = %d", i, mas[i]);
	}	
	
	return 0;
}