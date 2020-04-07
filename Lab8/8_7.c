#include <stdio.h>

int main()
{
    int nr, nr1, nr2;
    printf("Primul numar: ");
    scanf("%d", &nr1);
    printf("Al doilea numar: ");
    scanf("%d", &nr2);
    nr = nr1 * 256 + nr2;
    for (int i = 15; i >= 0; i--)
    {
        if (i == 7)
        printf(" ");
        printf("%d", (nr >> i) & 1);
    }
    return 0;
}