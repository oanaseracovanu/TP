#include <stdio.h>
#include <stdlib.h>


void citire_vector(float v[], int n)
{
    int i;
    printf("\nVectorul are elementele: \n");
    for(i=0;i<n;i++)
    {
        printf("v[%d]: ",i);
        scanf("%f",&v[i]);
    }
}

void afisare_vector(float v[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%f ",v[i]);
    printf("\n");
}

void citire_matrice(int n, int m,float a[][10])
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
        {
            printf("Valori pentru a[%d][%d]:", i, j);
            scanf("%f", &a[i][j]);
        }
}

void afisare_matrice(int n,int m,float a[][10])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        printf("%f ",a[i][j]);
        printf("\n");
    }
}
void cautare_elem_comune(int n, int m, int k,float v[], float a[][10])
{
    int i,j,p=0,ok;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            ok=1;
            if(v[p]==a[i][j]) {
            p++;
            ok=1;
            }
            else
            {
                ok=0;
                p=0;
            }
            
            if(p==k) {printf("am gasit vector pe linia %d",i); break;}

        }

    }
    if(p!=k && ok==0) printf("Nu exista elemente comune\n");
}

int main()
{
    float v[10], a[10][10];
    int n,m,k;
    printf("Dimensiune vectori: ");
    scanf("%d",&k);
    printf("Nr linii matrice: ");
    scanf("%d",&n);
    printf("Nr coloane matrice: ");
    scanf("%d",&m);
    citire_vector(v,k);
    citire_matrice(n,m,a);
    afisare_vector(v,k);
    afisare_matrice(n,m,a);
    cautare_elem_comune(n,m,k,v,a);
    return 0;
}
