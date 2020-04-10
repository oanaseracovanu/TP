#include<stdio.h>

void creeaza(int n, int a[][10])
{
    int i,j,k=1;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        a[i][j]=k*k;
        k=k+1;
    }
    
}

void afisare(int n, int a[][10])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%5.d ",a[i][j]);
        printf("\n");
    }
}

int main()
{
    int a[10][10],n;
    printf("Nr de linii si coloane: ");
    scanf("%d",&n);
    creeaza(n,a);
    afisare(n,a);
    return 0;
}