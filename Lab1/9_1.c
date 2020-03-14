#include <stdio.h>
#include <stdlib.h>

void orizontala(int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("*");
	printf("\n");
}

void verticala(int n)
{
	int i, v;
	for (v = 0; v < (n - 3) / 2; v++)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				printf("*");
			else
			{
				if (i == n - 1)
					printf("*\n");
				else
				printf(" ");
			}
		}
	}
}

int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	orizontala(n);
	verticala(n);
	orizontala(n);
	verticala(n);
	orizontala(n);
	return 0;
}
