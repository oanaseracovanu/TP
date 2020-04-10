#include<stdio.h>

void citire(int n, int a[][10])
{
    int i,j;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        printf("a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}

void afisare(int n, int a[][10])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}

void suma(int n, int a[][10])
{
    int i,j,s=0;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(i<j&&a[i][j]%2==0) s=s+a[i][j];
    printf("Suma elementelor pozitive de deasupra diagonalei principale: %d\n",s);
}

int main()
{
    int n,a[10][10];
    printf("Nr de linii si coloane: ");
    scanf("%d",&n);
    citire(n,a);
    afisare(n,a);
    suma(n,a);
    return 0;
}