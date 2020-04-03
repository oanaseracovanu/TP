#include<stdio.h>
#include<stdlib.h>

int *citire(int n)
{
    int i;
    int *v;
    if((v=(int*)malloc(n*sizeof(int)))==NULL)
    {
    printf("Eroare alocare de memorie!\n");
    exit(EXIT_FAILURE);
    }
    for(i=0;i<n;i++)
    {
        printf("v[%d]= ",i);
        scanf("%d",v+i);
    }
    return v;
}

void afisare(int n)
{
    int i,*v;
    for(i=0;i<n;i++)
    printf("%d ",*(v+i));
    printf("\n");
}
void elemente(int v1[], int v2[], int n, int m)
{
    int i,j;
    printf("Elemente din primul vector ce se regasesc in al doilea: ");
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
    if(*(v1+i)==*(v2+j)) printf("%d ",*(v1+i));
    printf("\n");
}

int main()
{
    int n,m,*v1,*v2;
    printf("Nr elemente: ");
    scanf("%d",&n);
    v1=citire(n);
    afisare(n);
    printf("Nr elemente: ");
    scanf("%d",&m);
    v2=citire(m);
    afisare(m);
    elemente(v1,v2,n,m);
    free(v1);
    free(v2);
    return 0;
}