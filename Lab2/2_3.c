#include<stdio.h>

void creeaza(int m, int n, int a[][10])
{
    int i,j;
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    {
        if(i>j) a[i][j]=i;
        else
        a[i][j]=j;
    }
}

void afisare(int m, int n, int a[][10])
{
    int i,j;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    printf("%d ",a[i][j]);
    printf("\n");
    }
}

int main()
{
    int m,n,a[10][10];
    printf("Nr linii: ");
    scanf("%d",&m);
    printf("Nr coloane: ");
    scanf("%d",&n);
    creeaza(m,n,a);
    afisare(m,n,a);
    return 0;
}