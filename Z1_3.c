#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int mas[10];
	int i, a, b, j;
	
	printf("\nVvedite a: ");
	scanf("%d", &a);
	printf("\nVvedite b: ");
	scanf("%d", &b);
	
	srand(time(0));
	
	for(i = a, j = 0; i < b; i++, j++) {
		mas[j] = i;
		printf("\n\tmas[%d] = %d", j, mas[j]);
	}
	
	return 0;
}
