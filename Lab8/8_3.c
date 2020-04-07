#include<stdio.h>

int main()
{
    int nr;
    printf("Nr: ") ;
    scanf("%d", &nr);
    printf("Catul este: %d\n",(nr >> 3));
    printf("Restul este: %d ", (nr & 7));
    return 0;
}