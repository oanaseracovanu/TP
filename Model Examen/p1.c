#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct elev
{
    char *nume_elev;
    int nr_mat;
    float n1,n2,n3,media;
}elev;
elev *e=NULL;

typedef struct corigent
{
    char nume_corigent[100];
    int nr_mat_corigent;
    float medie_corigent;
}corigent;
corigent c[10];

char *alocare_caracter()
{
    char *buf=NULL;
    char *buf2,ch;
    int n=0;
    for(;;)
    {
        n++;
        buf2=(char*)realloc(buf,n*sizeof(char));
        if(!buf2)
        {
            printf("Nu se poate aloca memorie\n");
            free(buf);
            exit(EXIT_FAILURE);
        }
        else
        {
        buf=buf2;
        ch=getchar();
        if(ch=='\n')
        {
            buf[n-1]='\0';
            return buf;
        }
        buf[n-1]=ch;
        } 

    }
    return buf;
}

void citire(int n)
{
    int i;
    e=(elev*)malloc(n*sizeof(elev));
    if(e==NULL)
    {
        printf("Nu se poate aloca memorie\n");
        free(e);
        exit(EXIT_FAILURE);
    }
    for(i=0;i<n;i++)
    {
        getchar();
        printf("Nume: ");
        e[i].nume_elev=alocare_caracter();
        printf("Nr matricol: ");
        scanf("%d",&(e+i)->nr_mat);
        printf("Prima nota: ");
        scanf("%f",&(e+i)->n1);
        printf("A doua nota: ");
        scanf("%f",&(e+i)->n2);
        printf("A treia nota: ");
        scanf("%f",&(e+i)->n3);
        if((e+i)->n1>=5&&(e+i)->n2>=5&&(e+i)->n3>=5)
        (e+i)->media=(e[i].n1+e[i].n2+e[i].n3)/3;
        else
        (e+i)->media=0;
    }
}

void afisare(elev *e,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Nume elev: %s\n",(e+i)->nume_elev);
        printf("Nr matricol: %d\n",(e+i)->nr_mat);
        printf("Media elevului: %f\n",(e+i)->media);
    }
}

void sortare(int n)
{
    int i, j;
    elev aux;
    for(i=0;i<n-1;i++)
       for(j=i+1;j<n;j++)
          if(strcmp(e[i].nume_elev, e[j].nume_elev) > 0)
          {
              aux=*(e+i);
              *(e+i)=*(e+j);
              *(e+j)=aux;
          }

}

void corigenti(int n)
{
    int i,k=0;
    for(i=0;i<n;i++)
    {
        if((e+i)->media==0)
        {
        strcpy((c+k)->nume_corigent,(e+i)->nume_elev);
        (c+k)->nr_mat_corigent=(e+i)->nr_mat;
        (c+k)->medie_corigent=0;
        k++;
        }
    }
    
    for(i=0;i<k;i++)
    {
      printf("Nume elev corigent: %s\n",(c+i)->nume_corigent);
      printf("Nr matricol: %d\n",(c+i)->nr_mat_corigent);
      printf("Media: %f\n",(c+i)->medie_corigent);
    }
}

int main()
{
    int n,opt,k;
    printf("Dati n: ");
    scanf("%d",&n);
    do
    {
        printf("1.Citire\n");
        printf("2.Afisare\n");
        printf("3.Sortare\n");
        printf("4.Elevi corigenti\n");
        printf("0.Iesire\n");
        printf("Optiunea dvs: ");
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
            afisare(e,n);
            break;
            case 3:
            sortare(n);
            afisare(e,n);
            break;
            case 4:
            corigenti(n);
            break;
            default:
            printf("Optiunea nu este valida!\n");
        }
    } while (1);

    return 0; 

}