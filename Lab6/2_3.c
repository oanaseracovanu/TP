#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct text
{
    char variabila[10];
    char valoare[10];
    char legatura[2];
}T;

int val_variabila(char *sir)
{
    int i;
    if(!((sir[0]>='a'&&sir[0]<='z')||(sir[0]>='A'&&sir[0]<='Z'))) return 0;
    for(i=0;sir[i]!='\0';i++)
    if(!((sir[i]>='a'&&sir[i]<='z')||(sir[i]>='A'&&sir[i]<='Z')||(sir[i]>='0'&&sir[i]<='9')))  return 0;
    return 1;
}

int val_valoare(char *sir)
{
    int i,n=strlen(sir)-1;
    for(i=1;i<n;i++)
    if(!((sir[0]=='"'&&sir[n]=='"')||(sir[i]>='0'&&sir[i]<='9')||(strchr("'",sir[0]) && strchr("'",sir[n])))) 
    return 0;
    return 1;
}

void citire(T *t, int *n)
{
    int k;
    (*n)++;
    printf("Variabila: ");
    scanf("%s",(t+*n)->variabila);
    if(val_variabila((t+*n)->variabila)==0)
    {
        printf("Variabila nu corespunde!");
        exit(0);
    }

    printf("Egalul: ");
    scanf("%s",(t+*n)->legatura);
    if(strcmp((t+*n)->legatura,"=")!=0) 
    {
        printf("Legatura se face prin egal!");
        exit(0);
    }

    printf("Valoarea: ");
    scanf("%s",(t+*n)->valoare);
    if(val_valoare((t+*n)->valoare)==0)
    {
        printf("Valoarea nu corespunde!");
        exit(0);
    }
}

void afisare(T *t, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("%s %s %s",(t+i)->variabila,(t+i)->legatura,(t+i)->valoare);
}

int main()
{
    T t[20];
    int n=-1,opt;
    do
    {
        printf("1.Citire linie\n");
        printf("2.Afisare\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            citire(t,&n);
            break;
            case 2:
            afisare(t,&n);
            printf("\n");
            break;
            case 0:
            exit(0);
            break;
            default:
            printf("Optiune gresita!\n");
            break;
        }
    } while (1);
    
    return 0;
}

