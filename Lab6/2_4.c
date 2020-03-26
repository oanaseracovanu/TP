#include<stdio.h>
#include<stdlib.h>

typedef struct animal
{
    unsigned int picioare:10;
    float greutate;
    char pericol;
    char abreviere[8];
    unsigned int varsta:11;

}A;

void citire(A *a, int *n)
{
    unsigned int v,p;
    (*n)++;
    printf("Abrevierea: ");
    scanf("%s",(a+*n)->abreviere);
    printf("Varsta: ");
    scanf("%u",&v);
    (a+*n)->varsta=v;
    printf("Greutatea: ");
    scanf("%f",&(a+*n)->greutate);
    printf("Numarul de picioare: ");
    scanf("%u",&p);
    (a+*n)->picioare=p;
    printf("Este periculos pentru om? ");
    scanf("%hhd",&(a+*n)->pericol);
}

void afisare(A *a, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    {
    printf("Abrevierea: %s\nVarsta: %d\nGreutatea: %f\nNumarul de picioare: %d\n",
    (a+i)->abreviere,(a+i)->varsta,(a+i)->greutate,(a+i)->picioare);
    if((a+i)->pericol==0) printf("Animalul nu este periculos pentru om\n");
    else
    printf("Animalul este periculos pentru om\n");   
    }
}

int main()
{
    A a[20];
    int n=-1,opt;
    A b;
    printf("Spatiu de memorare: %lu\n",sizeof(b));
    do
    {
        printf("1.Adaugare animal\n");
        printf("2.Afisare animal\n");
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
            printf("\n");
            break;
            case 0:
            exit(0);
            break;
            default:
            printf("Optiunea nu exista!\n");
            break;
        }
    }while(1);
    
}