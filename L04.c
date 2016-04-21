#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);
}

void lich(int *mas, int n)
{
	int i, dod = 0, vid = 0;
	
	for(i = 0; i < n; i++)
		if(mas[i] > 0)
			dod = dod + 1;
		else if(mas[i] < 0)
			vid = vid + 1;	
		
	printf("\n\tdodatnih: %d", dod);
	printf("\n\tvid`emnih: %d", vid);	
}

int main ()
{
	int mas[SIZE], i;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++)
		mas[i] = - 20 + rand() % 40;
	
	print_mas(mas, SIZE);
	
	lich(mas, SIZE);
	
	return 0;
}
