#include<stdio.h>
#include<stdlib.h>

int S(int n)
{
	if(n==0)
	return 0;
	return S(n / 10) + n % 10;
}
int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	printf("Suma cifrelor numarului este= %d", S(n));
	return 0;
}
