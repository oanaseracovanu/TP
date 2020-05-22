#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char text[100],*p,separator[]=" \n ",cuv[10][10];
    int k,n,j;
    FILE *f;
    int i=0;
    if((f=fopen("P1.txt","rt"))==NULL)
        printf("Fisierul nu poate fi deschis!");
        else
        while(!feof(f))
        {
            fscanf(f,"%s",text);
              p=strtok(text,separator);
                i=0; n=0;
                while(p)
                {
                    strcpy(cuv[i],p);
                    i++;
                    n++;
                    p=strtok(NULL,separator);
                }
                for(j=0;j<n;j++)
                printf("%s \n",cuv[j]);
        }
    fclose(f);
    return 0;
}