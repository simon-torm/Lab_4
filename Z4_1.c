#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void sor_bol(int *mas, int n);

int main()
{
	int mas[SIZE + 1], i;
	clock_t t_start, t_finish;
	
	t_start = clock();	
	srand(time(0));
	
	
	for(i = 0; i < SIZE; i++) {
		mas[i] = rand() % 30;
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	printf("\n\n\t*******\n\n");		
	sor_bol(mas, SIZE);	
	
	for(i = 0; i < SIZE; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);
	
	t_finish = clock();
	
	printf("\nTime: %lf", ((float)(t_finish - t_start)) / CLOCKS_PER_SEC);
	
	return 0;
}

void sor_bol(int *mas, int n)
{
	int i1, i2, x;
	
	for(i1 = 0; i1 < n; i1++) {
		for(i2 = 0; i2 < n; i2++)
			if(mas[i2 + 1] < mas[i2]) {
				x = mas[i2 + 1];
				mas[i2 + 1] = mas[i2];
				mas[i2] = x;
			}
	}
}