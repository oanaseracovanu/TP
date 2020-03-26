#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum{scazuta,medie,mare} pericol;
typedef enum{da,nu} reteta;
pericol p;
reteta r;

typedef struct medicament
{
    unsigned char varsta: 5;
}M;

void citire(M *m, int *n)
{
    unsigned char v;
    (*n)++;
    printf("Grad de periculozitate: 0-scazuta 1- medie 2-mare ");
    scanf("%d",&p);
    printf("Se elibereaza doar pe reteta? 0-nu 1- da ");
    scanf("%d",&r);
    printf("Varsta minima de administrare: ");
    scanf("%hhu",&v);
    (m+*n)->varsta=v;
}

void afisare(M *m, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    {
        switch(p)
        {
            case 0: 
            printf("Medicamentul are periculozitate scazuta\n");
            break;
            case 1:
            printf("Medicamentul are periculozitate medie\n");
            break;
            case 2:
            printf("Medicamentul are periculozitate mare\n");
            break;
        }
        if(r==0) printf("Medicamentul se elibereaza si fara reteta\n");
        else
        printf("Medicamentul se elibereaza doar pe baza de reteta\n");
        printf("Varsta minima de administrare: %hhu\n",(m+i)->varsta);
    }
    printf("\n");
}

int main()
{
M z;
printf("Spatiul ocupat: %lu\n",sizeof(z));
M m[20];
int n=-1, opt;
do
{
    printf("1.Adaugare medicament\n");
    printf("2.Afisare medicamente\n");
    printf("0.Iesire\n");
    printf("Optiunea dumneavoastra este: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        citire(m,&n);
        break;
        case 2:
        afisare(m,&n);
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