//matrice alocata dinamic
//sa se verifice daca o linie/coloana anume e crescatoare
//sa se afiseze liniile crescatoare si coloanele descrescatoare

#include<stdio.h>
#include<stdlib.h>

int **a;

void citire(int n)
{
    int i,j;
    a=(int**)malloc(n*sizeof(int*));
    if(a==NULL)
    {
        printf("Nu se pot aloca dinamic liniie!\n");
        free(a);
        exit(1);
    }
    for(i=0;i<n;i++)
    {
    a[i]=(int*)malloc(n*sizeof(int));
    if(a[i]==NULL)
    {
        printf("Nu se pot aloca dinamic coloanele!\n");
        free(a);
        exit(1);
    }
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        printf("a[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);
    }
}

void afisare(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
}

int linie_crescatoare(int n, int l)
{
    int j;
    for(j=1;j<n;j++)
    {
        if(a[l][j]<a[l][j-1]) return 0;
    }
    return 1;
           
}

int coloana_crescatoare(int n, int c)
{
    int i;
    for(i=1;i<n;i++)
    if(a[i][c]<a[i-1][c]) return 0;
    return 1;
}

void afisare_ordine(int n)
{
    int i,j;
    printf("Elementele de pe liniile ordonate crescator: \n");
    for(i=0;i<n;i++)
    {
        if(linie_crescatoare(n,i)==1)
        {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
        }
    }
    printf("\n");

    printf("Elementele de pe coloanele ordonate descrescator: \n");
    for(j=0;j<n;j++)
    {
        if(coloana_crescatoare(n,j)==0)
        {
        for(i=0;i<n;i++)
        printf("%d ",a[i][j]);
        printf("\n");
        }
    }
}

int main()
{
    int n,opt,l,c;
    printf("Nr de linii si coloane: ");
    scanf("%d",&n);
    do
    {
        printf("1.Citire\n");
        printf("2.Afisare\n");
        printf("3.Linie crescatoare?\n");
        printf("4.Coloana crescatoare?\n");
        printf("5.Linii ordonate crescator si coloane ordonate descrescator\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 0:
            exit(0);
            break;
            case 1:
            citire(n);
            break;
            case 2:
            afisare(n);
            break;
            case 3:
            printf("Linia pe care doriti sa o verificati: ");
            scanf("%d",&l);
            if(linie_crescatoare(n,l)==1) printf("\nLinia este crescatoare\n");
            else
            printf("\nLinia nu este crescatoare\n");
            break;
            case 4:
            printf("Coloana pe care doriti sa o verificati: ");
            scanf("%d",&c);
            if(coloana_crescatoare(n,c)==1) printf("\nColoana este crescatoare\n");
            else
            printf("\nColoana nu este crescatoare\n");
            break;
            case 5:
            afisare_ordine(n);
            break;
            default:
            printf("Optiune invalida!\n");
            break;
        }
    } while (1);
    
    return 0;
}