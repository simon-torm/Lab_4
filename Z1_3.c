#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int mas[10];
	int i, a, b;
	
	printf("\nVvedite a: ");
	scanf("%d", &a);
	printf("\nVvedite b: ");
	scanf("%d", &b);
	
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = (rand() % (b - a)) + a;
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	return 0;
}