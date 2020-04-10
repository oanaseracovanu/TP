#include<stdio.h>

void citire(int v[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("v[%d]: ",i);
        scanf("%d",&v[i]);
    }
}

void afisare(int v[], int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",v[i]);
    printf("\n");
}

void sortare(int v[], int n)
{
    int i,k,j,aux;
    do
    {
        k=0;
        for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(v[i]%2!=0&&v[j]%2!=0)
                if(v[i]<v[j])
                {
                    aux=v[j];
                    v[j]=v[i];
                    v[i]=aux;
                }
        }
        k=1;
    } while (!k);
}

int main()
{
    int n,v[10];
    printf("Numarul de elemente: ");
    scanf("%d",&n);
    citire(v,n);
    afisare(v,n);
    sortare(v,n);
    afisare(v,n);
    return 0;
}