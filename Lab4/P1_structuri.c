#include<stdio.h>
#include<stdlib.h>

typedef struct produs
{
    char nume[10];
    float pret;
}P;

void citire(P *p, int *n)
{
    (*n)++;
    printf("Denumire produs: ");
    scanf("%s",(p+*n)->nume);
    printf("Pretul produsului: ");
    scanf("%f",&(p+*n)->pret);
}

void afisare(P *p, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Denumire: %s\nPret: %f\n",(p+i)->nume,(p+i)->pret);
}

int main()
{
    P p[20];
    int n=-1,opt;
    do
    {
        printf("1.Adaugare produs\n");
        printf("2.Afisare\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            citire(p,&n);
            break;
            case 2:
            afisare(p,&n);
            break;
            case 0:
            exit(0);
            break;
            default:
            printf("Optiunea nu exista!\n");
            break;
        }
    }while(1);
    return 0;
}