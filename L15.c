#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("\n\tmas[%2d] = %d", i, mas[i]);
}

int main()
{
	int mas[SIZE], mas2[SIZE], i, i2;
	
	for(i = 0, i2 = 1; i < SIZE; i++, i2 += 2)
		mas[i] = i2;
	
	print_mas(mas, SIZE);
	
	for(i = 0, i2 = (SIZE - 1); i < SIZE; i++, i2--)
		mas2[i] = mas[i2];
	
	printf("\n\n\t\t*******\n");
	for(i = 0; i < SIZE; i++)
		printf("\n\t\tmas2[%d] = %d", i, mas2[i]);
	
	return 0;
}