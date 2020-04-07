#include <stdio.h>

int main()
{
    int nr;
    printf("Nr: ");
    scanf("%d", &nr);
    if((nr&1)==1) 
    printf("Numar impar ");
    else
    printf("Numar par ");
    return 0;
}