#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 300

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
	int masA[SIZE], masB[SIZE];
	int roz_A, roz_B, roz_diap;
	int i_A, i_B, flag = 0;
	
	srand(time(0));
	
	printf("\nVvedite rozmer masiva A: ");
	scanf("%d", &roz_A);
	printf("\nVvedite rozmer masiva B: ");
	scanf("%d", &roz_B);
	printf("\nVvedite diapazon: ");
	scanf("%d", &roz_diap);
	
	rand_mas_n(masA, roz_A, roz_diap, 0);
	rand_mas_n(masB, roz_B, roz_diap, 0);
	printf("\nMAS A:");
	print_mas(masA, roz_A);
	printf("\n\nMAS B:");
	print_mas(masB, roz_B);
	printf("\n\n");
	system("pause");
	
	for(i_A = 0; i_A < roz_A; i_A++)
		for(i_B = 0; i_B < roz_B; i_B++)
			if(masA[i_A] == masB[i_B]) {
				flag = flag + 1;
				break;
			}
	
	if(flag == roz_A)
		printf("\n\nMasA vhodit v masB!!!\n\n");
	else
		printf("\n\nMasA ne vhodit v masB.\n\n");
	
	return 0;
}