#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produs
{
    char nume[28];
    float pret;
}produs;

produs produse[10];
int n;

void adaugare()
{
    produs p;
    printf("Nume: ");
    fgets(p.nume,20,stdin);
    printf("Pret: ");
    scanf("%f",&p.pret);
    produse[n]=p;
    n++;
}

void afisare()
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%s : %f \n",produse[i].nume,produse[i].pret);
    }
}

void scriere()
{
    FILE *f;
    if((f=fopen("produse.dat","wb"))==NULL)
    {
        printf("Fisierul nu poate fi deschis\n");
        exit(EXIT_FAILURE);
    }
    fwrite(produse,sizeof(produs),n,f);
    fclose(f);
}

int main()
{
    int opt;
    do
    {
        printf("1.Adaugare\n");
        printf("2.Afisare\n");
        printf("3.Scriere in fisier\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra: ");
        scanf("%d",&opt);
        getchar();
        switch(opt)
        {
            case 1:
            adaugare();
            break;
            case 2:
            afisare();
            break;
            case 3:
            scriere();
            break;
            case 0:
            exit(0);
            default:
            printf("Optiunea nu exista\n");
            }
    }while(1);
    return 0;
}
