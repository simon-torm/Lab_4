#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int mas[30], i, suma = 0;
	srand(time(0));
	
	for(i = 0; i < 30; i++) {
		mas[i] = (rand() % 60) - 30;
		printf("\nmas[%d] = %d", i, mas[i]);
	}
	
	for(i = 0; i < 30; i++)
		if((mas[i] % 3) == 0)
			suma += mas[i];
		
	printf("\n\n\tSUMA = %d", suma);	

	return 0;
}