#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define n 7

void citire(int v[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("v[%d]= ", i);
		scanf("%d", v + i);
	}
}

void afisare(int v[])
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", *(v + i));
}

void minim(int v[])
{
	int i, min = v;
	for (i = 0; i < n; i++)
		if (*(v + i) < min) min = *(v + i);
	for (i = 0; i < n; i++)
		if (*(v + i) == min) printf("Minimul este: %d", *(v + i));
}

int main()
{
	int v[10];
	citire(v);
	afisare(v);
	minim(v);
	return 0;
}
