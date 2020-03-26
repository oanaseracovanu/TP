#include<stdio.h>
#include<stdlib.h>

typedef enum{Benzina, Motorina, Electric}motor;
typedef enum{Persoane, Marfa, Special}vehicul;
 
typedef struct vehicul
{
    motor m;
    char marca[20];
    vehicul vh;
    union{
        struct{
            int locuri;
            int airbaguri;
            }persoane;
        struct{
            int capacitate;
            char frigorific;		
            }marfa;
        char special[20];		
        }specific;
}V;

void citire(V *v, int *n)
{
    (*n)++;
    printf("Tipul motorului: 0-benzina, 1-motorina, 2-electric ");
    scanf("%d",&(v+*n)->m);
    printf("Marca: ");
    scanf("%s",(v+*n)->marca);
    printf("Tipul vechiculului: 0-persoane 1-marfa 2-special ");
    scanf("%d",&(v+*n)->vh);
    switch((v+*n)->vh)
    {
        case 0:
        printf("Nr de locuri: ");
        scanf("%d",&(v+*n)->specific.persoane.locuri);
        printf("Nr de airbaguri: ");
        scanf("%d",&(v+*n)->specific.persoane.airbaguri);
        break;
        case 1:
        printf("Capacitatea: ");
        scanf("%d",&(v+*n)->specific.marfa.capacitate);
        printf("Este frigorific? 0- nu, 1-da ");
        scanf("%hhd",&(v+*n)->specific.marfa.frigorific);
        break;
        case 2:
        printf("Intrebuintarea specifica: ");
        scanf("%s",(v+*n)->specific.special);
        break;
    }
}

void afisare(V *v, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    {
        switch((v+i)->m)
        {
            case 0:
            printf("Motor pe benzina\n");
            break;
            case 1:
            printf("Motor pe motorina\n");
            break;
            case 2:
            printf("Motor electric\n");
        }
        printf("Marca: %s\n",(v+i)->marca);
        switch((v+i)->vh)
        {
            case 0:
            printf("Vehicul de persoane\n");
            printf("Nr de locuri: %d\nNr de airbaguri: %d\n",(v+i)->specific.persoane.locuri,(v+i)->specific.persoane.airbaguri);
            break;
            case 1:
            printf("Vehicul de marfa\n");
            printf("Capacitatea: %d\n",(v+i)->specific.marfa.capacitate);
            if((v+i)->specific.marfa.frigorific==0) printf("Nu este frigorific\n");
            else
            printf("Este frigorific\n");
            break;
            case 2:
            printf("Vehicul special\n");
            printf("Intrebuintare specifica: %s\n",(v+i)->specific.special);
            
        }
    }
}

int main()
{
    V v[20];
    int n=-1, opt;
    do
    {
        printf("1.Adaugare vehicul\n");
        printf("2.Afisare\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            citire(v,&n);
            break;
            case 2:
            afisare(v,&n);
            printf("\n");
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