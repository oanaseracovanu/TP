#include <stdio.h>
#include <stdlib.h>

int v[20];

int citire(int v[])
{
    int i=0, n;
    FILE *f;    
    if((f= fopen(argv[1], "rt"))==NULL)
    {
        printf("Fisierul nu poate fi deschis\n");
        exit(EXIT_FAILURE);
    }
    fscanf(f, "%d", &n);
    while(fscanf(f, "%d", &v[i]) != EOF) i++;
    fclose(f);
    return n;
}

void cerinta(int *v, int n)
{
    char nume_iesire[20];
    int div,i,x,prim;
    printf("Numele fisierului de iesire este: ");
    scanf("%s", nume_iesire);
    FILE *f;
    if((f=fopen(nume_iesire, "wt"))==NULL)
    {
        printf("Fisierul nu poate fi deschis\n");
        exit(EXIT_FAILURE);
    }
    for (i = 0; i < n; i++)
    {
        prim=1;
        div=2;
        while(div<v[i] && prim == 1)
        {
            if (v[i]%div==0)  prim=0;
            else 
            div++;
        }
        if (prim==1)
        {
            x=v[i];
            while(x>9)   x=x/10;
            if(x%2!=0) 
            fprintf(f, "%d\n", v[i]);
        }
    }
    fclose(f);
}

int main(int argc, char *argv[])
{
    int n;
    n = citire(v);
    cerinta(v,n);
    return 0;
}
