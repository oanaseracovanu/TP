#include<stdio.h>
#include<stdlib.h>

int euclid(int a, int b)
{
	if(b==0)
	return a;
	return euclid(b, a % b);
}

int main()
{
	int a, b;
	printf("a,b=\n");
	scanf("%d%d", &a, &b);
	printf("%d", euclid(a, b));
	return 0;
}
