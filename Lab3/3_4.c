#include<stdio.h>

void afisare(int v[], int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",*(v+i));
    printf("\n");
}

void negative(int v[],int n)
{
	int i,nr=0;
    for(i=0;i<n;i++)
    if(*(v+i)<0) nr=nr+1;
	printf("In vector sunt %d numere negative\n", nr);
}

int main()
{
	int v[]={7,-5,4,3,-9,2,8},n=7;
	afisare(v,n);
	negative(v,n);
	return 0;
}
