//sa se defineasca structura,sa se calculeze volumul fiecarei figuri geometrice
//sa se afiseze informatiile in ordinea crescatoare a volumelor
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef enum {S,C} figura;
typedef struct 
{
    figura fig;
    int raza_sfera,raza_con,inaltime;
    float volum;
}F;

void citire(F *f,int *n)
{
    (*n)++;
    printf("Tipul figurii: 0-Sfera, 1-Con ");
    scanf("%d",&(f+*n)->fig);
    if((f+*n)->fig==0)
    {
    printf("Raza sferei: ");
    scanf("%d",&(f+*n)->raza_sfera);
    (f+*n)->volum=(4*3.14*pow((f+*n)->raza_sfera,3)/3);
    }
    if((f+*n)->fig==1)
    {
    printf("Raza conului: ");
    scanf("%d",&(f+*n)->raza_con);
    printf("Inaltimea conului: ");
    scanf("%d",&(f+*n)->inaltime);
    (f+*n)->volum=(3.14*pow((f+*n)->raza_con,2)*(f+*n)->inaltime)/3;    
    }
}

void afisare(F *f, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    {
    printf("%d\n",(f+i)->fig);
    if((f+i)->fig==0)
    {
        printf("R: %d\nV: %f\n",(f+i)->raza_sfera,(f+i)->volum);
    }
    if((f+i)->fig==1)
    {
        printf("R: %d\nH: %d\nV: %f\n",(f+i)->raza_con,(f+i)->inaltime,(f+i)->volum);
    }
    }
}

void sortare(F *f, int *n)
{
    int i,k;
    F aux;
    do
    {
        k=1;
        for(i=1;i<=*n;i++)
        {
            if((f+i)->volum<(f+i-1)->volum)
            {
                aux=*(f+i-1);
                *(f+i-1)=*(f+i);
                *(f+i)=aux;
                k=0;
            }
        }

    } while (!k);
    
}

int main()
{
    int n=-1,opt;
    F f[20];
    do
    {
        printf("1.Citire\n");
        printf("2.Afisare\n");
        printf("3.Ordonare dupa volum\n");
        printf("0.Iesire\n");
        printf("Optiunea dvs: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 0:
            exit(0);
            break;
            case 1:
            citire(f,&n);
            break;
            case 2:
            afisare(f,&n);
            break;
            case 3:
            sortare(f,&n);
            afisare(f,&n);
            break;
            default:
            printf("Optiune invalida!\n");
            break;
        }

    } while (1);

    return 0;
    
}