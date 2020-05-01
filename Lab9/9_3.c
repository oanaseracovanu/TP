#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct coordonate
{
    int x,y;
}C;

int citire(C *c)
{
    FILE *f;
    int i=0;
    if((f=fopen("9_3.txt","rt"))==NULL)
        printf("Fisierul nu poate fi deschis!");
        else
        while(!feof(f))
        {
            fscanf(f,"%d %d",&c[i].x,&c[i].y);
            printf("%d %d ",c[i].x,c[i].y);
            printf("\n");
            i++;
        }
    fclose(f);
    return i;
}

void minim(int i,C *c)
{
    int j,l=0;
    float min;
    min=sqrt(pow(c[0].x,2)+pow(c[0].y,2));
    for(j=1;j<i;j++)
    {
        if((sqrt(pow(c[j].x,2)+pow(c[j].y,2)))<min) 
        {
        min=sqrt(pow(c[j].x,2)+pow(c[j].y,2));
        l=j;
        }
    }
     printf("Punctul care este cel mai apropiat de originea axelor se gaseste pe linia %d\n",l);
 
}

int main()
{
    C c[20];
    int i;
    i=citire(c);
    minim(i,c);
    return 0;
}