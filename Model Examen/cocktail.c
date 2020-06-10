//sa se defineasca structura, sa se memoreze cu consum optim
//sa se afiseze in ordinea alfabetica a denumirii
//sa se memoreze intr-un fisier binar datele produselor cu pretul>pret citit de la tastatura

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{
    char *denumire;
    int pret,cantitate;
}P;
P *p=NULL;

char *alocare()
{
    char ch,*buf=NULL,*buf2;
    int n=0;
    for(;;)
    {
        n++;
        buf2=(char*)realloc(buf,n*sizeof(char));
        if(!buf2)
        {
            printf("Eroare la alocare\n");
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

void citire(int n)
{
    int i,k;
    p=(P*)malloc(n*sizeof(P));
    if(!p)
    {
        printf("Structura nu poate fi alocata dinamic!\n");
        free(p);
        exit(1);
    }
    for(i=0;i<n;i++)
    {
    getchar();
    printf("Denumirea produsului: ");
    (p+i)->denumire=alocare();
    printf("Pretul produsului: ");
    scanf("%d",&(p+i)->pret);
    printf("Cantitatea produsului: ");
    scanf("%d",&(p+i)->cantitate);
    }
    P aux;
    do
    {
        k=1;
        for(i=1;i<n;i++)
        if(strcmp((p+i)->denumire,(p+i-1)->denumire)<0)
        {
            aux=*(p+i-1);
            *(p+i-1)=*(p+i);
            *(p+i)=aux;
            k=0;
        }
    } while (!k);
}

void afisare(int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("Denumire: %s\nPret: %d\nCantitate: %d\n", (p+i)->denumire,(p+i)->pret,(p+i)->cantitate);
    printf("\n");
}

void fisier(int n)
{
    int i;
    int pret_min;
    printf("Pretul minim: ");
    scanf("%d",&pret_min);
    FILE *f;
    f=fopen("produse.dat","wb");
    if(!f)
    {
        printf("Fisierul nu poate fi deschis!\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        for(i=0;i<n;i++)
        if((p+i)->pret>pret_min)
        fwrite(p,sizeof(P),n,f);
    }
    fclose(f);
}

int main()
{
    int n,opt;
    printf("Cate produse doriti sa adaugati? ");
    scanf("%d",&n);
    do
    {
       printf("1.Adaugare\n");
       printf("2.Afisare in ordine alfabetica\n");
       printf("3.Memorare fisier binar\n");
       printf("0.Iesire\n");
       printf("Optiunea dumneavoastra: ");
       scanf("%d",&opt);
       switch(opt)
       {
           case 0:
           exit(0);
           break;
           case 1:
           citire(n);
           break;
           case 2:
           afisare(n);
           break;
           case 3:
           fisier(n);
           break;
           default:
           printf("Optiune invalida!\n");
           break;
       }

    } while (1);
    
    return 0;
}