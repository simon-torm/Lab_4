#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20

void print_(int *mas, int n)
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
	int mas[SIZE], i, zn, per;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = rand() % 100;
	
	print_(mas, SIZE);
	
	zn = max_zn(mas, SIZE);
	
	printf("\n\n\tMAX: mas[%d]\n\n*******\n\n", zn);
	
	per = mas[0];
	mas[0] = mas [zn];
	mas[zn] = per;
	
	print_(mas, SIZE);
	
	return 0;
}