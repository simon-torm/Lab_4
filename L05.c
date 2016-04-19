#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int poisk(int *mas, int n, int x);

int main()
{
	int mas[SIZE], i, x, zn;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++) 
		mas[i] = rand() % 50;
	
	for(i = 0; i < SIZE; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);
	
	printf("\nVvedite 4islo: ");
	scanf("%d", &x);
	printf("\nVashe 4islo %d v takih elementah: ", x);
	zn = poisk(mas, SIZE, x);
	printf("\nVsego 4isel %d v elementah masiva %d", x, zn);
	
	return 0;
}

int poisk(int *mas, int n, int x)
{
	int i, zn = 0;
	
	for(i = 0; i < n; i++)
		if(mas[i] == x) {
			printf("%d, ", i);
			zn++;
		}	
	return zn;	
}
