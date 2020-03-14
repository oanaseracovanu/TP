#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#define n 7

void citire(int v[])
{
	int i;
	for(i=0;i<n;i++)
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

void negative(int v[])
{
	int i,nr=0;
	for (i = 0; i < n; i++)
		if (*(v + i) < 0) nr = nr + 1;
	printf("In vector sunt %d numere negative", nr);
}
int main()
{
	int v[10];
	citire(v);
	afisare(v);
	negative(v);
	return 0;
}
