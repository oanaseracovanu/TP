#include<stdio.h>
#include<stdlib.h>

int pare(int n)
{
	int nr = 0;
	while (n != 0)
	{
		if (n % 10 % 2 == 0) nr = nr + 1;
		n = n / 10;
	}
	return nr;
}

int main()
{
	int n;
	printf("n="); scanf("%d", &n);
	printf("Numarul are %d cifre pare", pare(n));
	return 0;
}
