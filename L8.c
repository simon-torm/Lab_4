#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16

void print_(float *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("\n\tmas[%2d] = %lf", i, mas[i]);
}

float max_zn(float *mas, int n)
{
	int i;
	float max = 0;
	
	for(i = 0; i < n; i++)
		if(mas[i] > max)
			max = mas[i];
		
	return max;	
}

int main()
{
	float mas[SIZE], x, max;
	int i;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = ((float)rand() / RAND_MAX) * 10.0;
	
	print_(mas, SIZE);
	max = max_zn(mas, SIZE);
	
	printf("\n\tMAX: %lf", max);
	
	return 0;
}