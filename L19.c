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

int poisk(int *mas)
{
	int i, i2, f = 0;
	for(i = 0; i < SIZE; i++)
		for(i2 = (i + 1); i2 < SIZE; i2++) {
			if(mas[i] == mas[i2]) {
				printf(" %d", mas[i]);
				f = 1;	
			}	
		}
	
	if(f == 0)	
		return 0;	
	else
		return 1;
}

int main()
{
	int mas[SIZE], i;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 50;
	
	print_mas(mas, SIZE);
	
	printf("\n4isla povtoryaunsa: ");
	if(poisk(mas) == 0)
		printf("\nNETU!");
	
	return 0;
}