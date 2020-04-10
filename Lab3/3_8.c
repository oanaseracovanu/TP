#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[]={7, -5, 4, 3, -9, 2, -8},n=7,i;
    printf ("Vectorul cu negativul inaintea fiecarui element original: \n");
    for(i=0;i<n;i++)
    {
        if(*(v+i)>=0)
        printf("-%d %d ",v[i],v[i]);
       else
        {
        *(v+i)=sqrt(*(v+i)**(v+i));
        printf("%d -%d ",*(v+i),*(v+i));
        }
    }
}
