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

int compare(const void * x1, const void * x2)  
{
  return ( *(int*)x1 - *(int*)x2 );             
}

int main()
{
	int mas[SIZE], i;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 30;
	
	print_mas(mas, SIZE);
	qsort(mas, SIZE, sizeof(int), compare);
	printf("\n\n\t*******\n");
	print_mas(mas, SIZE);
	
	return 0;	
}