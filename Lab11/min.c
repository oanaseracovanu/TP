#include <stdio.h>
#define N 10
int x[] = { 10, 5, 23, -11, 4, 2, 0, -6, 66, 40 };
int comp = 0;

void minim(int st, int dr, int *min)
{
    int mijloc, min_st, max_st, min_dr;
     printf("Caut in secventa [%d..%d].\n", st, dr);
    if (st == dr) 
        *min = x[st];

    else if (st == dr - 1) 
    {
        comp++;
        if (x[st] < x[dr]) 
            *min = x[st];
        else 
            *min = x[dr];
    }

    else
     { 
        mijloc = (st + dr) / 2;
        minim(st, mijloc, &min_st);
        minim(mijloc + 1, dr, &min_dr);
        comp++;
        if (min_st < min_dr)
            *min = min_st;
        else
            *min = min_dr;
    }
}
 int main(void)
 {
    int min,i;
    printf("Avem %d numere.\n", N);
    for (i = 0; i < N; i++)
    printf("%d ", x[i]);
    printf("\n\n");
    minim(0, N - 1, &min); 
    printf("\n");
    printf("Minimul este %d.\n", min);
    printf("Comparatii facute: %d.\n", comp);
    return 0;
}
