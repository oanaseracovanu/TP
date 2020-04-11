#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],i,j,aux,val,n=0;
    while(1)
    {
        printf("Introduceti valoarea:");
        scanf("%d",&val);
     if(val==0)
        break;
     else
    {
        *(v+(n++))=val;
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
            if(*(v+i) > *(v+j))
              {
                  aux=*(v+i);
                *(v+i)=*(v+j);
                *(v+j)=aux;
              }
    printf("Vectorul ordonat crescator dupa ce am introdus valoarea\n");
        for(i=0;i<n;i++)
           printf("%d ",*(v+i));
           printf("\n");
       }
    }
    return 0;
}