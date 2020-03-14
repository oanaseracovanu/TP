#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct punct
{
    float a,b;
}P;

void citire(P *p,int *n)
{
    (*n)++;
    printf("Prima coordonata a punctului %d: ",*n+1);
    scanf("%f",&(p+*n)->a);
    printf("A doua coordonata: ",*n+1);
    scanf("%f",&(p+*n)->b);
}

void afisare(P *p, int *n)
{
    int i;
    for(i=0;i<=*n;i++)
    printf("Coordonata a: %f\n Coordonata b: %f\n", (p+i)->a, (p+i)->b);
}
float radical(float a,float b)
{
    return (a-b)*(a-b);
}
void minim(P *p, int *n)
{
    int i;
    float min=radical((p+1)->a,(p+0)->a) + radical((p+1)->b, (p+0)->b),dist=min;
    for(i=1;i<=*n;i++)
    {
        dist=radical((p+i)->a,(p+i+1)->a) + radical((p+i)->b, (p+i+1)->b);
            if(dist<min)
                min=dist;
    }
    printf("Distanta minima este: %f\n", sqrt(min));
}

int main()
{
    P p[10];
    int v,n=-1,opt,i;
    printf("Dati numarul de puncte pe care doriti sa le introduceti: \n");
    scanf("%d",&v);
    do
    {
        printf("0.Iesire\n");
        printf("1.Introducere coordonate\n");
        printf("2.Afisare coordonate\n");
        printf("3.Distanta dintre cele mai apropiate puncte\n");
        printf("Optiunea dumneavoastra este:\n");
        scanf("%d",&opt);
        switch(opt)
        {
            
            case 1: 
            for(i=0;i<v;i++)
            citire(p,&n);
            break;
            case 2:
            afisare(p,&n);
            break;
            case 3:
            minim(p,&n);
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