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
	int mas1[SIZE], mas2[SIZE], i, j, k = 0;
	int flag;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas1[i] = rand() % 10;
	
	print_mas(mas1, SIZE);
	
	for(i = 0; i < SIZE; i++) {
		flag = 1;
		for(j = 0; j < SIZE; j++) {
			if(j == i)
				continue;
			if(mas1[i] == mas1[j]) {
				flag = 0;
				break;
			}
		}
		if(flag) {
			mas2[k] = mas1[i];
			k++;
		}
	}
	
	printf("\nMAS2: ");
	print_mas(mas2, k);
	
	return 0;
}
