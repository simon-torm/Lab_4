#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3
#define DIAPAZON 5

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);
}

void rand_mas(int *mas, int n, int kol, int poch)
{
	int i;
	for(i = 0; i < n; i++)
		mas[i] = poch + rand() % kol;
}

int main()
{
	int mas1[SIZE], mas2[SIZE], i, sum = 0;
	
	srand(time(0));
	
	rand_mas(mas1, SIZE, DIAPAZON, 0);
	rand_mas(mas2, SIZE, DIAPAZON, 0);
	printf("\n\t\tMAS 1\n");
	print_mas(mas1, SIZE);
	printf("\n\n\n\t\tMAS 2\n");
	print_mas(mas2, SIZE);
	
	for(i = 0; i < SIZE; i++)
		sum = sum + (mas1[i] * mas2[i]);
	
	printf("\n\n\t\tSUM = %d", sum);
	
	return 0;	
}
