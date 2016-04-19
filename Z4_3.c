#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void sor(int *mas, int n);

int main()
{
	int mas[SIZE], i;
	clock_t t_start, t_finish;
	
	t_start = clock();		
	srand(time(0));
	
	for(i = 0; i < SIZE; i++) {
		mas[i] = rand() % 80;
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	printf("\n\n\t*******\n\n");
		
	sor(mas, SIZE);	
	
	for(i = 0; i < SIZE; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);	
	
	t_finish = clock();	
	printf("\nTime: %lf", ((float)(t_finish - t_start)) / CLOCKS_PER_SEC);
	
	return 0;
}

void sor(int *mas, int n)
{
	int i1, i2, x, min, zn;
	
	for(i1 = 0; i1 < n; i1++) {
		min = mas[i1];
		for(i2 = i1; i2 < n; i2++) {
			if(mas[i2] < min) {
				min = mas[i2];
				zn = i2;
			}
		}
		x = mas[i1];
		mas[i1] = min;
		mas[zn] = x;
	}
}