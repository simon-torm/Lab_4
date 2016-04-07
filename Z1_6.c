#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	double mas[300], a, b;
	int i;
	
	printf("\nVvedite A: ");
	scanf("%lf", &a);
	printf("\nVvedite B: ");
	scanf("%lf", &b);
	
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = ((float)rand() / RAND_MAX) * (b - a) + a;
		printf("\n\tmas[%d] = %lf", i, mas[i]);
	}
	
	return 0;
}