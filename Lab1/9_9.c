#include<stdio.h>
#include<stdlib.h>

void min_max(int v[], int n)
{
	int i, min =*v, max = *v;
	for (i = 0; i < n; i++)
	{
		if (v[i] < min) min = v[i];
		if (v[i] > max) max = v[i];
	}
	for (i = 0; i < n; i++)
	{
		if (v[i] == min) printf("Minimul se afla pe pozitia %d\n",i);
		if (v[i] == max) printf("Maximul se afla pe pozitia %d", i);
	}
}

int main()
{
	int n, v[10],i;
	printf("Numarul de elemente:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[%d]= ",i);
		scanf("%d", &v[i]);
	}
	min_max(v, n);
	return 0;
}
