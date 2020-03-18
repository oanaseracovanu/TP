#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    char nume[40];
    int nrmat;
}S;

void citire(S *s, int *n)
{
    (*n)++;
    printf("Nume student: "); 
    scanf("%s",(s+*n)->nume);
    printf("Numarul matricol al studentului: ");
    scanf("%d",&(s+*n)->nrmat);
}

void afisare(S *s, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Nume: %s\n Numar matricol: %d\n",(s+i)->nume,(s+i)->nrmat);
}

void sortare_nume(S *s, int *n)
{
    int i,k;
    S aux;
    do
    {
       k=1;
       for(i=1;i<=*n;i++)
       if(strcmp((s+i)->nume,(s+i-1)->nume)<0)
       {
           aux=*(s+i-1);
           *(s+i-1)=*(s+i);
           *(s+i)=aux;
           k=0;
       }
    } while (!k);
    
}

void sortare_nrmatricol(S *s, int *n)
{
    int i,k;
    S aux;
    do
    {
        k=1;
        for(i=1;i<=*n;i++)
        if((s+i)->nrmat<(s+i-1)->nrmat)
        {
            aux=*(s+i-1);
            *(s+i-1)=*(s+i);
            *(s+i)=aux;
            k=0;
        }
    }while(!k);
}

void cautare1(S *s, int *n)
{
    char numele[40];
    int i;
    printf("Pe cine doriti sa cautati?\n");
    scanf("%s",numele);
    sortare_nume(s,n);
    for(i=0;i<=*n;i++)
    if(strcmp((s+i)->nume,numele)==0) printf("Studentul ocupa pozitia %d\n",i+1);
}

void cautare2(S *s, int *n)
{
    int i,numar_matricol;
    printf("Care este numarul matricol corespunzator elevului pe care doriti sa il cautati?\n");
    scanf("%d",&numar_matricol);
    sortare_nrmatricol(s,n);
    for(i=0;i<=*n;i++)
    if((s+i)->nrmat==numar_matricol)
    printf("Nr matricol se afla pe pozitia: %d\n",i+1);
}

int main()
{
    S s[20];
    int n=-1,opt;
    do
    {
        printf("1.Introducere\n");
        printf("2.Afisare\n");
        printf("3.Sortarea studentilor dupa nume\n");
        printf("4.Sortarea studentilor dupa numarul matricol\n");
        printf("5.Pozitia unui student in lista ordonata alfabetic dupa nume\n");
        printf("6.Pozitia numarului matricol in lista ordonata crescator dupa numerele matricole\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra este: \n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            citire(s,&n);
            break;
            case 2:
            afisare(s,&n);
            break;
            case 3:
            sortare_nume(s,&n);
            afisare(s,&n);
            break;
            case 4:
            sortare_nrmatricol(s,&n);
            afisare(s,&n);
            break;
            case 5:
            cautare1(s,&n);
            break;
            case 6:
            cautare2(s,&n);
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