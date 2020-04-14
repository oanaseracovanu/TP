#include<stdio.h>

int main()
{
    int v[10],*end,*p,nr=0;
    end=v;

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
    if(*p<0) nr++;
    printf("In vector sunt %d numere negative \n",nr);

    return 0;
}