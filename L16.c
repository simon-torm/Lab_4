#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20
#define DIAP 30

void print_mas(int *mas, int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("\n\tmas[%d] = %d", i, mas[i]);
}

int perev(int *mas, int n, int zn)
{
	int i;
	for(i = 0; i < n; i++)
		if(zn == mas[i])
			return 0;
		
	return 1;	
}

void rand_mas_n(int *mas, int n, int kol, int poch)
{
	int i;
	for(i = 0; i < n; ) {
		mas[i] = poch + rand() % kol;
		if(perev(mas, i, mas[i]))
			i++;
	}	
}

int main()
{
	int masA[SIZE], masB[SIZE], masC[SIZE];
	int i, i_B, i_pr;
	int flag, siz_B = 0;
	
	srand(time(0));
	
	rand_mas_n(masA, SIZE, DIAP, 0);
	rand_mas_n(masB, SIZE, DIAP, 0);
	printf("\n\nMAS A: ");
	print_mas(masA, SIZE);
	printf("\n\nMAS B: ");
	print_mas(masB, SIZE);
	
	printf("\n\n");
	system("pause");
	
	for(i = 0, i_B = 0; i_B < SIZE; i_B++) {
		for(i_pr = 0, flag = 0; i_pr < SIZE; i_pr++) {
			if(masB[i_B] == masA[i_pr]) {
				flag = 1;
				break;
			}
		}
		if(flag) {
			masC[i] = masB[i_B];
			siz_B = siz_B + 1;
			i++;
		}
	}
	
	printf("\n\nMAS C: ");
	print_mas(masC, siz_B);
	
	return 0;
}