#include<stdio.h>
#include<stdlib.h>

int citire(float v[])
{
    FILE *f;
    int i=0;
    if((f=fopen("in.txt","rt"))==NULL)
    printf("Fisierul nu poate fi deschis!");
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%f",&v[i]);
            if(v[i]<1000)
            v[i]+=v[i]*0.15;
            i++;
        }
        fclose(f);
    }
    return i;
}

void scriere(float v[],int i)
{
    FILE *f;
    int n;
    if((f=fopen("indexate.txt","wt"))==NULL)
    printf("Fisierul nu poate fi deschis pentru scriere!");
    else
    {
    for(n=0;n<i;n++)
    fprintf(f,"%f\n",v[n]);
    }
    fclose(f);
}

int main()
{
    int n;
    float v[20];
    n=citire(v);
    scriere(v,n);
    return 0;
}