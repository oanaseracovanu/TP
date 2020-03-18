#include<stdio.h>
typedef struct exemplu
{
	long int a;
	char* b;
	char* c;
}E;

int main()
{
	E x;
	printf("Spatiul ocupat de o variabila la structura: %d\n",sizeof(x));
	x.a=10;
	x.b="ABCD";
	x.c="EFG";
	printf("%ld\n",x.a);
	printf("%s\n",x.b);
	printf("%s\n",x.c);
    return 0;
}
