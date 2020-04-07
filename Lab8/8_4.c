#include<stdio.h>

int main()
{
    int nr;
    printf("Nr: ");
    scanf("%d", &nr);
    for(int poz=15;poz>=0;poz--)
    printf("%d",((nr >> poz)&1));
    return 0;
}