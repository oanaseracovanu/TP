#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void maxim(int a, int b)
{
    int* p;
    if (a > b) p = &a;
    else
        p = &b;
    printf("Maximul dintre cele 2 numere este: %d ", *p);
}

int main()
{
    int a, b;
    printf("a= ");
    scanf("%d", &a);
    printf("b= ");
    scanf("%d", &b);
    maxim(a, b);
    return 0;
}
