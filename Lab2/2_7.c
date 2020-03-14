#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void citire(int m, int n, int a[][10])
{
	int i, j;
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			printf("[%d][%d]= ",i,j);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int m, int n, int a[][10])
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	printf("\n");
}

void inmultire(int m, int n,int p, int a[][10], int b[][10])
{
	int c[10][10], i, j, k;
	for (i = 0; i < m; i++) {
		for (j = 0; j < p; j++) {
			c[i][j] = 0;
			for (k = 0; k < n; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < p; j++)
			printf("%d ", c[i][j]);
		printf("\n");

	}
}

int main()
{
	int n, m, p, a[7][8], b[8][9];
	printf("Dati numarul de linii pentru prima matrice a ");
	scanf("%d", &m);
	printf("Dati nr de coloane pt a si nr de linii pt b ");
	scanf("%d", &n);
	printf("Dati nr de coloane pt b ");
	scanf("%d", &p);
	citire(m, n, a);
	afisare(m, n, a);
	citire(n, p, b);
	afisare(n, p, b);
	inmultire(m, n,p, a, b);
	return(0);
}
