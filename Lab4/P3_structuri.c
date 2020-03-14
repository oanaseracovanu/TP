#include<stdio.h>
#include<stdlib.h>


typedef struct drept
{
    int latime, inaltime;
}D;

void citire(D *d, int *n)
{
    (*n)++;
    printf("Latimea dreptunghiului %d: \n",*n+1);
    scanf("%d",&(d+*n)->latime);
    printf("Inaltimea dreptunghiului %d:\n",*n+1);
    scanf("%d",&(d+*n)->inaltime);
}

void afisare(D *d, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Latime: %d Lungime: %d \n",(d+i)->latime, (d+i)->inaltime);
}

void arie_maxima(D *d, int *n)
{
    int i,k,arie[5],max=0;
    for(i=0;i<=*n;i++)
    {
    *(arie+i)=(d+i)->latime*(d+i)->inaltime;
    if(*(arie+i)>max)
    {
     max=*(arie+i);
    }
    }
     for(i=0;i<=*n;i++)
     if(*(arie+i)==max)
     printf("Latimea dreptunghiului este: %d, iar inaltimea sa este: %d\n",(d+i)->latime,(d+i)->inaltime);
}

int main()
{
    D d[5];
    int opt,nr,i,n=-1;
    printf("Pentru cate dreptunghiuri doriti sa verificati?");
    scanf("%d",&nr);
    do
    {
      printf("0.Iesire\n");
      printf("1.Citire\n");
      printf("2.Afisare\n");
      printf("3.Aria maxima\n");
      printf("Optiunea dumneavoastra este:\n");
      scanf("%d",&opt);
      switch(opt)
      {
          case 1:
            for(i=1;i<=nr;i++)
          citire(d,&n);
          break;
          case 2:
            afisare(d,&n);
          break;
          case 3:
          arie_maxima(d,&n);
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