#include<stdlib.h>
#include<stdio.h>
void citire(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("v[%d]=", i);
        scanf("%d", &v[i]);
    }
}

int egal(int v1[], int v2[], int n)
{
    int i, k = 0;
    for (i = 0; i < n; i++)
    {
        if (v1[i] != v2[i]) k = k + 1;
    }
   if(k==0)  return 1;
    return 0;
}
int main()
{

    int v1[5], v2[5], n;
    printf("n=");
    scanf("%d", &n);
    citire(v1, n);
    citire(v2, n);
    if(egal(v1, v2, n)==1) printf("Elementele sunt egale");
    else
        printf("Elementele nu sunt egale");
    return 0;
}
