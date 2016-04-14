#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 16

void print(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++) 
		printf("\n\tmas[%d] = %c", i, mas[i]);
}

int poisk(int *mas, int n, char x)
{
	int i, zn = 0;
	
	for(i = 0; i < n; i++)
		if(mas[i] == x) {
			printf("mas[%d], ", i);
			zn++;
		}	
	return zn;	
}

int main()
{
	int mas[SIZE], i, zn;
	char c;
	
	srand(time(0));
	
	for(i = 0; i < SIZE; i++) {
		zn = 65 + (rand() % 57);
		if((zn > 90) && (zn < 97)) {
			i--;
			continue;
		}	
		mas[i] = zn;
	}	
	
	print(mas, SIZE);
	
	printf("\nVvedite bukvu: ");
	scanf("%c", &c);
	printf("Vasha bukva %c v takih masivah: ", c);
	zn = poisk(mas, SIZE, c);
	printf("\nVasha bukva v masive est %d raz.", zn);
	
	return 0;
}