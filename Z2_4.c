#include <stdio.h>

int main ()
{
	int i;
	double mas[300], max, zn;
	
	printf("\nVvedite MAX: ");
	scanf("%lf", &max);
	

	
	for(i = 0, zn = 1; zn < max; zn = zn + 0.1, i++) {
		mas[i] = zn;
		printf("\t mas[%d] = %.1lf\n", i, zn);
	}	
	
	return 0;
}