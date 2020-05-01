#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct puncte
{
    float x,y;
}P;

float distanta(float x, float y)
{
    float dist;
    dist=sqrt(pow(x,2)+pow(y,2));
    return dist;
}

int citire(P *p)
{
    FILE *f;
    int i=0;
    if((f=fopen("9_9.txt","rt"))==NULL)
    printf("Fisierul nu poate fi deschis!");
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%f %f",&p[i].x,&p[i].y);
            i++;
        }
        fclose(f);
    }
    return i;
}
void sortare(P *p, int n)
{
    P aux;
    int i,k;
    do
    {
        k=1;
       for(i=1;i<=n;i++)
       if(distanta(p[i].x,p[i].y)<distanta(p[i-1].x,p[i-1].y))
       {
           aux=*(p+i-1);
           *(p+i-1)=*(p+i);
           *(p+i)=aux;
           k=0;
       }

    } while (!k);

    for(i=1;i<=n;i++)
    printf("%f %f\n",p[i].x,p[i].y);
}

int main()
{
    int n,i;
    P p[50];
    n=citire(p);
    sortare(p,n);
    return 0;
}