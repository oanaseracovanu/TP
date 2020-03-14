#include<stdio.h>
#include<stdlib.h>

int suma(int n)
{
	int s = 0;
	while (n != 0)
	{
		s = s + n % 10;
		n = n / 10;
	}
	return s;
}

int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("Suma cifrelor numarului este= %d", suma(n));
	return 0;
}
