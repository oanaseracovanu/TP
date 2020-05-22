#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
    char nume[20],prenume[20];
    float nota;
}stud;

int citire(stud *tab)
{
    FILE *f;
    int i=0;
    if((f=fopen("P2.txt","rt"))==NULL)
    printf("Fisierul nu poate fi deschis!\n");
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %s %f",tab[i].nume,tab[i].prenume,&tab[i].nota);
            i++;
        }
    }
    fclose(f);
    return i;  
}

void nr(stud *tab, int n)
{
    int i,p=0,s=0,c=0,z=0;
    for(i=0;i<n;i++)
    {
    if(tab[i].nota<5) p++;
    if(tab[i].nota==5) c++;
    if(tab[i].nota<8&&tab[i].nota>6) s++;
    if(tab[i].nota==10||tab[i].nota==9) z++;
    }
    printf("Sunt %d studenti cu note sub 5\n",p);
    printf("Sunt %d studenti cu note de 5\n",c);
    printf("Sunt %d studenti cu note intre 6 si 8\n",s);
    printf("Sunt %d studenti cu note de 9 sau 10\n",z);
}

int main()
{
    stud tab[10];
    int n;
    n=citire(tab);
    nr(tab,n);
    return 0;
}