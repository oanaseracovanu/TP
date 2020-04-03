#include<stdio.h>
#include<stdlib.h>

typedef struct persoana
{ 
    char *nume;
    int varsta;
 }P;  

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

void citire(P *p, int *n)
{
    (*n)++;
    getchar();
    (p+*n)->nume=citire_nume("Nume: ");
    printf("Varsta persoanei: ");
    scanf("%d",&(p+*n)->varsta);
}

void afisare(P *p, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Nume: %s\nVarsta: %d\n",(p+i)->nume,(p+i)->varsta);
}

int main()
{
    P p[20];
    int n=-1,opt;
    do
    {
        printf("1.Introducere date despre o persoana\n");
        printf("2.Afisare\n");
        printf("0.Iesire\n");
        printf("Optiunea dumneavoastra: ");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
            citire(p,&n);
            break;
            case 2:
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