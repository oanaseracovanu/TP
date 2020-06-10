#include<stdio.h>
#include<stdlib.h>


int alocare_vector()
{
    int *v=NULL,*v2,n=0,k;
    for(;;)
    {
        printf("Introduceti cifra: ");
        scanf("%d",&k);
        if(!k) break;
        n++;
        v2=(int*)realloc(v,n*(sizeof(int)));
        if(v2==NULL)
        {
            printf("Nu se poate aloca memorie!\n");
            free(v);
            exit(1);
        }
        v=v2;
        v[n-1]=k;
    }
    return n;
}

void afisare_vector(int n)
{
    int i,*v;
    for(i=0;i<n;i++)
    printf("%d ",*(v+i));
    printf("\n");
}

int main()
{
    int *n;
    *n=alocare_vector();
    afisare_vector(*n);
    return 0;
}