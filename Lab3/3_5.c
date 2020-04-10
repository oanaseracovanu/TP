#include<stdio.h>

void afisare(int v[],int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", *(v + i));
		printf("\n");
}

void minim(int v[],int n)
{
	int i, min = *(v+0);
	for (i = 0; i < n; i++)
		if (*(v + i) < min) min = *(v + i);
	for (i = 0; i < n; i++)
		if (*(v + i) == min) printf("Minimul este: %d\n", *(v + i));
}

int main()
{
	int v[]={7,-5,4,3,-9,2,8},n=7;
	afisare(v,n);
	minim(v,n);
	return 0;
}
