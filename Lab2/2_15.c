#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void citire(int m, int n, int a[][10])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]= ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}


void rotatie(int m, int n, int a[][10])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = m - 1; j >= 0; j--)
        {
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }
}
int main()
{
    int a[10][10], n,m;
    printf("Dati nr de linii si coloane/ m,n \n");
    scanf("%d%d", &m, &n);
    citire(m, n, a);
    printf("Matricea dupa rotatia de 90 de grade \n");
    rotatie(m, n, a);
    return 0;

}
