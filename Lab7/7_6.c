#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student
{
    char *nume;
    int nrmat;
}S;
char *citire_nume(const char *text)
{
    char ch;
    char *buf=NULL;
    char *buf2;
    int n=0;
    printf("%s",text); 
    for(;;)
    {
        n++;
        buf2=(char*)realloc(buf,n*sizeof(char));
        if(buf2==NULL)
        {
            free(buf);
            exit(1);
        }
        buf=buf2;
        ch=getchar();
        if(ch=='\n')
        {
            buf[n-1]='\0';
            return buf; 
        }
        buf[n-1]=ch;
    }
    return buf;
}

void citire(S *s, int *n)
{
    (*n)++;
    getchar();
    (s+*n)->nume=citire_nume("Nume: ");
    printf("Nr matricol: ");
    scanf("%d",&(s+*n)->nrmat);
}

void afisare(S *s, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Nume student: %s\nNr matricol: %d\n", (s+i)->nume,(s+i)->nrmat);
    printf("\n");
}

void sortare_nume(S *s, int *n)
{
    S aux;
    int i,k;
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

void sortare_nrmat(S *s, int *n)
{
    S aux;
    int i,k;
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

void cautare_nume(S *s, int *n, char *numes)
{
    int i;
    sortare_nume(s,n);
    for(i=0;i<=*n;i++)
    if(strcmp((s+i)->nume,numes)==0)
    printf("Studentul se afla pe pozitia: %d\n",i+1);
}

void cautare_nrmat(S *s, int *n, int nrmats)
{
    int i;
    sortare_nrmat(s,n);
    for(i=0;i<=*n;i++)
    if((s+i)->nrmat==nrmats)
    printf("Studentul se afla pe pozitia: %d\n",i+1);
}

int main()
{
    S s[20];
    int n=-1, opt,nrmats;
    char *numes;
    do
    {
        printf("1.Introducere date student\n");
        printf("2.Afisare\n");
        printf("3.Sortare dupa nume\n");
        printf("4.Sortare dupa nr matricol\n");
        printf("5.Cautare dupa nume in lista ordonata alfabetic\n");
        printf("6.Cautare dupa nr matricol in lista ordonata crescator dupa nr matricole\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra: ");
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
            sortare_nrmat(s,&n);
            afisare(s,&n);        
            break;
            case 5:
            getchar();
            numes=citire_nume("Nume student pe care doriti sa il cautati ");
            cautare_nume(s,&n,numes);
            break;
            case 6:
            printf("Nr matricol al studentului pe care doriti sa il cautati: ");
            scanf("%d",&nrmats);
            cautare_nrmat(s,&n,nrmats);
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