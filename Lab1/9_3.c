#include<stdio.h>
#include<stdlib.h>
void crescator(int *a, int *b)
{
	int aux;
	if(a<b)
    {
		aux = *a;
		*a = *b;
		*b = aux;
    }
}
int main()
{
	int a,b;
	printf("a,b=\n");
	scanf("%d%d", &a, &b);
	crescator(&a,&b);
	printf("%d %d", a, b);
	return(0);
}
