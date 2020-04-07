#include<stdio.h>

int main()
{
    int nr;
    printf("dati nr ") ;
    scanf("%d", &nr);   
    if((nr&(nr-1))==0)
    printf("%d este putere a lui 2\n",nr);
    else
    printf("%d nu este putere a lui 2",nr);
    return 0;
}