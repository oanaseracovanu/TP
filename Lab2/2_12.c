#include<stdio.h>

void citire(int n, int a[][10])
{
	int i, j;
	for(i=0;i<n;i++)
		for (j = 0; j < n; j++)
		{
			printf("Prietenii persoanei %d sunt: ", i);
			scanf("%d", &a[i][j]);
		}
}

void afisare(int n, int a[][10])
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}

}

void nr(int n, int a[][10])
{
	int i, j,nr=0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			if (a[i][j] != 0) nr = nr + 1;
		printf("Persoana %d are %d prieteni\n ", i, nr);
		nr = 0;
	}
}

int main()
{
	int a[10][10], n;
	printf("Dati nr de persoane ");
	scanf("%d", &n);
	citire(n, a);
	afisare(n, a);
	nr(n, a);
	return(0);
}
