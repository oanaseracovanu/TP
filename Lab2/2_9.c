#include<stdio.h>

#define m 3
#define n 3

void citire(int a[][20])
{
	int i, j, k = 1;
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			*(*(a + i) + j) = k;
			k = k + 1;
		}
}

void afisare(int a[][20])
{
	int i, j;
	for (i = 0; i <m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", *(*(a+i)+j));
		printf("\n");
	}
}

int main()
{
	int a[10][20];
	citire(a);
	afisare(a);
	return(0);

}
