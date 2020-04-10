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

int verificare(int n, int a[][10])
{
    int i,j,k=1;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
    if(i==j&&a[i][j]!=1) 
    k=0;
    if(i!=j&&a[i][j]!=0) 
    k=0;
    }
    return k;
}

int main()
{
    int a[10][10],n;
    printf("Nr de linii si coloane: ");
    scanf("%d",&n);
    citire(n,a);
    afisare(n,a);
    if(verificare(n,a)==1) printf("Matricea este matrice unitate\n");
    else
    printf("Matricea nu este matrice unitate\n");
    return 0;
}