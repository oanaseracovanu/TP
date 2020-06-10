#include<stdio.h>
#include<stdlib.h>

int **a;
#define nr_linii 3
#define nr_coloane 3

void alocare_matrice()
{
    int i,j;
    a=(int**)malloc(nr_linii*sizeof(int*));
    if(a==NULL)
    {
        printf("Eroare alocare memorie\n");
        free(a);
        exit(1);
    }
    for(i=0;i<nr_linii;i++)
    {
    a[i]=(int*)malloc(nr_coloane*sizeof(int));
    if(a[i]==NULL)
    {
        printf("Eroare alocare memorie\n");
        exit(1);
    }
    }
    for(i=0;i<nr_linii;i++)
    for(j=0;j<nr_coloane;j++)
    {
        printf("a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}

void afisare()
{
    int i,j;
    for(i=0;i<nr_linii;i++)
    {
        for(j=0;j<nr_coloane;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
}

int main()
{
    alocare_matrice();
    afisare();
    return 0;
}