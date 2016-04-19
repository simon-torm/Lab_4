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


void sort(int *mas, int n)
{
	int i, i2, x;
	
	for(i = 0; i < n; i++)
		for(i2 = 0; i2 < n; i2++) {
			if(i2 == n - 1)
				continue;
			else if(mas[i2] > mas[i2 + 1]) {
				x = mas[i2];
				mas[i2] = mas[i2 + 1];
				mas[i2 + 1] = x;
			}
		}
}

int main()
{
	int mas[SIZE], i;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 50;
	
	print_mas(mas, SIZE);
	sort(mas, SIZE);
	printf("\n\n\t\t*******\n");
	print_mas(mas, SIZE);
	
	return 0;
}