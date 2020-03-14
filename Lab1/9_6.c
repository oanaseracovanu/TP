#include<stdio.h>
#include<stdlib.h>

int cmmdc(int a, int b)
{
		if(a==b)
		return a;
		if(a>b)
		return cmmdc(a - b, b);
		if(a<b)
		return cmmdc(a, b - a);
}

int main()
{
	int a, b;
	printf("a,b=\n");
	scanf("%d%d", &a, &b);
	printf("%d", cmmdc(a, b));
	return(0);
}
