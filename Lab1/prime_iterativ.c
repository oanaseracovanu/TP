#include<stdio.h>
#include<stdlib.h>

int test_prim(int x)
{
	int i, prim;
	prim = 1;
	if (x > 2)
	{
		if (x % 2 == 0)
			prim = 0;
		else
		{
			for (i = 3; (i <= sqrt(x)) && (prim == 1); i = i + 2)
				if (x % i == 0)
					prim = 0;
		}
	}
	return prim;
}

int main()
{
	int x, j, n, nr = 0, k;
	printf("Dati numarul de elemente:\n");
	scanf("%d", &n);
	for (j = 1; j <= n; j++)
	{
		printf("Dati numarul:\n");
		scanf("%d", &x);
		k = test_prim(x);
		if (k == 1)
			nr++;
	}
	printf("Din numerele citite, %d sunt prime.", nr);
}
