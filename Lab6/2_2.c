#include<stdio.h>
#include<stdlib.h>

typedef enum {mamifer,insecta,peste,pasare} tip;
typedef enum {dulce,sarata} apa;
typedef struct animal
{
    int durata_viata;
    char nume[30];
    tip t;
    union 
    {
        struct 
        {
            int gestatie, pui;
        }mamifer;

        struct 
        {   
            int picioare;
            char zboara, periculoasa;
        }insecta;

        struct 
        {
            apa a;
            int adancime, viteza_inot;
        }peste;
        
        struct 
        {
            int anvergura, altitudine, viteza_zbor;
        }pasare;
        
    }vietate;
    
}A;

void citire(A *a, int *n)
{
    (*n)++;
    printf("Numele vietatii: ");
    scanf("%s", (a+*n)->nume);
    printf("Durata de viata: ");
    scanf("%d",&(a+*n)->durata_viata);
    printf("Tipul vietuitoarei: 0-mamifer, 1-insecta, 2-peste, 3-pasare ");
    scanf("%d",&(a+*n)->t);
    switch((a+*n)->t)
    {
        case 0:
        printf("Perioada de gestatie: ");
        scanf("%d",&(a+*n)->vietate.mamifer.gestatie);
        printf("Numarul de pui: ");
        scanf("%d",&(a+*n)->vietate.mamifer.pui);
        break;
        case 1:
        printf("Numarul de picioare: ");
        scanf("%d",&(a+*n)->vietate.insecta.picioare);
        printf("Zboara: ");
        scanf("%hhd",&(a+*n)->vietate.insecta.zboara);
        printf("Periculos pentru om: ");
        scanf("%hhd",&(a+*n)->vietate.insecta.periculoasa);
        break;
        case 2:
        printf("Tipul de apa in care se gaseste 0-dulce 1-sarata ");
        scanf("%d",&(a+*n)->vietate.peste.a);
        printf("Adancimea maxima la care poate fi vazut: ");
        scanf("%d",&(a+*n)->vietate.peste.adancime);
        printf("Viteza cu care inoata: ");
        scanf("%d",&(a+*n)->vietate.peste.viteza_inot);
        break;
        case 3:
        printf("Anvergura aripilor: ");
        scanf("%d",&(a+*n)->vietate.pasare.anvergura);
        printf("Altitudinea maxima de zbor: ");
        scanf("%d",&(a+*n)->vietate.pasare.altitudine);
        printf("Viteza cu care zboara: ");
        scanf("%d",&(a+*n)->vietate.pasare.viteza_zbor);
        break;
        default:
        printf("Gresit\n");
        break;
    }
}

void afisare(A *a, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    {
    printf("Numele vietatii: %s\n", (a+i)->nume);
    printf("Durata de viata: %d\n", (a+i)->durata_viata);
    if((a+i)->t==0)
    {   
        printf("Mamifer\n");
        printf("Perioada de gestatie: %d\n Numarul de pui: %d\n", 
        (a+i)->vietate.mamifer.gestatie, (a+i)->vietate.mamifer.pui);
    }
    if((a+i)->t==1) 
    {
        printf("Insecta\n");
        printf("Numarul de picioare: %d\n", (a+i)->vietate.insecta.picioare);
        if((a+i)->vietate.insecta.zboara==0) printf("Insecta nu zboara\n");
        else
        printf("Insecta poate zbura\n");
        if((a+i)->vietate.insecta.periculoasa==0) printf("Insecta nu este periculoasa pentru om\n");
        else
        printf("Insecta este periculoasa pentru om\n");
        
        
    }
    if((a+i)->t==2)
    {
        printf("Peste\n");
        printf("Tipul de apa in care se gaseste 0-dulce 1-sarata %d\n, Adancimea maxima la care poate fi vazut: %d\n, Viteza cu care inoata: %d\n", 
        (a+i)->vietate.peste.a,(a+i)->vietate.peste.adancime,(a+i)->vietate.peste.viteza_inot);
    }
    if((a+i)->t==3)
    {
        printf("Pasare\n");
        printf("Anvergura aripilor: %d\n Altitudinea maxima de zbor: %d\n Viteza cu care zboara: %d\n",
        (a+i)->vietate.pasare.anvergura,(a+i)->vietate.pasare.altitudine, (a+*n)->vietate.pasare.viteza_zbor);
    }
    }

}

int main()
{
    A a[30];
    int n=-1, opt;
    do
    {
        printf("1.Adaugare\n");
        printf("2.Afisare\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra este: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            citire(a,&n);
            break;
            case 2:
            afisare(a,&n);
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