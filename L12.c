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

int max_zn(int *mas, int n, int zn_m)
{
	int i, zn;
	int max = mas[zn_m];
	
	for(i = zn_m; i < n; i++)
		if(mas[i] > max) {
			max = mas[i];
			zn = i;
		}	
		
	return zn;	
}

void sort(int *mas, int n)
{
	int i, x, zn;
	for(i = 0; i < n; i++) {
		x = mas[i];
		zn = max_zn(mas, SIZE, i);
		mas[i] = mas[zn];
		mas[zn] = x;
	}
}

int main()
{
	int mas[SIZE], i, zn;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 50;
	
	print_mas(mas, SIZE);
	printf("\n\n\t\t*******");
	sort(mas, SIZE);
	print_mas(mas, SIZE);	
	
	return 0;
}