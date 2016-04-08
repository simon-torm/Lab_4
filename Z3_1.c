#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int poisk(int *mas, int n, int x);

int main()
{
	int mas[300], i, x;
	int *adres;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = - 100 + (rand() % 200);
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	printf("\nVvedite 4islo dlya poiska: ");
	scanf("%d", &x);
	
	if((i = poisk(mas, 10, x)) >= 0)
		printf("\nVashe 4islo %d v mas[%d].\n", x, i);
	else
		printf("\n4islo %d ne naydeno.\n", x);
	
	return 0;
}

int poisk(int *mas, int n, int x)
{
	int i;
	for(i = 0; i < n; i++) {
		if(mas[i] == x)
			return i;
	}
	
	return -1;
}
