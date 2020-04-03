#include<stdio.h>
#include<stdlib.h>

int citire()
{
    int N=0;
    int *v=NULL;
    int *v2;                                        
    for(;;)
    {                                          
        int k;
        printf("Nr: ");
        scanf("%d",&k);
        if(!k)
        break;                             
        N++;
        if((v2=(int*)realloc(v,N*sizeof(int)))==NULL)
        {
            printf("memorie insuficienta\n");
            free(v);
            exit(EXIT_FAILURE);
        }
        v=v2;
        v[N-1]=k;                                  
    }
    return N;
}

void afisare(int N)
{
    int i,*v;
    for(i=N-1;i>=0;i--)
    printf("%d ",*(v+i));
    free(v);
}

int main()
{
    int *N;
    *N=citire();
    afisare(*N);
    return 0;
}