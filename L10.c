#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("\n\tmas[%2d] = %d", i, mas[i]);
}

int max_zn(int *mas, int n)
{
	int i, zn;
	int max = mas[0];
	
	for(i = 0; i < n; i++)
		if(mas[i] > max) {
			max = mas[i];
			zn = i;
		}	
		
	return zn;	
}

int main()
{
	int mas[SIZE], i, zn;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 50;
	
	print_mas(mas, SIZE);
	
	zn = max_zn(mas, SIZE);
	printf("\nMAX: %d", mas[zn]);
	
	for(i = zn; i < (SIZE - 1); i++)
		mas[i] = mas[i + 1];
	
	print_mas(mas, SIZE - 1);
	
	return 0;	
}