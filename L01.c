#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int prover(int * mas, int i);

int main ()
{
	int massiv[14];
	int i;
	srand(time(0));
	
	for(i = 0; i < 15; ) {
		massiv[i] = rand() % 15;
		if(prover(massiv, i))
			i++;
	}	
	
	for(i = 0; i < 15; i++)
		printf("\nmas[%d] = %d", i, massiv[i]);
	
	return 0;
}

int prover (int * mas, int i)
{
	int i2; 
	for(i2 = 0; i2 < i; i2++) {
		if (mas[i] == mas[i2])
			return 0;
	}
	return 1;
}
