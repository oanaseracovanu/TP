#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct produs
{
    char nume[30];
    float pret;
}P;


void citire(P *p, int *n)
{
    (*n)++;
    printf("Dati numele produsului\n");
    scanf("%s",(p+*n)->nume);
    printf("Dati pretul produsului\n");
    scanf("%f",&(p+*n)->pret);
}

void afisare(P *p, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Nume: %s Pret: %f \n", (p+i)->nume, (p+i)->pret);

}

float cautare(P *p, int *n,char nume[])
{
    int i;
    for(i=0;i<=*n;i++)
    { 
    getchar();
    if(strcmp((p+i)->nume,nume)==0)
    return (p+i)->pret; 
    }
}

void eliminare(P *p, int *n, char denumire[])
{
    int i,j,k=0;
    for(i=0;i<=(*n-k);i++)
        if(strcmp((p+i)->nume,denumire)==0)
        {
            k++;
            for(j=i;j<=(*n-k);j++)
                *(p+j)=*(p+j+1);
                i--;
        }
        *n=*n-k;
}

void ordonare_descrescatoare(P *p, int *n)
{
    P aux;
    int i,k;
    do
    {
        k=1;
       for(i=1;i<=*n;i++)
       if((p+i)->pret>(p+i-1)->pret)
       {
           aux=*(p+i-1);
           *(p+i-1)=*(p+i);
           *(p+i)=aux;
           k=0;
       }

    } while (!k);
}

int main()
{
    P p[20];
    int opt,n=-1;
    char denumire[20];
    do
    {
        printf("0.Iesire\n");
        printf("1.Introducere\n");
        printf("2.Afisare\n");
        printf("3.Cautare dupa nume\n");
        printf("4.Eliminare produse\n");
        printf("5.Ordonare descrescatoare dupa pret\n");
        printf("Optiunea dumneavoastra este:\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                citire(p,&n);
                break;
            case 2:
                afisare(p,&n);
                break;
            case 3: 
                printf("Produsul pe care doriti sa il cautati:\n");
                scanf("%s",denumire);
                    if(cautare(p,&n,denumire)!=0) 
                        printf("%f ",cautare(p,&n,denumire));
                    else
                        printf("Produsul nu exista!\n");
            break;
            case 4:
                eliminare(p,&n,denumire);
                afisare(p,&n);
            break;
            case 5:
                ordonare_descrescatoare(p,&n);
                afisare(p,&n);
            break;
            case 0:
                exit(0);
            break;
            default:
                printf("Optiunea nu exista!\n");
            break;
        }
    } while (1);
    return 0;
}