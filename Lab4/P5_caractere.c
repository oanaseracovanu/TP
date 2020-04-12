#include<stdio.h>
#include<string.h>
#include<ctype.h>

int nr_aparitii(char *sir,char c)
{
    int i=0,nr=0;
    while(sir[i]!='\0')
    {
    if(sir[i]==c) 
    nr=nr+1;
    i=i+1;
    }
    return nr;
}

int main()
{
    char sir2[11]={'a','e','i','o','u','\0'};
    char sir[20],sir1[10],v[10],i,j;
    printf("Primul sir: ");
    scanf("%s",sir);
    printf("Al doilea sir: ");
    scanf("%s",sir1);
    strcat(sir,sir1);
    int max=nr_aparitii(sir,sir2[0]);
    for(i=1;sir2[i]!='\0';i++)
    {
        if(nr_aparitii(sir,sir2[i])>max) max=nr_aparitii(sir,sir2[i]);
    }
    printf("Nr maxim de aparitii: %d \n",max);
    for(i=0;sir[i]!='\0';i++)
    if(nr_aparitii(sir,sir2[i])==max)
    printf("Caracterul care apare de cele mai multe ori: %c\n",sir2[i]);
    return 0;
}