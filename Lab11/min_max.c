#include <stdio.h>
#define N 10
int x[] = { 10, 5, 23, -11, 4, 2, 0, -6, 66, 40 };
int comp = 0;

void minmax(int st, int dr, int *min, int *max)
{
    int mijloc, min_st, max_st, min_dr, max_dr;
     printf("Caut in secventa [%d..%d].\n", st, dr);
    if (st == dr) 
    {
        *min = x[st];
        *max = x[st];
    }

    else if (st == dr - 1) 
    {
        comp++;
        if (x[st] < x[dr]) 
        {
            *min = x[st];
            *max = x[dr];
        } 
        else 
        {
            *min = x[dr];
            *max = x[st];
        }
    }

    else
     { 
        mijloc = (st + dr) / 2;
        minmax(st, mijloc, &min_st, &max_st);
        minmax(mijloc + 1, dr, &min_dr, &max_dr);
        comp++;
        if (min_st < min_dr)
            *min = min_st;
        else
            *min = min_dr;
        comp++;
        if (max_st > max_dr)
            *max = max_st;
        else
            *max = max_dr;
    }
}
 int main(void){
    int min, max,i;
    printf("Avem %d numere.\n", N);
    for (i = 0; i < N; i++)
    printf("%d ", x[i]);
    printf("\n\n");
    minmax(0, N - 1, &min, &max); 
    printf("\n");
    printf("Minimul este %d.\n", min);
    printf("Maximul este %d.\n", max);
    printf("Comparatii facute: %d.\n", comp);
    return 0;
}
