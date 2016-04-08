#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void poisk(int *mas, int n, int x);

int main()
{
	int mas[300], i, x;
	int *adres;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = rand() % 6;
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	printf("\nVvedite 4islo dlya poiska: ");
	scanf("%d", &x);
	
	poisk(mas, 10, x);
	
	return 0;
}

void poisk(int *mas, int n, int x)
{
	int i;
	for(i = 0; i < n; i++) {
		if(mas[i] == x)
			printf("\nVashe 4islo %d v mas[%d].", x, i);
	}
}