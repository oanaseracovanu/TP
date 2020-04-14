#include<stdio.h>

int main()
{
    int v[10],*end=v,*p,*min=v;
    
    for(;;)
    {
        printf("v[%d]: ",*end);
        scanf("%d",end);
        if(*end==0) break;
        end++;
    }

    for(p=v;p<end;p++)
    printf("%d ",*p);
    printf("\n");

    for(p=v;p<end;p++)
    if(*p<*min) 
    min=p;
    printf("Valoarea minima din vector: %d\n",*min);

    return 0;
}