#include<stdio.h>

void citire(int m, int n, int a[][10])
{
	int i, j;
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			printf("a[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int m, int n, int a[][10])
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d", a[i][j]);
			printf("\n");
	}
}

void interschimbare(int m, int n, int a[][10])
{
	int i, j,aux;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if (i > j)
			{
				aux = a[j][i];
				a[j][i] = a[i][j];
				a[i][j] = aux;
			}
		}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
}

int main()
{
	int a[10][10], m, n;
	printf("Dati nr de linii ");
	scanf("%d", &m);
	printf("Dati nr de coloane ");
	scanf("%d", &n);
	citire(m, n, a);
	afisare(m, n, a);
	interschimbare(m, n, a);
	return(0);
}
