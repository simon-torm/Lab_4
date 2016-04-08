#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int poisk(int *mas, int n, int x);

int main()
{
	int mas[300], i, x = 8;
	int *adres;
	
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = - 10 + (rand() % 20);
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}
	
	if((i = poisk(mas, 10, x)) >= 0)
		printf("\n4islo %d v mas[%d].\n", x, i);
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