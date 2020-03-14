#include<stdio.h>
#include<stdlib.h>

int P(int n)
{
	if (n == 0) return 0;
	if (n % 2 == 0) return P(n / 10) + 1;
	return P(n / 10);
}

int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("Numarul are %d cifre pare", P(n));
	return(0);
}
