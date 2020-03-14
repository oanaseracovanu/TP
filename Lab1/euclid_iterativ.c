#include<stdio.h>
#include<stdlib.h>

int euclid(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	int a, b;
	printf("a,b=\n");
	scanf("%d%d", &a, &b);
	printf("%d", euclid(a, b));
	return 0;
}
