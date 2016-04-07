#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	double mas[300];
	int i;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = (float)rand() / RAND_MAX;
		printf("\n\tmas[%d] = %lf", i, mas[i]);
	}
	
	return 0;
}