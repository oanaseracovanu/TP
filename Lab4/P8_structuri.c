#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct elevi
{
    char nume[30],data[10];
}E;

void citire(E *e, int *n)
{
    (*n)++;
    getchar();
    printf("Numele elevului: ");
    fgets((e+*n)->nume,49,stdin);
    printf("Data de nastere: ");
    scanf("%s",(e+*n)->data);
}

void afisare(E *e, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Nume: %s\n Data nastere: %s\n",(e+i)->nume,(e+i)->data);

}

void sortare(E *e, int *n)
{
    E aux;
    int i,k;
    do
    {
        k=1;
       for(i=1;i<=*n;i++)
       if(strcmp((e+i)->nume,(e+i-1)->nume)<0)
       {
           aux=*(e+i-1);
           *(e+i-1)=*(e+i);
           *(e+i)=aux;
           k=0;
       }

    } while (!k);

}
int main()
{
    E e[30];
    int i,n=-1,opt;
    do
    {
        printf("0.Iesire\n");
        printf("1.Adaugare\n");
        printf("2.Afisare\n");
        printf("3.Sortare dupa nume\n");
        printf("Optiunea dumneavoastra este: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            citire(e,&n);
            break;
            case 2:
            afisare(e,&n);
            break;
            case 3:
            sortare(e,&n);
            afisare(e,&n);
            break;
            case 0:
            exit(0);
            break;
            default:
            printf("Optiunea nu exista!\n");
        }
    } while (1);
    
    return 0;
}