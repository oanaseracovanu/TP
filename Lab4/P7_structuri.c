#include <stdio.h>
#include <stdlib.h>

typedef struct factori
{
    int valoarea,puterea;

}F;

int prim(int nr) 
{
    int i;
    for (i = 2; i <= nr / 2 ; i++) 
    {
        if (nr % i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int descompunere(F * f, int nr, int * n) 
{
    int i,
    k = 0;
    for (i = 2; i <= nr / 2; i++) 
    {
        if (nr % i == 0) 
        {
            if (prim(i)==1) f[(* n)++].valoarea = i;
        }
    }

    return ( * n);
}

void afisare(F * f, int n) 
{
    printf("%d\n",f[n].valoarea);
}

int main() 
{

    int nr, n=0,i;
    F f[10];
    printf("Dati nr ");
    scanf("%d", & nr);

    if (descompunere(f, nr, & n)) 
    {
        printf("Divizorii primi sunt: \n");
        for (i = 0; i < n; i++) 
        {
            afisare(f, i);
        }
    } else 
    {
        printf("%d e numar prim", nr);
    }
    return 0;
}
