#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[14],n=7,i,aux[7],aux2[14],j;

    for(i=0;i<n;i++)
    {
        printf("v[%d]: ",i);
        scanf("%d",v+i);
    }

    for(i=0;i<n;i++)
    *(aux+i)=*(v+i);

    for(i=0;i<n;i++)
    *(aux2+i)=-(*(aux+i));

    j=0;
    for(i=0;i<2*n;i=i+2)
    {
    *(v+i)=*(aux2+j);
    *(v+i+1)=*(aux+j);
        j++;
    }

    for(i=0;i<2*n;i++)
    printf("%d ",*(v+i));
    printf("\n");

    return 0;
}
