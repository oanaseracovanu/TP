#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void citire(int n, int v[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("v[%d]= ",i);
		scanf("%d", v + i);
	}
}

void afisare(int n, int v[])
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", *(v + i));
		printf("\n");
}

void sortare(int n, int v[])
{
	int i,aux,k;
		do
		{
			k = 1;
			for (i = 0; i < n; i++)
			if (*(v + i) < *(v + i+1))
			{
				aux = *(v + i);
				*(v + i) = *(v + i+1);
				*(v + i + 1) = aux;
				k = 0;
			}

		} while (!k);

}

int main()
{
	int v[10], n;
	printf("Dati dimensiunea vectorului  ");
	scanf("%d", &n);
	citire(n, v);
	afisare(n, v);
	sortare(n, v);
	afisare(n, v);
	return 0;
}
