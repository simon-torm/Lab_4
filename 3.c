#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int mas[10], i, pro = 1, kol = 0;
	srand(time(0));
	
	for(i = 0; i < 10; i++) {
		mas[i] = (rand() % 20) - 10;
		printf("\n\tmas[%d] = %d", i, mas[i]);
	}	
	
	for (i = 0; i < 10; i++)
		if(((mas[i] % 2) == 0)&&(mas[i] > 0)){
			pro *= mas[i];
		kol++;
		}
	printf("\n\n\tsuma = %d", pro);	
	printf("\n\tKoli4estvo: %d", kol);
		
	return 0;	
}