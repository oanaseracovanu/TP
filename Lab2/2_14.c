#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void citire(int n, int a[][10])
{
	int i, j;
	for (i = 0; i < n; i++)
		for (j = 0; j < 3; j++)
		{
			printf("Vanzarile produsului %d sunt: \n", i);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int n, int a[][10])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}

void crestere(int n, int a[][10])
{
	int i, j,k;
	for (i = 0; i < n; i++)
	{
		k = 1;
			for (j = 1; j < 3; j++)
				if (a[i][j-1] > a[i][j])
				{
					k = 0;
					break;
				}
			if (k == 1) printf("Vanzarile produsului %d au crescut\n", i);
	}
}

int main()
{
	int a[10][10], n;
	printf("Dati numarul de produse\n");
	scanf("%d", &n);
	citire(n, a);
	afisare(n, a);
	crestere(n, a);
	return(0);
}
