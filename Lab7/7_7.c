#include<stdio.h>
#include<stdlib.h>

void citire(int N)
{
    int i;
    int *v;
    if((v=(int*)malloc(N*sizeof(int)))==NULL)
    {
    printf("Eroare alocare de memorie!\n");
    exit(EXIT_FAILURE);
    }
    for(i=0;i<N;i++)
    {
        printf("Nr: ");
        scanf("%d",v+i);
    }
}

void afisare(int N)
{
    int i,*v;
    for(i=N-1;i>=0;i--)
    printf("%d ",*(v+i));
    printf("\n");
    free(v);
}

int main()
{
    int N,*v;
    printf("Nr elemente: ");
    scanf("%d",&N);
    citire(N);
    afisare(N);
    return 0;
}