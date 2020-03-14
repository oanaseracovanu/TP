#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void citire(int n, int v[])
{
	if (n == 1)
	{
		printf("v[%d]= ", n);
		scanf("%d", &v[n]);
	}
	else
	{
		printf("v[%d]= ", n);
		scanf("%d", &v[n]);
		citire(n - 1,v);
	}
}

void afisare(int n, int v[])
{
	if (n == 1)
		printf("%d ", v[n]);
	else
	{
		printf("%d ", v[n]);
			afisare(n - 1,v);
	}
}

int pare(int n, int v[], int nr)
{

	if (n == 1)
	{
		if (v[n] % 2 == 0) nr = nr + 1;
	}
	else
		{
		if (v[n] % 2 == 0) nr = nr + 1;
		pare(n - 1, v,nr);
		}

}

int minim(int n)
{
	if (n <= 9) return n;
	else
	{
		int m = minim(n / 10);
		if (m < n % 10)
			return m;
		else
			return n % 10;
	}
}

int main()
{
	int n, v[10],nr=0,k,m,p[10],i,v1[10];
	printf("Dati dimensiunea vectorului");
	scanf("%d", &n);
	citire(n,v);
	afisare(n,v);
	printf("\n");
	printf("Vectorul are %d nr pare", pare(n, v,nr));
	printf("\n");
	for (i = 0; i <= n; i++)
	{
		k = 0;
		m = minim(v[i]);
		while (v[i])
		{
			if (v[i] % 10 == m) k++;
			v[i] = v[i] / 10;
		}
		p[i] = k;
	}
	afisare(n, p);
	printf("\n");
	return 0;
}
