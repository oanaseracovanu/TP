#include<stdio.h>

int main()
{
    int nr;
    printf("Nr: ");
    scanf("%d", &nr);
    printf("%d ", (1 << nr));
    return 0;
}