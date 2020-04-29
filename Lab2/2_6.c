#include<stdio.h>

#define col 3
#define lin 3
#define linia 2

void citire(int a[][col])
{
	int i, j;
	for(i=1;i<=lin;i++)
		for (j = 1; j <= col; j++)
		{
			printf("a[%d][%d]= ",i,j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int a[][col])
{
	int i, j;
	for (i = 1; i <= lin+1; i++)
	{
		for (j = 1; j <= col; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

void adaugare(int a[][col])
{
	int i, j;
	for(i=lin+1;i>=1;i--)
		for (j = 1; j <= col; j++)
		{
			if (i== linia)
			a[i+1][j] =0;
			if (i > linia)
				a[i+1][j] = a[i][j];

		}
}

int main()
{
	int a[20][20];
	citire(a);
	adaugare(a);
	afisare(a);
	return (0);
}