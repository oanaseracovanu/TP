#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



void citire(int *n, int *v)
{
	int i;
	for (i = 0; i < *n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", v + i);
	}
}

void afisare(int *n, int *v)
{
	int i;
	for (i = 0; i < *n; i++)
		printf("%d ", *(v + i));
	printf("\n");
}

void stergere(int *n, int *v)
{
	int i, j, k = 0;
	for(i=0;i<=(*n-k);i++)
		if (*(v + i) % 2 == 0)
		{
			k++;
			for (j = i; j <= (*n - k); j++)
				*(v + j) = *(v + j + 1);
			i--;
		}
	*n = *n - k;
	for (i = 0; i <=*n; i++)
		printf("%d ", *(v + i));
}

int main()
{
	int v[10],n;
	printf("Dati dimensiunea vectorului");
	scanf("%d", &n);
	citire(&n,v);
	afisare(&n,v);
	stergere(&n,v);
	return 0;
}
