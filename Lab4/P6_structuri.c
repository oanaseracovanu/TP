#include<stdio.h>
#include<stdlib.h>

typedef struct meteo 
{
    int ora;
    float temp;
}M;

void citire(M *m, int *n)
{
    (*n)++;
    printf("Ora: ");
    scanf("%d",&(m+*n)->ora);
    printf("Temperatura de la acea ora: ");
    scanf("%g",&(m+*n)->temp);
}

void afisare(M *m, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Ora: %d\n Temperatura: %f\n", (m+i)->ora, (m+i)->temp);
}

float medie(M *m, int *n)
{
    int inceput,sfarsit,i,k=0;
    float medie=0;
    printf("Ora de inceput:");
    scanf("%d",&inceput);
    printf("Ora de sfarsit");
    scanf("%d",&sfarsit);
    for(i=0;i<=*n;i++)
    if((m+i)->ora>=inceput&&(m+i)->ora<=sfarsit) 
    {   k++;
        medie=medie+(m+i)->temp;
    }
    return medie/k; 
}

int main()
{
    M m[10];
    int n=-1, opt,nr,i;
    printf("Cate temperaturi doriti sa introduceti?");
    scanf("%d",&nr);
    do
    {
        printf("0.Iesire\n");
        printf("1.Adaugare\n");
        printf("2.Afisare\n");
        printf("3.Media temperaturilor dintr-un anumit interval\n");
        printf("Optiunea dumneavoastra este: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            for(i=1;i<=nr;i++)
            citire(m,&n);
            break;
            case 2:
            afisare(m,&n);
            break;
            case 3:
            printf("Media temperaturilor din acel interval este: %f",medie(m,&n));
            break;
            case 0:
            exit(0);
            break;
            default:
            printf("Optiunea nu exista!");
            break;
        }
    } while (1);
    return 0;
}