#include<stdio.h>

int main()
{
    int nr,nr1=0;
    printf("Nr: ");
    scanf("%d",&nr);
    while((nr|0)!=0)
    {
    if((nr&1)==1)
    nr1=nr1+1;
    nr=nr>>1;
    }
    if(nr1>1) 
    printf("Nu e putere ");
    else
    printf("E putere ");
    return 0;
}