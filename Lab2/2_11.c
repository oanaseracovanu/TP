#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void citire(int n, int a[][10])
{
    int i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", *(a + i) + j);

        }

}

void afisare(int n, int a[][10])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d", *(*(a + i) + j));

        printf("\n");
    }

}

void suma_linie(int n, int a[][10])
{
    int i, j, s1,v1[10],k;
    for (i = 0; i < n; i++)
    {
        s1 = 0;
        for (j = 0; j < n; j++)
        {
            s1 = s1 + *(*(a + i) + j);

        }
        *(v1 + i) = s1;
    }
    for (k = 0; k < n; k++)
    {
        printf("%d", *(v1 + k));
        printf(" ");

    }
    printf("\n");
}

void suma_coloane(int n, int a[][10])
{
    int i, j, s2,v2[10];
    for (i = 0; i < n; i++)
    {
        s2 = 0;
        for (j = 0; j < n; j++)
        {
            s2 = s2 + *(*(a + j) + i);
        }
        *(v2 + i) = s2;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d", *(v2 + k));
        printf(" ");

    }
}


int main()
{
    int a[20][20], n;
    printf("Dati numarul de linii si coloane");
    scanf("%d", &n);
    citire(n, a);
    afisare(n, a);
    suma_linie(n, a);
    suma_coloane(n, a);
    return 0;
}
