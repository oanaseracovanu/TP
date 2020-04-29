#include<stdio.h>

void citire(int n, int* v)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", v + i);
	}
}

void afisare(int n, int* v)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", *(v + i));
}

void duplicate(int n, int* v)
{
	int i,j,k;
	for (i = 0; i < n; i++)
	{
		k = 0;
		for (j = 0; j < n; j++)
			if (*(v + i) == *(v + j)) k = k + 1;
			if (k > 1) printf("Elementul %d are duplicat \n", *(v+i));
	}

}

int main()
{
	int v[10], n;
	printf("Dati nr de elemente");
	scanf("%d", &n);
	citire(n, v);
	afisare(n, v);
	printf("\n");
	duplicate(n, v);
	return 0;
}
