
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nr,bit;
    printf("Nr: ");
    scanf("%d", &nr);
    for(int poz=15; poz>=0; poz--)
    printf("%d",((nr >> poz)&1));
    printf("Bitul pe care doriti sa il schimbati: ");
    scanf("%d", &bit);
    nr= nr|(1<<bit);
    for (int poz=15; poz>=0; poz--)
    printf("%d",((nr>>poz)&1));
    return 0;
}